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
/* DATE    : 27 October 2008                                                        */
/*                                                                                  */
/************************************************************************************/
/*                                                                                  */
/* A Relation is a named list of Items. An Utterance can hold an arbitrary number   */
/* of Relations.                                                                    */
/*                                                                                  */
/* Loosely based on cst_relation of Flite, http://cmuflite.org (1.3),               */
/* and Relation of FreeTTS, http://sourceforge.net/projects/freetts (1.2).          */
/* Note that this is a derived work with no verbatim source code from above         */
/* mentioned projects.                                                              */
/*                                                                                  */
/************************************************************************************/

#ifndef _SPCT_RELATION_H__
#define _SPCT_RELATION_H__


/************************************************************************************/
/*  Flite license, cst_relation                                                     */
/*                                                                                  */
/*                       Language Technologies Institute                            */
/*                          Carnegie Mellon University                              */
/*                             Copyright (c) 1999                                   */
/*                             All Rights Reserved.                                 */
/*                                                                                  */
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
/*                                                                                  */
/*       CARNEGIE MELLON UNIVERSITY AND THE CONTRIBUTORS TO THIS WORK               */
/*       DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING            */
/*       ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT         */
/*       SHALL CARNEGIE MELLON UNIVERSITY NOR THE CONTRIBUTORS BE LIABLE            */
/*       FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES          */
/*       WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN         */
/*       AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,                */
/*       ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF             */
/*       THIS SOFTWARE.                                                             */
/*                                                                                  */
/*       Author:  Alan W Black                                                      */
/*                                                                                  */
/************************************************************************************/


/************************************************************************************/
/*                                                                                  */
/* FreeTTS license, Relation                                                        */
/*                                                                                  */
/*      Portions Copyright 2001-2004 Sun Microsystems, Inc.                         */
/*      Portions Copyright 1999-2001 Language Technologies Institute,               */
/*      Carnegie Mellon University.                                                 */
/*      All Rights Reserved.  Use is subject to license terms.                      */
/*                                                                                  */
/*      Permission is hereby granted, free of charge, to use and distribute         */
/*      this software and its documentation without restriction, including          */
/*      without limitation the rights to use, copy, modify, merge, publish,         */
/*      distribute, sublicense, and/or sell copies of this work, and to             */
/*      permit persons to whom this work is furnished to do so, subject to          */
/*      the following conditions:                                                   */
/*                                                                                  */
/*       1. The code must retain the above copyright notice, this list of           */
/*          conditions and the following disclaimer.                                */
/*       2. Any modifications must be clearly marked as such.                       */
/*       3. Original authors' names are not deleted.                                */
/*       4. The authors' names are not used to endorse or promote products          */
/*          derived from this software without specific prior written               */
/*          permission.                                                             */
/*                                                                                  */
/*      SUN MICROSYSTEMS, INC., CARNEGIE MELLON UNIVERSITY AND THE                  */
/*      CONTRIBUTORS TO THIS WORK DISCLAIM ALL WARRANTIES WITH REGARD TO THIS       */
/*      SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND           */
/*      FITNESS, IN NO EVENT SHALL SUN MICROSYSTEMS, INC., CARNEGIE MELLON          */
/*      UNIVERSITY NOR THE CONTRIBUTORS BE LIABLE FOR ANY SPECIAL, INDIRECT OR      */
/*      CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF      */
/*      USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR       */
/*      OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR      */
/*      PERFORMANCE OF THIS SOFTWARE.                                               */
/*                                                                                  */
/*      Authors: Willie Walker, Paul Lamere, Philip Kwok                            */
/*                                                                                  */
/************************************************************************************/


/**
 * @file relation.h
 * Relation class implementation.
 */


/**
 * @ingroup SHrg
 * @defgroup SRelation Relation
 * A Relation is a named list of #SItem. An Utterance can hold an arbitrary
 * number of Relations.
 * @todo explain relation delete. If connected to an utterance then
 * calls SUtteranceDelRelation else does normal delete.
 * @{
 */


/************************************************************************************/
/*                                                                                  */
/* Modules used                                                                     */
/*                                                                                  */
/************************************************************************************/

#include "include/common.h"
#include "base/errdbg/errdbg.h"
#include "containers/containers.h"
#include "hrg/item.h"


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
 * Return the given #SRelation child class object as a #SRelation object.
 * @param SELF The given object.
 * @return Given object as #SRelation* type.
 * @note This casting is not safety checked.
 */
#define S_RELATION(SELF)    ((SRelation *)(SELF))


/**
 * @}
 */


/************************************************************************************/
/*                                                                                  */
/* SRelation definition                                                             */
/*                                                                                  */
/************************************************************************************/

/**
 * The SRelation structure.
 * An Utterance can hold an arbitrary number of Relations.
 * @extends SObject
 */
struct SRelation
{
	/**
	 * @protected Inherit from #SObject.
	 */
	SObject      obj;

	/**
	 * @protected Name of relation.
	 */
	char        *name;

	/**
	 * @protected Utterance this relation belongs to.
	 */
	SUtterance  *utterance;

	/**
	 * @protected First item in relation.
	 */
	SItem       *head;

	/**
	 * @protected Last item in relation.
	 */
	SItem       *tail;

 	/**
	 * @protected Locking mutex.
	 */
	S_DECLARE_MUTEX(rel_mutex);
};


