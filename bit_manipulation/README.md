<h1 align="center"> Bit manipulation </h1>


<p align="center"> Bit manipulation is the process of applying logical operations on a sequence of bits to achieve a required result. It is an act of algorithmically manipulating bits or other pieces of data shorter than a word. Computer programming tasks that require bit manipulation include: Low-level device control. </p>

In C, the following 6 operators are bitwise operators (work at bit-level)

- The `&` (bitwise AND) in C takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.  
- The `|` (bitwise OR) in C takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
- The `^` (bitwise XOR) in C takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. 
- The `<<` (left shift) in C takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift. 
- The `>>` (right shift) in C takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift. 
- The `~` (bitwise NOT) in C takes one number and inverts all bits of it. 
