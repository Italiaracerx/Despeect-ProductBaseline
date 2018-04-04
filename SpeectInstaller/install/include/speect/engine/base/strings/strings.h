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
/* DATE    : 19 May 2008                                                            */
/*                                                                                  */
/************************************************************************************/
/*                                                                                  */
/* UTF8 string functions.                                                           */
/*                                                                                  */
/* Adapted from Allegro http://alleg.sourceforge.net/  (4.9.7)                      */
/* Note that this is a derived work with no verbatim source code from above         */
/* mentioned project.                                                               */
/*                                                                                  */
/************************************************************************************/

#ifndef _SPCT_STRING_UTF8_STRINGS_H__
#define _SPCT_STRING_UTF8_STRINGS_H__


/************************************************************************************/
/*                                                                                  */
/*  Copyright (c) 2008 the Allegro 5 Development Team                               */
/*                                                                                  */
/*  This software is provided 'as-is', without any express or implied warranty.     */
/*  In no event will the authors be held liable for any damages arising from the    */
/*  use of this software.                                                           */
/*                                                                                  */
/*  Permission is granted to anyone to use this software for any purpose,           */
/*  including commercial applications, and to alter it and redistribute it          */
/*  freely, subject to the following restrictions:                                  */
/*                                                                                  */
/*  1. The origin of this software must not be misrepresented; you must not         */
/*     claim that you wrote the original software. If you use this software         */
/*     in a product, an acknowledgment in the product documentation would be        */
/*     appreciated but is not required.                                             */
/*                                                                                  */
/*  2. Altered source versions must be plainly marked as such, and must not be      */
/*     misrepresented as being the original software.                               */
/*                                                                                  */
/*  3. This notice may not be removed or altered from any source distribution.      */
/*                                                                                  */
/************************************************************************************/


/**
 * @file strings.h
 * UTF8 string functions.
 */


/**
 * @ingroup SBaseStrings
 * @defgroup SUtf8Strings String Functions
 * Provides UTF-8 aware string utilities and functions.
 * @{
 */


/************************************************************************************/
/*                                                                                  */
/* Modules used                                                                     */
/*                                                                                  */
/************************************************************************************/

#include "include/common.h"
#include "base/utils/types.h"
#include "base/errdbg/errdbg.h"


/************************************************************************************/
/*                                                                                  */
/* Begin external c declaration                                                     */
/*                                                                                  */
/************************************************************************************/
S_BEGIN_C_DECLS


/************************************************************************************/
/*                                                                                  */
/* Function prototypes                                                              */
/*                                                                                  */
/************************************************************************************/

/**
 * @name Size/Length
 * @{
 */


/**
 * Return the size of the given UTF-8 string in bytes, excluding the
 * trailing zero.
 *
 * @param s The string of which the size is to be determined.
 * @param error Error code.
 *
 * @return Size in bytes, @a excluding the trailing zero.
 */
S_API size_t s_strsize(const char *s, s_erc *error);


/**
 * Return the size of @a n characters of the given UTF-8 string in
 * bytes.
 *
 * @param s The string of which the size is to be determined.
 * @param n The number of characters.
 * @param error Error code.
 *
 * @return Size of @a n characters of @c s in bytes.
 */
S_API size_t s_strnsize(const char *s, size_t n, s_erc *error);


/**
 * Return the size of the given UTF-8 string in bytes, including the
 * trailing zero.
 *
 * @param s The string of which the size is to be determined.
 * @param error Error code.
 *
 * @return Size in bytes, @a including the trailing zero.
 */
S_API size_t s_strzsize(const char *s, s_erc *error);


/**
 * Return the length (number of characters) of the given UTF-8 string.
 *
 * @param s The string.
 * @param error Error code.
 *
 * @return The character length of the string.
 */
S_API size_t s_strlen(const char *s, s_erc *error);


/**
 * @}
 */


/**
 * @name Duplicate
 * @{
 */


/**
 * Return a newly allocated copy of the given UTF-8 string.
 *
 * @param src The source string.
 * @param error Error code.
 *
 * @return A copy of @c src.
 *
 * @note Caller is responsible for the memory of the returned string.
 */
S_API char *s_strdup(const char *src, s_erc *error);


/**
 * @}
 */


/**
 * @name Copy
 * @{
 */


