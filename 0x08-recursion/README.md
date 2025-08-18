# 0x08. C - Recursion

![dicaprio meme](https://github.com/leone-nyaga/alx-low_level_programming/blob/master/0x08-recursion/images/image_2025-08-18_172859893.png)

## Resources

Read or watch:

+ [0x08. Recursion, introduction](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20250818%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20250818T143503Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=eeb67fd1ae87842c00deffa4bb9447043907e5dfb783af5383e5bcd44d10cb60)
+ [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
+ [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
+ [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=XGxbXMP6k8k)
+ [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=7XiIS6HobNs)

## Additional Resources

+ [Recursion & Recursive functions in C Programming](https://www.youtube.com/watch?v=7XiIS6HobNs)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

+ What is recursion
+ How to implement recursion
+ In what situations you should implement recursion
+ In what situations you shouldn’t implement recursion

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
+ A README.md file, at the root of the folder of the project is mandatory
+ Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
+ You are not allowed to use global variables
+ No more than 5 functions per file
+ You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
+ You are allowed to use _putchar
+ You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
+ In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
+ The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h 
+ Don’t forget to push your header file
+ You are not allowed to use any kind of loops
+ You are not allowed to use static variables

## Quiz Questions

![task0](https://github.com/leone-nyaga/alx-low_level_programming/blob/master/0x08-recursion/images/recursion0.png)
![task1](https://github.com/leone-nyaga/alx-low_level_programming/blob/master/0x08-recursion/images/recursion1.png)
![task2](https://github.com/leone-nyaga/alx-low_level_programming/blob/master/0x08-recursion/images/recursion2.png)
![task3](https://github.com/leone-nyaga/alx-low_level_programming/blob/master/0x08-recursion/images/recursion3.png)
![task4](https://github.com/leone-nyaga/alx-low_level_programming/blob/master/0x08-recursion/images/recursion4.png)

## Tasks

0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

Write a function that prints a string, followed by a new line.

+ Prototype: void _puts_recursion(char *s);

FYI: The standard library provides a similar function: puts. Run man puts to learn more.

```bash
julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
Puts with recursion
julien@ubuntu:~/0x08. Recursion$ 
```

Repo:

+ GitHub repository: alx-low_level_programming
+ Directory: 0x08-recursion
+ File: 0-puts_recursion.c

1. Why is it so important to dream? Because, in my dreams we are together

Write a function that prints a string in reverse.

+ Prototype: void _print_rev_recursion(char *s);

```bash
julien@ubuntu:~/0x08. Recursion$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion 
reklaW notloC
julien@ubuntu:~/0x08. Recursion$
```

Repo:

+ GitHub repository: alx-low_level_programming
+ Directory: 0x08-recursion
+ File: 1-print_rev_recursion.c

2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

Write a function that returns the length of a string.

+ Prototype: int _strlen_recursion(char *s);

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

```bash
julien@ubuntu:~/0x08. Recursion$ cat 2-main.c 
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

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion 
14
julien@ubuntu:~/0x08. Recursion$
```

Repo:

+ GitHub repository: alx-low_level_programming
+ Directory: 0x08-recursion
+ File: 2-strlen_recursion.c

3. You mustn't be afraid to dream a little bigger, darling

