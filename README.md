Printf Project

This project implements a custom printf function in C that replicates the functionality of the standard printf function. The function supports a variety of conversion specifiers and flag characters, providing a comprehensive solution for formatted printing in C programs.
Compilation

To compile the project, use the following command:

bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

Tasks
Task 0: I'm not going anywhere.

    Implement a function that produces output according to a format.
    Supported conversion specifiers: %c, %s, %%.
    Returns: the number of characters printed (excluding the null byte used to end output to strings).

Education is when you read the fine print.

    Handle conversion specifiers: %d, %i.

With a face like mine, I do better in print (Advanced)

    Handle custom conversion specifier: %b (converts an unsigned int argument to binary).

Nothing in fine print is ever good news (Advanced)

    Handle conversion specifiers: %u, %o, %x, %X.

My weakness is wearing too much leopard print (Advanced)

    Use a local buffer of 1024 chars to call write as little as possible.

How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print (Advanced)

    Handle custom conversion specifier: %S (prints the string with non-printable characters represented as \x followed by the ASCII code value in hexadecimal).

The big print gives and the small print takes away (Advanced)

    Handle conversion specifier: %p.

Sarcasm is lost in print (Advanced)

    Handle flag characters: +, space, #.

Print some money and give it to us for the rain forests (Advanced)

    Handle length modifiers: l, h.

The negative is the equivalent of the composer's score, and the print the performance (Advanced)

    Handle field width for non-custom conversion specifiers.

It's depressing when you're still around and your albums are out of print (Advanced)

    Handle precision for non-custom conversion specifiers.

Every time that I wanted to give up, if I saw an interesting textile, print whatever, suddenly I would see a collection (Advanced)

    Handle the 0 flag character for non-custom conversion specifiers.

Print is the sharpest and the strongest weapon of our party (Advanced)

    Handle the - flag character for non-custom conversion specifiers.

The flood of print has turned reading into a process of gulping rather than savoring (Advanced)

    Handle custom conversion specifier: %r (prints the reversed string).

All the above options work well together.
Conclusion

This project implements a feature-rich printf function in C, providing extensive support for various conversion specifiers, flag characters, and length modifiers. It offers a flexible and robust solution for formatted printing in C programs.
