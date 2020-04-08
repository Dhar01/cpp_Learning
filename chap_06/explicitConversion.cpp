/* 5 types of type casting-
 *  1. C-style casts	(avoid)
 *  2. static casts	(preferred)
 *  3. const casts	(totally avoid)
 *  4. dynamic casts	(on pointer)
 *  5. reinterpret casts(totally avoid)
 */


float f{ float(i1) / i2 };	// C-style cast

float f{ static_cast<float>(i1) / i2 };	    // static casts

/* main advantage of static_cast is that it provides
 * compile-time type checking, making it harder to make
 * an inadvertent error.
 */
