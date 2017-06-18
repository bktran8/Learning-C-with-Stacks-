### Overview
This assignment demonstrates the characteristics of c++ and stacks. 

**1. prog2_1.cpp** was translating c code into c++. It performs the same tasks that of Assignment 1, prog1_6, so the main focus was to learn how to code in c++.

**2. Tokenizer.cpp** utilizes a function called GetTokens that returns a pointer to a vector of stings. This function is written where it would be able to compile with any main. Hence, when ran through the auto grader, it should successfully compile with an unknown main and a self written main. 

**3. Tokenizer.hpp** is the header file that holds all declarations of variables and functions where .cpp and main will reference.

**4. prog2_2.cpp** implements the Tokenizer source files along with characteristics of prog2_1. It demonstrates how to call the function and output the vectors referenced. 

**5. Stack.cpp** implements the stack function in which you push and pop things on and off a stack and print its final contents. Though this file is actually empty due to compiling errors. You can find the contents in Stack.hpp.

**6. Stack.hpp** is the header file that holds declarations of variables and functions as well as the Stack.cpp contents. This file is meant to organize what files can see what varibales and functions. Though both my header files make everything public to all files.

**7. prog2_3.cpp** implements the Stack source files. It demonstrates how to call the push and pop functions and print everything that is left in the stack, enclosed in brackets. This file also utilizes the GetTokens function in Tokenizer.cpp to track tokens. 
