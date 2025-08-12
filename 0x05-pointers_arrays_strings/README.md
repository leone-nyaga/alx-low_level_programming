# 0x05. C - Pointers, arrays and strings

## Resources

Read or watch:

+ [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
+ [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
+ [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
+ [Memory Layout](https://aticleworld.com/memory-layout-of-c-program)

## Additional Resource

+ [Arrays & Pointers in C Programming Explained](https://www.youtube.com/watch?feature=shared&v=bT5GTqZaYTk)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
+ What are pointers and how to use them
+ What are arrays and how to use them
+ What are the differences between pointers and arrays
+ How to use strings and how to manipulate them
+ Scope of variables

## Copyright - Plagiarism
+ You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
+ You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
+ You are not allowed to publish any content of this project.
+ Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

##General

+ Allowed editors: vi, vim, emacs
+ All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
+ All your files should end with a new line
+ A README.md file, at the root of the folder of the project is mandatory
+ Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
+ You are not allowed to use global variables
+ No more than 5 functions per file
+ You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
+ You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
+ You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
+ In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
+ The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
+ Don’t forget to push your header file

## More Info
You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, malloc and free - yet.

## Quiz Questions

## Tasks

0. 98 Battery st.

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

+ Prototype: void reset_to_98(int *n);

```bash
julien@ubuntu:~/0x05$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/0x05$ ./0-98 
n=402
n=98
julien@ubuntu:~/0x05$
```

Repo:

+ GitHub repository: alx-low_level_programming
+ Directory: 0x05-pointers_arrays_strings
+ File: 0-reset_to_98.c

1. Don't swap horses in crossing a stream

Write a function that swaps the values of two integers.

+ Prototype: void swap_int(int *a, int *b);

```bash
julien@ubuntu:~/0x05$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
julien@ubuntu:~/0x05$ ./1-swap 
a=98, b=42
a=42, b=98
julien@ubuntu:~/0x05$
```

Repo:

+ GitHub repository: alx-low_level_programming
+ Directory: 0x05-pointers_arrays_strings
+ File: 1-swap.c

2. This report, by its very length, defends itself against the risk of being read

Write a function that returns the length of a string.

+ Prototype: int _strlen(char *s);

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

```bash
julien@ubuntu:~/0x05$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
julien@ubuntu:~/0x05$ ./2-strlen 
16
julien@ubuntu:~/0x05$
```

Repo:

+ GitHub repository: alx-low_level_programming
+ Directory: 0x05-pointers_arrays_strings
+ File: 2-strlen.c

