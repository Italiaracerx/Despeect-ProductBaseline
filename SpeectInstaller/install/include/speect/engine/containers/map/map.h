/************************************************************************************/
/* Copyright (c) 2008-2011 The Department of Arts and Culture,                      */
/* The Government of the Republic of South Africa.                                  */
/*                                                                                  */
/* Contributors:  Meraka Institute, CSIR, South Africa.                             */
/*                                                                                  */
/* Permission is hereby granted, free of charge, to any person obtaining a copy     */
/* of this software and associated documentation files (the "Software"), to deal    */
/* in the Software without restriction, including without limitation the rights     */
/* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell        */
/* copies of the Software, and to permit persons to whom the Software is            */
/* furnished to do so, subject to the following conditions:                         */
/* The above copyright notice and this permission notice shall be included in       */
/* all copies or substantial portions of the Software.                              */
/*                                                                                  */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR       */
/* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,         */
/* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE      */
/* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER           */
/* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,    */
/* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN        */
/* THE SOFTWARE.                                                                    */
/*                                                                                  */
/************************************************************************************/
/*                                                                                  */
/* AUTHOR  : Aby Louw                                                               */
/* DATE    : 5 October 2008                                                         */
/*                                                                                  */
/************************************************************************************/
/*                                                                                  */
/* A map class, an abstract data type composed of a collection of unique string     */
/* keys and a collection of values, where each key is associated with one value.    */
/*                                                                                  */
/* Loosely based on EST_TKVL of Edinburgh Speech Tools,                             */
/* http://www.cstr.ed.ac.uk/projects/speech_tools (1.2.96)                          */
/* Note that this is a derived work with no verbatim source code from above         */
/* mentioned project.                                                               */
/*                                                                                  */
/************************************************************************************/

#ifndef _SPCT_MAP_H__
#define _SPCT_MAP_H__


/************************************************************************************/
/* Edinburgh Speech Tools license,  EST_TKVL                                        */
/*                                                                                  */
/*                     Centre for Speech Technology Research                        */
/*                          University of Edinburgh, UK                             */
/*                           Copyright (c) 1995,1996                                */
/*                             All Rights Reserved.                                 */
/*       Permission is hereby granted, free of charge, to use and distribute        */
/*       this software and its documentation without restriction, including         */
/*       without limitation the rights to use, copy, modify, merge, publish,        */
/*       distribute, sublicense, and/or sell copies of this work, and to            */
/*       permit persons to whom this work is furnished to do so, subject to         */
/*       the following conditions:                                                  */
/*        1. The code must retain the above copyright notice, this list of          */
/*           conditions and the following disclaimer.                               */
/*        2. Any modifications must be clearly marked as such.                      */
/*        3. Original authors' names are not deleted.                               */
/*        4. The authors' names are not used to endorse or promote products         */
/*           derived from this software without specific prior written              */
/*           permission.                                                            */
/*       THE UNIVERSITY OF EDINBURGH AND THE CONTRIBUTORS TO THIS WORK              */
/*       DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING            */
/*       ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT         */
/*       SHALL THE UNIVERSITY OF EDINBURGH NOR THE CONTRIBUTORS BE LIABLE           */
/*       FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES          */
/*       WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN         */
/*       AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,                */
/*       ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF             */
/*       THIS SOFTWARE.                                                             */
/*                                                                                  */
/*       Author :  Paul Taylor                                                      */
/*                                                                                  */
/************************************************************************************/


/**
 * @file map.h
 * Abstract map data container.
 */


/**
 * @ingroup SContainer
 * @defgroup SMap Map
 * A map class, an abstract data type composed of a collection of
 * unique keys (strings) and a collection of values (#SObject), where
 * each key is associated with one value.
 *
 * The iterator (@ref SIterator) implementation of #SMap objects
 * returns a element (as #SObject) of the list for the
 * #SIteratorObject call. When a key-value pair is unlinked from the
 * list with #SIteratorUnlink, the key is freed, and the value is
 * returned (as #SObject). The SMap iterator implements the
 * #SIteratorKey call and returns the key of a key-value pair.
 *
 * @{
 */


/************************************************************************************/
/*                                                                                  */
/* Modules used                                                                     */
/*                                                                                  */
/************************************************************************************/

#include "include/common.h"
#include "base/errdbg/errdbg.h"
#include "containers/iterator.h"
#include "containers/container.h"
#include "containers/list/list.h"


