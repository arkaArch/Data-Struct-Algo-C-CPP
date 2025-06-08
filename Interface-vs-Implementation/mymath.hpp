// Interface
// These things are available
#ifndef MYMATH_HPP
#define MYMATH_HPP

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

#endif

// Note:

// "#ifndef" is commonly used to create header guards, preventing multiple 
// inclusions of the same header file. This avoids redefinition errors and 
// speeds up compilation.

// MYMATH_HPP is a unique macro name associated with the header file.
// The first time mymath.hpp is included, MYMATH_HPP is not defined, so the code is 
// included, and MYMATH_HPP is defined.
// Subsequent inclusions of mymath.hpp will find MYMATH_HPP defined, and the code will be skipped.
