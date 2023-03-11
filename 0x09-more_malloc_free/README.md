<h1 align="center"> More Malloc & Free </h1>

When an array is defined, memory is allocated in contagious memory blocks according to the specified size before run-time. This might introduce some limitations because of insufficient storage or wastage of space due to unused memory.

Dynamic memory allocation provides a solution to this problem by allowing us to allocate memory during run-time instead of allocating memory ahead of time. This helps us avoid running into insufficient memory and makes us use the memory space efficiently.

In the C programming language, two of the functions used to allocate and deallocate the memory during run-time are malloc() and free(), respectively.

<h3> malloc() </h3>

The malloc() function is defined in the header <stdlib.h> and allows us to allocate memory during run-time. The function takes the input as size in bytes and returns a void pointer that can be cast to any other type on the successful allocation of memory. The pointer void points to the first byte of the allocated memory. If the memory allocation is not successful, the pointer returns NULL.

Take a look at the line of code below:

```c
ptr = (float *) malloc (10 * sizeof(float));
```

The line of code above reserves 40 bytes of contagious memory. The size of one float datatype is 4 bytes, which when multiplied by 10 gives 40. The void pointer returned by the malloc() is casted to the type float and assigned to ptr. Therefore, pointer ptr is of type float and points to the first byte of the 40 bytes.

<h3> free() </h3>

The memory allocated during run-time does not get free on its own. The free() function is used to manually free the memory allocated at run-time. The free() function is defined in the same <stdlib.h> header. The function takes a pointer and frees the memory the pointer is pointing towards.

Using the free() function is simple, as shown below:

```c
free(ptr);
```
The function simply takes the pointer ptr and deallocates the memory it points towards.