/************************************************************************************/
/*                                                                                  */
/* Begin external c declaration                                                     */
/*                                                                                  */
/************************************************************************************/
S_BEGIN_C_DECLS


/************************************************************************************/
/*                                                                                  */
/* Macros                                                                           */
/*                                                                                  */
/************************************************************************************/

/**
 * @name Utility Macros
 * @{
 */


/**
 * @hideinitializer
 * Return the given #SMap child class object as a list object.
 * Return the given object as a map object.
 * @param SELF The given object.
 * @return Given object as #SMap* type.
 * @note This casting is not safety checked.
 */
#define S_MAP(SELF)    ((SMap *)(SELF))


/**
 * @hideinitializer
 * Call the given function method of the given #SMap.
 * @param SELF The given #SMap*.
 * @param FUNC The function method of the given object to call.
 * @note This casting is not safety checked.
 * @note Example usage:
 @verbatim
 S_MAP_CALL(self, func)(param1, param2, ..., paramN);
 @endverbatim
 * where @c param1, @c param2, ..., @c paramN are the parameters passed to the object function
 * @c func.
 */
#define S_MAP_CALL(SELF, FUNC)					\
	((SMapClass *)S_OBJECT_CLS(SELF))->FUNC


/**
 * @}
 */


/************************************************************************************/
/*                                                                                  */
/* SMap definition                                                                  */
/*                                                                                  */
/************************************************************************************/

/**
 * A map object. An abstract data type composed of a collection of
 * unique string keys and a collection of values (of type #SObject),
 * where each key is associated with one value.
 * @extends SContainer
 */
typedef struct
{
	/**
	 * @protected Inherit from #SContainer.
	 */
	SContainer  obj;
} SMap;


/************************************************************************************/
/*                                                                                  */
/* SMapClass definition                                                             */
/*                                                                                  */
/************************************************************************************/

/**
 * The map class structure. It inherits from #SContainer so that it supports
 * different map implementations.
 * @extends SContainerClass
 */
typedef struct
{
	/* Class members */
	/**
	 * @protected Inherit from #SContainerClass.
	 */
	SContainerClass  _inherit;

	/* Class methods */
	/**
	 * @protected ValGet function pointer.
	 * Get the #SObject of the named key.
	 *
	 * @param self The key-value map.
	 * @param key The string key of the object to get.
	 * @param error Error code.
	 *
	 * @return Pointer to the #SObject of the named key, or #NULL if
	 * none.
	 */
	const SObject *(* const val_get)    (const SMap *self, const char *key,
										 s_erc *error);

	/**
	 * @protected ValSet function pointer.
	 * Set the value of the named key as an #SObject. If the named key
	 * already exists then it's #SObject will be deleted (if not
	 * referenced) and replaced.
	 *
	 * @param self The key-value map.
	 * @param key The string key of the object to set.
	 * @param object Pointer to the #SObject of the named key.
	 * @param error Error code.
	 */
	void           (* const val_set)    (SMap *self, const char *key,
										 const SObject *val, s_erc *error);

	/**
	 * @protected ValDelete function pointer.
	 * Delete named key-value pair from the map. Key is removed
	 * (freed) from list and value deleted if it doesn't have any
	 * references.
	 *
	 * @param self The key-value map.
	 * @param key The string key of the object to delete.
	 * @param error Error code.
	 */
	void           (* const val_delete) (SMap *self, const char *key,
										 s_erc *error);

	/**
	 * @protected ValUnlink function pointer.
	 * Remove named key-value pair from the map. Key is removed
	 * (freed) from list and value object is returned.
	 *
	 * @param self The key-value map.
	 * @param key The string key of the object to unlink.
	 * @param error Error code.
	 *
	 * @return #SObject of named key.
	 */
	SObject       *(* const val_unlink) (SMap *self, const char *key,
										 s_erc *error);

	/**
	 * @protected ValPresent function pointer.
	 * Query the presence of a named key-value pair in the map.
	 *
	 * @param self The key-value map.
	 * @param key The string key of the object's presence to query.
	 * @param error Error code.
	 *
	 * @return #TRUE or #FALSE.
	 */
	s_bool         (* const val_present)(const SMap *self, const char *key,
										 s_erc *error);

	/**
	 * @protected ValKeys function pointer.
	 * Get a list of the keys in the map container.
	 *
	 * @param self The key-value map.
	 * @param error Error code.
	 *
	 * @return #SList of keys in container, or @a NULL if the
	 * container is empty. The list objects (keys) are string objects
	 * and are accessed with #SObjectGetString.
	 *
	 * @note The caller is responsible for the memory of the returned
	 * #SList object.
	 */
	SList         *(* const val_keys)   (const SMap *self, s_erc *error);

	/**
	 * @protected Size function pointer.
	 * Get the number of key-value pairs in the map.
	 *
	 * @param self The key-value map.
	 * @param error Error code.
	 *
	 * @return The number of key-value pairs in the map.
	 */
	size_t         (* const size)       (const SMap *self, s_erc *error);

	/**
	 * @protected Copy (shallow) function pointer.
	 * Copy the key-value pairs from @a src to @a dst. If @a dst does
	 * not exist a new one will be created.
	 *
	 * @param dst Pointer to destination key-value map.
	 * @param src Pointer to source key-value map.
	 * @param error Error code.
	 *
	 * @return Pointer to destination key-value map.
	 *
	 * @note Values in @a dst with the same named keys as in @a src
	 * will be overwritten with the values in @a src.
	 */
	SMap          *(* const copy)       (SMap *dst, const SMap *src,
										 s_erc *error);
} SMapClass;


