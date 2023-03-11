<h1 align="center"> argc & argv </h1>

It is possible to pass some values from the command line to your C programs when they are executed. These values are called command line arguments and many times they are important for your program especially when you want to control your program from outside instead of hard coding those values inside the code.</p>

The command line arguments are handled using main() function arguments where `argc` refers to the number of arguments passed, and `argv[]` is a pointer array which points to each argument passed to the program.

<h3> The declaration of main looks like this: </h3>

`int main(int argc, char *argv[]);`

_Code example:_

```c
#include <stdio.h>

int main( int argc, char *argv[] )  {

   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }
}
```

_Output:_

```bash
# When the above code is compiled and executed with single argument, it produces the following result.
$./a.out testing
The argument supplied is testing

# When the above code is compiled and executed with a two arguments, it produces the following result.
$./a.out testing1 testing2
Too many arguments supplied.

# When the above code is compiled and executed without passing any argument, it produces the following result.
$./a.out
One argument expected
```
It should be noted that `argv[0]` holds the name of the program itself and `argv[1]` is a pointer to the first command line argument supplied, and `*argv[n]` is the last argument. If no arguments are supplied, `argc` will be one, and if you pass one argument then argc is set at 2.

