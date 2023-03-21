#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 * File: 3-function_like_macro.h
 * Desc: function returning an absolute number.
 * @x: number whose absolute we ought to find.
 */

/* multiplies x with -x if its less than zero */
#define ABS(x) ((x) < 0 ? ((x) * (-1)) : (x))

#endif