/************************************************************************************/
/*                                                                                  */
/*  Function prototypes                                                             */
/*                                                                                  */
/************************************************************************************/

/**
 * @name Accessing
 * @{
 */


/**
 * Get the signed integer value of the named key.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the value to get.
 * @param error Error code.
 *
 * @note An @c S_ARGERROR error is set if the named key is
 * not in the map.
 *
 * @sa SMapGetIntDef
 *
 * @return The signed integer value of the named key.
 */
S_API sint32 SMapGetInt(const SMap *self, const char *key, s_erc *error);


/**
 * Get the float value of the named key.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the value to get.
 * @param error Error code.
 *
 * @note An @c S_ARGERROR error is set if the named key is
 * not in the map.
 *
 * @sa SMapGetFloatDef
 *
 * @return The float value of the named key.
 */
S_API float SMapGetFloat(const SMap *self, const char *key, s_erc *error);


/**
 * Get the string value of the named key.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the value to get.
 * @param error Error code.
 *
 * @note An @c S_ARGERROR error is set if the named key is
 * not in the map.
 *
 * @sa SMapGetStringDef
 *
 * @return Pointer to the string of the named key.
 */
S_API const char *SMapGetString(const SMap *self, const char *key, s_erc *error);


/**
 * Get the object of the named key.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the object to get.
 * @param error Error code.
 *
 * @note An @c S_ARGERROR error is set if the named key is
 * not in the map.
 *
 * @sa SMapGetObjectDef
 *
 * @return Pointer to the object of the named key.
 */
S_API const SObject *SMapGetObject(const SMap *self, const char *key, s_erc *error);


/**
 * Get a list of the keys in the map container.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param error Error code.
 *
 * @return #SList of keys in container, or @a NULL if the container is
 * empty. The list objects (keys) are string objects and are accessed
 * with #SObjectGetString.
 *
 * @note The caller is responsible for the memory of the returned
 * #SList object.
 */
S_API SList *SMapGetKeys(const SMap *self, s_erc *error);


/**
 * @}
 */


/**
 * @name Accessing (revert to default)
 * @{
 */


/**
 * Get the signed integer value of the named key. If the named key is
 * not found then use the given default.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the value to get.
 * @param def Default value to return if named key is not found.
 * @param error Error code.
 *
 * @sa SMapGetInt
 *
 * @return The signed integer value of the named key, or given default
 * value.
 */
S_API sint32 SMapGetIntDef(const SMap *self, const char *key,
						   sint32 def, s_erc *error);


/**
 * Get the float value of the named key. If the named key is not found
 * then use the given default.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the value to get.
 * @param def Default value to return if named key is not found.
 * @param error Error code.
 *
 * @sa SMapGetFloat
 *
 * @return The float value of the named key, or given default value.
 */
S_API float SMapGetFloatDef(const SMap *self, const char *key,
							float def, s_erc *error);


/**
 * Get the string value of the named key. If the named key is not
 * found then use the given default.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the value to get.
 * @param def Default value to return if named key is not found.
 * @param error Error code.
 *
 * @sa SMapGetString
 *
 * @return Pointer to the string of the named key, or given default
 * value.
 */
