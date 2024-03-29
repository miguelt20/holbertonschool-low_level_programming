<h1 align="center"> Recursion </h1>

Recursion is the process of repeating items in a self-similar way. In programming languages, if a program allows you to call a function inside the same function, then it is called a recursive call of the function.

<h3> Basic syntax </h3>

```c
void recursion() {
   recursion(); /* function calls itself */
}

int main() {
   recursion();
}
```

The C programming language supports recursion, i.e., a function to call itself. But while using recursion, programmers need to be careful to define an exit condition from the function, otherwise it will go into an infinite loop.

Recursive functions are very useful to solve many mathematical problems, such as calculating the factorial of a number, generating Fibonacci series, etc.

<h3> Number Factorial </h3>

The following example calculates the factorial of a given number using a recursive function:

```c
#include <stdio.h>

unsigned long long int factorial(unsigned int i) {

   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}

int  main() {
   int i = 12;
   printf("Factorial of %d is %d\n", i, factorial(i));
   return 0;
}
```

<h3> Output </h3>

```c
Factorial of 12 is 479001600
```