/**
 * Copy the given UTF-8 string @c src to @c dest, size specified. The
 * size of @c dest is specified by @a size.
 *
 * @param dest The destination string.
 * @param src The source string.
 * @param size The size of the destination string (bytes).
 * @param error Error code.
 *
 * @return The destination string @c dest.
 *
 * @note The trailing zero is copied.
 */
S_API char *s_strzcpy(char *dest, const char *src,
					  size_t size, s_erc *error);


/**
 * Copy the given UTF-8 string @c src to @c dest. The size of @c dest
 * is ignored (should be set correctly by caller).
 *
 * @param dest Pointer to the destination string.
 * @param src Pointer to the source string.
 * @param error Error code.
 *
 * @return Pointer to the destination string @a dest.
 *
 * @note The trailing zero is copied.
 * @sa s_strzcpy.
 */
#define s_strcpy(dest, src, error)				\
	s_strzcpy(dest, src, INT_MAX, error)


/**
 * Copy @a n characters of the given UTF-8 string @c src to @c dest. The
 * size of @c dest is ignored (should be set correctly by caller).
 *
 * @param dest Pointer to the destination string.
 * @param src Pointer to the source string.
 * @param n Number of characters to copy.
 * @param error Error code.
 *
 * @return The destination string @c dest.
 *
 * @sa s_strzncpy
 */
#define s_strncpy(dest, src, n, error)			\
	s_strzncpy(dest, src, n, INT_MAX, error)


/**
 * Copy @a n characters of the given UTF-8 string @c src to @c dest,
 * size specified. The size of @c dest is specified by @a size.
 *
 * @param dest The destination string.
 * @param src The source string.
 * @param n Number of characters to copy.
 * @param size The size of the destination string (bytes).
 * @param error Error code.
 *
 * @return The destination string @c dest.
 */
S_API char *s_strzncpy(char *dest, const char *src, size_t n,
					   size_t size, s_erc *error);


/**
 * @}
 */


/**
 * @name Concatenate
 * @{
 */


/**
 * Concatenate two UTF-8 strings, size specified. The size of @c dest
 * is specified by @a size.

 *
 * @param dest The destination string.
 * @param src The source string.
 * @param size The size of the destination string (bytes).
 * @param error Error code.
 *
 * @return The concatenation of @c dest and @c src or #NULL if
 * <tt> size <= 0 </tt> or @c src or @c dest is #NULL.
 *
 * @note The @c dest string will be zero terminated.
 */
S_API char *s_strzcat(char *dest, const char *src, size_t size, s_erc *error);


/**
 * Concatenate two UTF-8 strings. The size of @c dest is ignored
 * (should be set correctly by caller).
 *
 * @param dest Pointer to the destination string.
 * @param src Pointer to the source string.
 * @param error Error code.
 *
 * @return The concatenation of @c dest and @c src.
 * @sa s_strzcat.
 *
 * @note The @c dest string will be zero terminated.
 */
#define s_strcat(dest, src, error)				\
	s_strzcat(dest, src, INT_MAX, error)


/**
 * Concatenate @a n characters of the given UTF-8 string @c src
 * to @c dest. The size of @c dest is ignored (should be set correctly
 * by caller).
 *
 * @param dest Pointer to the destination string.
 * @param src Pointer to the source string.
 * @param n Number of characters to concatenate.
 * @param error Error code.
 *
 * @return The concatenation of @c dest and @a n characters of @c src.
 * @sa s_strzncat
 *
 * @note The @c dest string will be zero terminated.
 */
#define s_strncat(dest, src, n, error)			\
	s_strzncat(dest, src, n, INT_MAX, error)


/**
 * Concatenate @a n characters of the given UTF-8 string @c src
 * to @c dest, size specified. The size of @c dest is specified by @a size.
 *
 * @param dest The destination string.
 * @param src The source string.
 * @param n Number of characters to concatenate.
 * @param size The size of the destination string (bytes).
 * @param error Error code.
 *
 * @return The concatenation of @c dest and @a n characters of @c src
 * or #NULL if @c src or @c dest is #NULL or n or size is 0.
 *
 * @note The @c dest string will be zero terminated.
 */
S_API char *s_strzncat(char *dest, const char *src, size_t n,
					   size_t size, s_erc *error);


/**
 * @}
 */


/**
 * @name Compare
 * @{
 */