S_API const char *SMapGetStringDef(const SMap *self, const char *key,
								   const char *def, s_erc *error);


/**
 * Get the #SObject of the named key. If the named key is not found
 * then use the given default.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the object to get.
 * @param def Default value to return if named key is not found.
 * @param error Error code.
 *
 * @sa SMapGetObject
 *
 * @return Pointer to the #SObject of the named key, or given default
 * value.
 */
S_API const SObject *SMapGetObjectDef(const SMap *self, const char *key,
									  const SObject *def, s_erc *error);


/**
 * @}
 */


/**
 * @name Setting
 * @{
 */


/**
 * Set the value of the named key as a signed integer value. If the
 * named key already exists then it's data will be replaced.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the value to set.
 * @param i The signed integer value of the named key.
 * @param error Error code.
 */
S_API void SMapSetInt(SMap *self, const char *key, sint32 i, s_erc *error);


/**
 * Set the value of the named key as a float value. If the named key
 * already exists then it's data will be replaced.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the value to set.
 * @param f The float value of the named key.
 * @param error Error code.
 */
S_API void SMapSetFloat(SMap *self, const char *key, float f, s_erc *error);


/**
 * Set the value of the named key as a string value. If the named key
 * already exists then it's data will be replaced.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the value to set.
 * @param s Pointer to the string value of the named key.
 * @param error Error code.
 */
S_API void SMapSetString(SMap *self, const char *key, const char *s, s_erc *error);


/**
 * Set the value of the named key as an #SObject. If the named key
 * already exists then it's #SObject will be deleted (if not
 * referenced) and replaced.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the object to set.
 * @param object Pointer to the #SObject of the named key.
 * @param error Error code.
 *
 * @note The map takes hold of the object, and therefore the
 * object should not be deleted with a call to #S_DELETE,
 * see #SMapObjectDelete and #SMapObjectUnlink.
 *
 */
S_API void SMapSetObject(SMap *self, const char *key, const SObject *object, s_erc *error);


/**
 * @}
 */


/**
 * @name Delete/Unlink
 * @{
 */


/**
 * Delete the named key-value pair from the map. Key is removed from
 * list and value deleted if it doesn't have any references.
 *
 * @public @memberof SMap
 * @param self The key-value map.
 * @param key The string key of the value to delete.
 * @param error Error code.
 */
S_API void SMapObjectDelete(SMap *self, const char *key, s_erc *error);


/**
 * Remove named key-value pair from the map. Key is removed (freed)
 * from list and value object is returned.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the value to unlink.
 * @param error Error code.
 *
 * @return #SObject of named key.
 */
S_API SObject *SMapObjectUnlink(SMap *self, const char *key, s_erc *error);


/**
 * @}
 */


/**
 * @name Query
 * @{
 */


/**
 * Query the presence of a named key-value pair in the map.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param key The string key of the object's presence to query.
 * @param error Error code.
 *
 * @return #TRUE or #FALSE.
 */
S_API s_bool SMapObjectPresent(const SMap *self, const char *key, s_erc *error);


/**
 * Get the number of key-value pairs in the container.
 * @public @memberof SMap
 *
 * @param self The key-value map.
 * @param error Error code.
 *
 * @return The number of key-value pairs in the container.
 */
S_API size_t SMapSize(const SMap *self, s_erc *error);


/**
 * @}
 */


/**
 * @name Copy
 * @{
 */


/**
 * Copy (shallow) the key-value pairs from @a src to @a dst. If @a dst
 * does not exist a new one will be created.
 * @public @memberof SMap
 *
 * @param dst Pointer to destination key-value map. If @c NULL then a
 * new map will be created.
 * @param src Pointer to source key-value map.
 * @param error Error code.
 *
 * @return Pointer to destination key-value map.
 *
 * @note Values in dst with the same named keys as in src will be
 * overwritten with the values in src.
 */
S_API SMap *SMapCopy(SMap *dst, const SMap *src, s_erc *error);


/**
 * @}
 */


/**
 * Add the SMap class to the object system.
 * @private
 * @param error Error code.
 */
S_LOCAL void _s_map_class_add(s_erc *error);


/************************************************************************************/
/*                                                                                  */
/* End external c declaration                                                       */
/*                                                                                  */
/************************************************************************************/
S_END_C_DECLS


/**
 * @}
 * end documentation
 */

#endif /* _SPCT_MAP_H__ */
