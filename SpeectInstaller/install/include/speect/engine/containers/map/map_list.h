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
/* DATE    : 8 October 2008                                                         */
/*                                                                                  */
/************************************************************************************/
/*                                                                                  */
/* List implementation of SMap container.                                           */
/*                                                                                  */
/*                                                                                  */
/************************************************************************************/

#ifndef _SPCT_MAP_LIST_H__
#define _SPCT_MAP_LIST_H__


/**
 * @file map_list.h
 * Doubly linked list, map data container implementation.
 */


/**
 * @ingroup SMap
 * @defgroup SMapList Doubly Linked List
 * Doubly linked list, map data container implementation.
 * @{
 */


/************************************************************************************/
/*                                                                                  */
/* Modules used                                                                     */
/*                                                                                  */
/************************************************************************************/

#include "include/common.h"
#include "base/containers/list/list.h"
#include "containers/map/map.h"


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
 * @hideinitializer
 * Return the given parent/child class object of an #SMapList type as an
 * SMapList object.
 *
 * @param SELF The given object.
 *
 * @return Given object as #SMapList* type.
 *
 * @note This casting is not safety checked.
 */
#define S_MAPLIST(SELF)    ((SMapList *)(SELF))



/************************************************************************************/
/*                                                                                  */
/* SMapList definition                                                              */
/*                                                                                  */
/************************************************************************************/

/**
 * The SMapList structure.
 * Inherits and implements #SMap as a doubly linked list.
 * @extends SMap
 */
typedef struct
{
	/**
	 * @protected Inherit from #SMap.
	 */
	SMap     obj;

	/**
	 * @protected Doubly linked list container for keys-values.
	 */
	s_list  *list;
} SMapList;


/************************************************************************************/
/*                                                                                  */
/* SMapListClass definition                                                         */
/*                                                                                  */
/************************************************************************************/

/**
 * Typedef for key-value list container class struct. Same as #SMapClass as
 * we are not adding any new methods.
 */
typedef SMapClass SMapListClass;


/************************************************************************************/
/*                                                                                  */
/*  Function prototypes                                                             */
/*                                                                                  */
/************************************************************************************/

/**
 * Add the SMapList class to the object system.
 * @private
 * @param error Error code.
 */
S_LOCAL void _s_map_list_class_add(s_erc *error);


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

#endif /* _SPCT_MAP_LIST_H__ */


