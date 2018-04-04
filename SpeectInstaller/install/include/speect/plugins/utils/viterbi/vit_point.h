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
/* DATE    : 8 September 2008                                                       */
/*                                                                                  */
/************************************************************************************/
/*                                                                                  */
/* A Viterbi decoder implementation, decoder time points.                           */
/* Loosly based on EST_Viterbi of Edinburgh Speech Tools,                           */
/* http://www.cstr.ed.ac.uk/projects/speech_tools (1.2.96).                         */
/* Note that this is a derived work of EST_Viterbi, with no verbatim                */
/* source code.                                                                     */
/*                                                                                  */
/************************************************************************************/

#ifndef _SPCT_PLUGIN_VIT_POINT_H__
#define _SPCT_PLUGIN_VIT_POINT_H__


/************************************************************************************/
/* Edinburgh Speech Tools license,  EST_Viterbi                                     */
/*                                                                                  */
/*                     Centre for Speech Technology Research                        */
/*                          University of Edinburgh, UK                             */
/*                            Copyright (c) 1996,1997                               */
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
/*       Author :  Alan W Black                                                     */
/*                                                                                  */
/************************************************************************************/


/**
 * @file vit_point.h
 * A Viterbi decoder implementation, decoder time points.
 */


/**
 * @ingroup SViterbi
 * @defgroup SVitPoint Decoder Time Points.
 * The Viterbi decoder time points.
 * @{
 */


/************************************************************************************/
/*                                                                                  */
/* Modules used                                                                     */
/*                                                                                  */
/************************************************************************************/

#include "speect.h"
#include "vit_candidate.h"
#include "vit_path.h"


/************************************************************************************/
/*                                                                                  */
/* Begin external c declaration                                                     */
/*                                                                                  */
/************************************************************************************/
S_BEGIN_C_DECLS


/************************************************************************************/
/*                                                                                  */
/* SViterbiPoint definition                                                         */
/*                                                                                  */
/************************************************************************************/

/**
 * The SViterbiPoint structure.
 * @extends SObject
 */
typedef struct SViterbiPoint
{
	/**
	 * @protected Inherit from #SObject.
	 */
	SObject               obj;

	/**
	 * @protected Item at point.
	 */
	const SItem          *s;

	/**
	 * @protected Number of states at point.
	 */
	int                   num_states;

	/**
	 * @protected Number of paths at point.
	 */
	int                   num_paths;

	/**
	 * @protected Candidates at point.
	 */
	SViterbiCandidate    *cands;

	/**
	 * @protected Paths at point.
	 */
	SViterbiPath         *paths;

	/**
	 * @protected State paths at point.
	 */
	SViterbiPath        **stPaths;

	/**
	 * @protected Next point in time-line.
	 */
	struct SViterbiPoint *next;
} SViterbiPoint;


/************************************************************************************/
/*                                                                                  */
/* SViterbiPointClass definition                                                    */
/*                                                                                  */
/************************************************************************************/

/**
 * The SViterbiPointClass structure. Does not add any class
 * methods to #SObjectClass, therefore exactly the same.
 */
typedef SObjectClass SViterbiPointClass;


/************************************************************************************/
/*                                                                                  */
/* Plug-in class registration/free                                                  */
/*                                                                                  */
/************************************************************************************/

/**
 * Register the #SViterbiPoint plug-in class with the Speect Engine object
 * system.
 * @private
 *
 * @param error Error code.
 */
S_LOCAL void _s_vit_point_class_reg(s_erc *error);


/**
 * Free the #SViterbiPoint plug-in class from the Speect Engine object
 * system.
 * @private
 *
 * @param error Error code.
 */
S_LOCAL void _s_vit_point_class_free(s_erc *error);


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

#endif /* _SPCT_PLUGIN_VIT_POINT_H__ */
