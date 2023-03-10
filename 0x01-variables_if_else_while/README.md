<h1 align="center">Variables, if & else, Loops</h1>

<h3> Variables </h3>

Variable is basically nothing but the name of a memory location that we use for storing data. We can change the value of a variable in C or any other language, and we can also reuse it multiple times. We use symbols in variables for representing the memory location- so that it becomes easily identifiable by any user.

Variables are the storage areas in a code that the program can easily manipulate. Every variable in C language has some specific type- that determines the layout and the size of the memory of the variable, the range of values that the memory can hold, and the set of operations that one can perform on that variable.

We must assign a data type to all the variables that are present in the C language. These define the type of data that we can store in any variable. If we do not provide the variable with a data type, the C compiler will ultimately generate a syntax error or a compile-time error.

The data types present in the C language are:

- float: It is a floating-point value that is single precision.
- int: It is a type of integer. It is typically one byte (single octet).
- double: It is a floating-point value that is double precision.
- char: It is a type of integer. It is typically one byte (single octet).
- void: It represents that there is an absence of type.

<h3> if </h3>

The if statement allows to control if a program enters a section of code or not based on whether a given condition is true or false. One of the important functions of the if statement is that it allows the program to select an action based upon the user's input. For example, by using an if statement to check a user-entered password, your program can decide whether a user is allowed access to the program.

<h4> Basic syntax </h4>

```c
if ( statement is TRUE )
    Execute this line of code
```

<h3> else </h3>
Sometimes when the condition in an if statement evaluates to false, it would be nice to execute some code instead of the code executed when the statement evaluates to true. The "else" statement effectively says that whatever code after it (whether a single line or code between brackets) is executed if the if statement is FALSE.

<h4> Basic syntax </h4>

```c
if ( TRUE ) {
    /* Execute these statements if TRUE */
}
else {
    /* Execute these statements if FALSE */
}
```

<h3> Loops </h3>

Loops in programming are used to repeat a block of code until the specified condition is met. A loop statement allows programmers to execute a statement or group of statements multiple times without repetition of code.

<h4> Basic syntax </h4>

```c
initialization_expression;

while (test_expression)
{
    // body of the while loop
    
    update_expression;
}
```

<h4> Example of a while loop </h4>

```c
#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 10;

   /* while loop execution */
   while( a < 20 ) {
      printf("value of a: %d\n", a);
      a++;
   }
 
   return 0;
}

```

<h4> Output </h4>

```bash
value of a: 10
value of a: 11
value of a: 12
value of a: 13
value of a: 14
value of a: 15
value of a: 16
value of a: 17
value of a: 18
value of a: 19
```