/************************************************************************************/
/*                                                                                  */
/* SRelationClass definition                                                        */
/*                                                                                  */
/************************************************************************************/

/**
 * The SRelationClass structure.
 * @extends SObjectClass
 */
typedef struct
{
	/* Class members */
	/**
	 * @protected Inherit from SObjectClass.
	 */
	SObjectClass  _inherit;


	/* Class methods */
	/**
	 * @protected Name function pointer.
	 * Get the name of given relation.
	 * @param self The given relation.
	 * @param error Error code.
	 * @return Pointer to the name of the given relation.
	 */
	const char       *(* const name)    (const SRelation *self, s_erc *error);

	/**
	 * @protected Utt function pointer.
	 * Get the utterance of the given relation.
	 * @param self The given relation.
	 * @param error Error code.
	 * @return Pointer to the utterance of the given relation.
	 */
	const SUtterance *(* const utt)     (const SRelation *self, s_erc *error);

	/**
	 * @protected Head function pointer.
	 * Return the item at the head of the given relation.
	 * @param self The given relation.
	 * @param error Error code.
	 * @return Pointer to the head item of the given relation.
	 */
	SItem            *(* const head)    (const SRelation *self, s_erc *error);

	/**
	 * @protected Tail function pointer.
	 * Return the item at the tail of the given relation.
	 * @param self The given relation.
	 * @param error Error code.
	 * @return Pointer to the tail item of the given relation.
	 */
	SItem            *(* const tail)    (const SRelation *self, s_erc *error);

	/**
	 * @protected Append function pointer.
	 * Create a new item and append it to the end of the items
	 * in the given relation.
	 *
	 * @param self The given relation.
	 * @param toShare The item with which the newly created item will
	 * share it's content. If @c NULL then a new content will be
	 * created for the appended item.
	 * @param error Error code.
	 *
	 * @return Pointer to the appended item as it is in the given relation.
	 */
	SItem            *(* const append)  (SRelation *self, const SItem *toShare,
										 s_erc *error);

	/**
	 * @protected Prepend function pointer.
	 * Create a new item and prepend it to the front of the items
	 * in the given relation.
	 *
	 * @param self The given relation.
	 * @param toShare The item with which the newly created item will
	 * share it's content. If @c NULL then a new content will be
	 * created for the prepended item.
	 * @param error Error code.
	 *
	 * @return Pointer to the prepended item as it is in the given relation.
	 */
	SItem            *(* const prepend) (SRelation *self, const SItem *toShare,
										 s_erc *error);
} SRelationClass;


/************************************************************************************/
/*                                                                                  */
/* Function prototypes                                                              */
/*                                                                                  */
/************************************************************************************/


/**
 * Initialize a newly created relation with the given name.
 * @public @memberof SRelation
 *
 * @param self The newly created relation to initialize.
 * @param name The name of the relation.
 * @param error Error code.
 *
 * @note If this function fails the relation will be deleted and the @c
 * self pointer will be set to @c NULL.
 * @note To connect a newly created relation to an utterance call
 * #SUtteranceSetRelation.
 * @note Mostly for internal use when relations have been
 * created with #S_NEW, and not #SUtteranceNewRelation.
 */
S_API void SRelationInit(SRelation **self, const char *name, s_erc *error);


/**
 * Get the name of given relation.
 * @public @memberof SRelation
 * @param self The given relation.
 * @param error Error code.
 * @return Pointer to the name of the given relation.
 */
S_API const char *SRelationName(const SRelation *self, s_erc *error);


/**
 * Get the utterance of the given relation.
 * @public @memberof SRelation
 * @param self The given relation.
 * @param error Error code.
 * @return Pointer to the utterance of the given relation.
 */
S_API const SUtterance *SRelationUtterance(const SRelation *self, s_erc *error);


/**
 * Return the item at the head of the given relation.
 * @public @memberof SRelation
 * @param self The given relation.
 * @param error Error code.
 * @return Pointer to the head item of the given relation.
 */
S_API SItem *SRelationHead(const SRelation *self, s_erc *error);


/**
 * Return the item at the tail of the given relation.
 * @public @memberof SRelation
 * @param self The given relation.
 * @param error Error code.
 * @return Pointer to the tail item of given relation.
 */
S_API SItem *SRelationTail(const SRelation *self, s_erc *error);


/**
 * Create a new item and append it to the end of the items
 * in the given relation.
 * @public @memberof SRelation
 * @param self The given relation.
 * @param toShare The item with which the newly created item will
 * share it's content. If @c NULL then a new content will be
 * created for the appended item.
 * @param error Error code.
 * @return Pointer to the appended item as it is in the given relation.
 */
S_API SItem *SRelationAppend(SRelation *self, const SItem *toShare, s_erc *error);


/**
 * Create a new item and prepend it to the front of the items
 * in the given relation.
 * @public @memberof SRelation
 * @param self The relation.
 * @param toShare The item with which the newly created item will
 * share it's content. If @c NULL then a new content will be
 * created for the prepended item.
 * @param error Error code.
 * @return Pointer to the prepended item as it is in the relation.
 */
S_API SItem *SRelationPrepend(SRelation *self, const SItem *toShare, s_erc *error);


/**
 * Add the SRelation class to the object system.
 * @private
 * @param error Error code.
 */
S_LOCAL void _s_relation_class_add(s_erc *error);


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

#endif /* _SPCT_RELATION_H__ */
