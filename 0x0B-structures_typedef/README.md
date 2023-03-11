<h1 align="center"> Struct and Typedef </h1>

<h3> Struct </h3>
Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

Unlike an array, a structure can contain many different data types (int, float, char, etc.).

You can create a structure by using the struct keyword and declare each of its members inside curly braces:

<h4> Basic syntax </h4>

```c
struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
}; // End the structure with a semicolon
```

<h3> Typedef </h3>

typedef is a keyword that gives a new name to an existing data type.

For example, you can give a new name to an existing data type unsigned int type and program using uint in its place. At this time, uint will also be treated exactly as unsigned int.

The point is with typedef you can create a new name, but you don't create a new type itself.

typedef is for using the original data type with a different name, and the original type always exists.

<h4> Basic syntax </h4>

```c
typedef <existing_data_type> <new_data_type>
```

<h3> typedef struct </h3>

When writing a code we certainly at most times have felt the need to define our own data type as per the requirement of the problem. In C language this can be achieved using two keywords: struct and typedef. These keywords help us to group non-homogeneous data types into a single group.

<h4> Example </h4>

```c
#include <stdio.h>

typedef struct {   
    char name[20];
    char sex; 
    int age; 
} person_t;

int main()
{
    person_t p = {"Tom", 'M', 19};
    printf("%s %c %d\n", p.name, p.sex, p.age);
    return 0;
}
```