/**
 * Compare two UTF-8 strings.
 *
 * @param s1 String to compare.
 * @param s2 String to compare.
 * @param error Error code.
 *
 * @return Integer less than, equal to, or greater than zero if @c s1
 * is found, respectively, to be less than, to match, or be greater
 * than @c s2.
 */
S_API int s_strcmp(const char *s1, const char *s2, s_erc *error);


/**
 * Compare @a n characters of two UTF-8 strings.
 *
 * @param s1 String to compare.
 * @param s2 String to compare.
 * @param n Number of characters to compare.
 * @param error Error code.
 *
 * @return Integer less than, equal to, or greater than zero if @c s1
 * is found, respectively, to be less than, to match, or be greater
 * than @c s2.
 */
S_API int s_strncmp(const char *s1, const char *s2, size_t n, s_erc *error);


/**
 * Compare two UTF-8 strings (case insensitive).
 *
 * @param s1 String to compare.
 * @param s2 String to compare.
 * @param error Error code.
 *
 * @return Integer less than, equal to, or greater than zero if @c s1
 * is found, respectively, to be less than, to match, or be greater
 * than @c s2.
 *
 * @sa s_strcmp.
 */
S_API int s_stricmp(const char *s1, const char *s2, s_erc *error);


/**
 * Compare @a n characters of two UTF-8 strings (case insensitive).
 *
 * @param s1 String to compare.
 * @param s2 String to compare.
 * @param n Number of characters to compare.
 * @param error Error code.
 *
 * @return Integer less than, equal to, or greater than zero if @c s1
 * is found, respectively, to be less than, to match, or be greater
 * than @c s2.
 *
 * @sa s_strncmp.
 */
S_API int s_strnicmp(const char *s1, const char *s2, size_t n, s_erc *error);


/**
 * @}
 */


/**
 * @name Case conversion
 * @{
 */


/**
 * Replace all upper case characters in the given UTF-8 string with
 * lower case characters.
 *
 * @param s The string.
 * @param error Error code.
 *
 * @return Modified string.
 *
 * @note The string @c s is modified in place.
 */
S_API char *s_strlwr(char *s, s_erc *error);


/**
 * Replace all lower case characters in the given UTF-8 string with
 * upper case characters.
 *
 * @param s The string.
 * @param error Error code.
 *
 * @return Modified string.
 *
 * @note The string @c s is modified in place.
 */
S_API char *s_strupr(char *s, s_erc *error);


/**
 * @}
 */


/**
 * @name Character search
 * @{
 */


/**
 * Locate a character in the given UTF-8 string.
 *
 * @param s The string.
 * @param c The character to locate.
 * @param error Error code.
 *
 * @return Pointer to @b first occurance of @c c in @c s.
 */
S_API const char *s_strchr(const char *s, uint32 c, s_erc *error);


/**
 * Reverse locate a character in the given UTF-8 string.
 *
 * @param s The string.
 * @param c The character to locate.
 * @param error Error code.
 *
 * @return Pointer to @b last occurance of @c c in @c s.
 */
S_API const char *s_strrchr(const char *s, uint32 c, s_erc *error);


/**
 * @}
 */


/**
 * @name String search
 * @{
 */


/**
 * Locate a sub-string in the given UTF-8 string.
 *
 * @param haystack String to search in.
 * @param needle String to search for.
 * @param error Error code.
 *
 * @return Pointer to first occurance of @c needle in @c haystack.
 */
S_API char *s_strstr(const char *haystack, const char *needle, s_erc *error);


/**
 * Search the given UTF-8 string for any of a set of characters.
 *
 * @param s The string.
 * @param set The set of characters.
 * @param error Error code.
 *
 * @return Pointer to first occurance of any characters in @c set in
 * string @c s.
 */
S_API char *s_strpbrk(const char *s, const char *set, s_erc *error);


/**
 * @}
 */


/**
 * @name Tokens search
 * @{
 */


/**
 * Extract tokens from the given UTF-8 string. UTF-8 aware replacement
 * for standard c library function @c strtok().
 *
 * @param s The string.
 * @param set The set of tokens.
 * @param error Error code.
 *
 * @return Pointer to next token in @c s.
 *
 * @note Not thread-safe.
 */
S_API char *s_strtok(char *s, const char *set, s_erc *error);


