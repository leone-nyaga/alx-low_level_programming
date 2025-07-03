# 0x01. C - Variables, if, else, while

## Resources

Read or watch:

+ [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20250703%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20250703T214207Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=ebeba6551ed6dade16bbd530faa31a21cbd1b9f891bed04a9a5f0874bc7d723a) (You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.)
+ [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
+ [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
+ [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
+ [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
+ [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
+ [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
+ [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
+ [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
+ [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)

man or help:

+ ascii (You do not need to learn about scanf, getc, getchar, EOF, EXIT_SUCCESS, time, rand, srand, RAND_MAX, for loops, do...while loops, functions.)

## Additional resources
+ [Introduction to C (Basic structure and variables)](https://www.youtube.com/watch?feature=shared&v=LM6IjCbtpZA)

## Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), without the help of Google:

## General

+ What are the arithmetic operators and how to use them
+ What are the logical operators (sometimes called boolean operators) and how to use them
+ What the the relational operators and how to use them
+ What values are considered TRUE and FALSE in C
+ What are the boolean operators and how to use them
+ How to use the if, if ... else statements
+ How to use comments
+ How to declare variables of types char, int, unsigned int
+ How to assign values to variables
+ How to print the values of variables of type char, int, unsigned int with printf
+ How to use the while loop
+ How to use variables with the while loop
+ How to print variables using printf
+ What is the ASCII character set
+ What are the purpose of the gcc flags -m32 and -m64

## Copyright - Plagiarism

+ You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
+ You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
+ You are not allowed to publish any content of this project.
+ Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

## General

+ Allowed editors: vi, vim, emacs
+ All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
+ All your files should end with a new line
+ A README.md file, at the root of the folder of the project
+ There should be no errors and no warnings during compilation
+ You are not allowed to use system
+ Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

## Tasks

0. Positive anything is better than negative nothing

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

+ You can find the source code [here](https://github.com/alx-tools/0x01.c/blob/master/0-positive_or_negative_c)
+ The variable n will store a different value every time you will run this program
+ You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
+ The output of the program should be:
  + The number, followed by
    + if the number is greater than 0: is positive
    + if the number is 0: is zero
    + if the number is less than 0: is negative
  + followed by a new line

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$ 
```

Repo:

+ GitHub repository: alx-low_level_programming
+ Directory: 0x01-variables_if_else_while
+ File: 0-positive_or_negative.c

1. The last digit

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

+ You can find the source code here
+ The variable n will store a different value every time you run this program
+ You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
+ The output of the program should be:
+ The string Last digit of, followed by
+ n, followed by
  + the string is, followed by
    + if the last digit of n is greater than 5: the string and is greater than 5
    + if the last digit of n is 0: the string and is 0
    + if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
  + followed by a new line

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$
```

Repo:

+ GitHub repository: alx-low_level_programming
+ Directory: 0x01-variables_if_else_while
+ File: 1-last_digit.c
