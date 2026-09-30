/*Question: In C++, there are different types of memory used during program execution.

a)	How many types of memory are there in C++?
b)	Briefly explain each type of memory and its purpose.
c)	Why are pointers in c++ and why do we need them?

Answers:
a) 
1: Stack Memory
2: Heap Memory
3: Static Memory

b)
1:
Stack memory is used for static memory allocation. 
It stores local variables and function call information (like return addresses). 
It operates in a Last In, First Out (LIFO) manner.

2:
Heap memory is used for dynamic memory allocation. 
It allows programmers to request memory at runtime using operators like new and delete.

3:
Static memory allocation is used for global variables, static variables, and constants. 
Memory is allocated at program start and deallocated when the program ends.

c)
What:
A pointer is a variable that stores the memory address of another variable.
In C++, pointers can be used to reference variables and dynamically allocated memory.

Why:
Dynamic Memory Management: 
Pointers allow for dynamic memory allocation, enabling programmers to allocate memory during runtime and efficiently manage it. 
This is essential for structures like linked lists, trees, and other data structures that can grow or shrink as needed.

Efficient Data Access: 
Pointers provide a way to manipulate data directly at its memory address, which can improve performance when dealing with large data structures or arrays.

Function Argument Passing: 
Pointers enable passing large structures or arrays to functions without making copies, which saves memory and improves performance.
This is often done by passing pointers (or references) to functions instead of the actual data.

Flexibility: 
Pointers provide flexibility in manipulating memory, such as creating complex data structures (like linked lists) or managing resources (like files and buffers).

Pointer Arithmetic: 
Pointers can be incremented or decremented, which allows for easy traversal of arrays and other sequential data structures.
*/