/**
 * Re-entrant version #s_strtok. The @c last argument is a pointer to
 * a char* variable that is used internally in order to maintain
 * context between successive calls that parse the same string.
 *
 * @param s The string to parse.
 * @param set The set of tokens.
 * @param last Pointer to maintain context.
 * @param error Error code.
 *
 * @return Pointer to next token in @c s.
 *
 * @note Thread-safe.
 */
S_API char *s_strtok_r(char *s, const char *set, char **last, s_erc *error);


/**
 * @}
 */


/**
 * @name Number conversions
 * @{
 */


/**
 * Convert the given UTF-8 string to a double.
 *
 * @param s The string.
 * @param error Error code.
 *
 * @return Double point value of @c s.
 *
 * @note This is merely a wrapper to the standard ISO C @c atof()
 * function.
 */
S_API double s_atof(const char *s, s_erc *error);


/**
 * Return long int value of the given UTF-8 string. Converts the
 * initial part of the string in @c s to a long integer value
 * according to the given base, which must be between 2 and 36
 * inclusive, or be the special value 0. Also see the standard
 * ISO C @c strtol() function.
 *
 * @param s The string.
 * @param endp If not #NULL, address of first valid character is
 * stored here.
 * @param base Between 2 and 36 inclusive, or be the special value 0.
 * @param error Error code.
 *
 * @return Long value of string @c s.
 */
S_API long s_strtol(const char *s, char **endp, uint base, s_erc *error);


/**
 * Convert the given UTF-8 string to a double, first valid character
 * address. UTF-8 ware version of the standard ISO C @c strtod()
 * function.
 *
 * @param s The string.
 * @param endp If not #NULL, address of first valid character is
 * stored here.
 * @param error Error code.
 *
 * @return Double value of string @c s.
 */
S_API double s_strtod(const char *s, char **endp, s_erc *error);


/**
 * @}
 */


/**
 * @name Error to string conversion
 * @{
 */


/**
 * Convert the given error number to a UTF-8 string.
 *
 * @param err Error value.
 *
 * @return UTF-8 string of error value.
 *
 * @note Not thread safe.
 */
S_API const char *s_strerror(int err);


/**
 * @}
 */


/**
 * @name Auxiliary functions
 * @{
 */


/**
 * Validate the given UTF-8 string.
 *
 * @param s The string to validate.
 * @param error Error code.
 *
 * @return #TRUE or #FALSE.
 */
S_API s_bool s_isvalid(const char *s, s_erc *error);


/**
 * Test to see if the given UTF-8 string matches the given regular
 * expression.
 *
 * @param string The string to test.
 * @param regex The regular expression string.
 * @param error Error code.
 *
 * @return #TRUE or #FALSE.
 */
S_API s_bool s_smatches(const char *string, const char *regex, s_erc *error);


/**
 * Return the UTF-8 string that is after the first occurrence of the given
 * character in the given UTF-8 string.
 *
 * @param haystack The given string.
 * @param needle The given character.
 * @param error Error code.
 *
 * @return A new reference to the string after the character.
 *
 * @note Caller is responsible for memory of returned string.
 */
S_API char *s_safter(const char *haystack, const char *needle, s_erc *error);


/**
 * Return the UTF-8 string that is before the first occurrence of the given
 * character in the given UTF-8 string.
 *
 * @param haystack The given string.
 * @param needle The given character.
 * @param error Error code.
 *
 * @return A new reference to the string before the character.
 *
 * @note Caller is responsible for memory of returned string.
 */
S_API char *s_sbefore(const char *haystack, const char *needle, s_erc *error);


/**
 * Append two UTF-8 strings. If the string @c str1 is #NULL,
 * then this function performs the same task as #s_strdup.
 *
 * @param str1 First string.
 * @param str2 Second string, to append onto first string.
 * @param error Error code.
 */
S_API void s_sappend(char **str1, const char *str2, s_erc *error);


/**
 * A @c strdup function using normal c library calls. Used internally
 * when @ref SErrDbg module has not yet been initialized.
 * @private
 *
 * @param str The string to copy.
 *
 * @return A copy of @a str or #NULL.
 */
S_LOCAL char *s_strdup_clib(const char *str);


/**
 * @}
 */


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

#endif /* _SPCT_STRING_UTF8_STRINGS_H__ */

