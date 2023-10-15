Project Title: printf
Compilation

To compile your code, you can use the following command:

```bash :

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
Note: Ensure that you do not push any C file containing a main function in the root directory of your project. You may create a test folder containing all your test files, including main functions. Our main files will include your main header file (main.h).
Example of Compilation:
#
```bash :

#alex@ubuntu:~/c/printf$ cat main.c #
#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    // ... (Test code)

    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
```
#
Tasks
0. I'm not going anywhere.

    Write a function that produces output according to a format.
    Prototype: int _printf(const char *format, ...)
    Returns: the number of characters printed (excluding the null byte used to end output to strings)
    Supported conversion specifiers: c, s, %
    You don’t have to handle flag characters, field width, precision, or length modifiers.

1. Education is when you read the fine print.

    Handle the following conversion specifiers: d, i
    You don’t have to handle flag characters, field width, precision, or length modifiers.

2. With a face like mine, I do better in print (Advanced)

    Handle the custom conversion specifier: b, which converts an unsigned int argument to binary.

3. What one has not experienced, one will never understand in print (Advanced)

    Handle the following conversion specifiers: u, o, x, X.
    You don’t have to handle flag characters, field width, precision, or length modifiers.

4. Nothing in fine print is ever good news (Advanced)

    Use a local buffer of 1024 chars to call write as little as possible.

5. My weakness is wearing too much leopard print (Advanced)

    Handle the custom conversion specifier: S, which prints the string. Non-printable characters are represented as \x followed by the ASCII code value in hexadecimal (upper case).

6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print (Advanced)

    Handle the conversion specifier: p.
    You don’t have to handle flag characters, field width, precision, or length modifiers.

7. The big print gives and the small print takes away (Advanced)

    Handle the flag characters: +, space, #.

8. Sarcasm is lost in print (Advanced)

    Handle the length modifiers: l, h.
    Supported conversion specifiers: d, i, u, o, x, X.

9. Print some money and give it to us for the rain forests (Advanced)

    Handle the field width for non-custom conversion specifiers.

10. The negative is the equivalent of the composer's score, and the print the performance (Advanced)

    Handle the precision for non-custom conversion specifiers.

11. It's depressing when you're still around and your albums are out of print (Advanced)

    Handle the 0 flag character for non-custom conversion specifiers.

12. Every time that I wanted to give up, if I saw an interesting textile, print whatever, suddenly I would see a collection (Advanced)

    Handle the - flag character for non-custom conversion specifiers.

13. Print is the sharpest and the strongest weapon of our party (Advanced)

    Handle the custom conversion specifier: r, which prints the reversed string.

14. The flood of print has turned reading into a process of gulping rather than savoring (Advanced)

    Handle the custom conversion specifier: R, which prints the ROT13'ed string.

15. *

    All the above options work well together.



License
    This project is not open-source and is for educational purposes only.

Acknowledgments
``
    putbullet - Project contributor
