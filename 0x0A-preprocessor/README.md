<h1 align="center"> Preprocessor </h1>

The C Preprocessor is not a part of the compiler, but is a separate step in the compilation process. In simple terms, a C Preprocessor is just a text substitution tool and it instructs the compiler to do required pre-processing before the actual compilation. We'll refer to the C Preprocessor as CPP.

All preprocessor commands begin with a hash symbol (#). It must be the first nonblank character, and for readability, a preprocessor directive should begin in the first column. The following section lists down all the important preprocessor directives:

- `#define`: Substitutes a preprocessor macro.
- `#include`: Inserts a particular header from another file.
- `#undef`: Undefines a preprocessor macro.
- `#ifdef`: Returns true if this macro is defined.
- `#ifndef`: Returns true if this macro is not defined.
- `#if`: Tests if a compile time condition is true.
- `#else`: The alternative for #if.
- `#elif`: #else and #if in one statement.
- `#endif`: Ends preprocessor conditional.
- `#error`: Prints error message on stderr.
- `#pragma`: Issues special commands to the compiler, using a standardized method.
