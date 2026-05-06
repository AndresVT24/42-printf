*Este proyecto ha sido creado como parte del currículo de 42 por ervillca.*

# ft_printf

## Description

`ft_printf` is a C library project that reimplements the behavior of the standard `printf()` function for a defined set of conversions.

The goal of the project is to create a static library named `libftprintf.a` containing the function:

```c
int ft_printf(char const *format, ...);
```

This function receives a format string and a variable number of arguments, then writes the formatted output. The implementation is compared against the original `printf()` function for the required conversions.

The mandatory project does not reproduce the original `printf()` buffer management.

## Supported Conversions

The mandatory implementation supports the following conversions:

| Conversion | Description |
| --- | --- |
| `%c` | Prints a single character. |
| `%s` | Prints a string. |
| `%p` | Prints a `void *` pointer in hexadecimal format. |
| `%d` | Prints a decimal number in base 10. |
| `%i` | Prints an integer in base 10. |
| `%u` | Prints an unsigned decimal number in base 10. |
| `%x` | Prints a hexadecimal number in base 16 using lowercase letters. |
| `%X` | Prints a hexadecimal number in base 16 using uppercase letters. |
| `%%` | Prints a percent sign. |

## Instructions

### Requirements

The project is written in C and is compiled with:

```bash
cc -Wall -Wextra -Werror
```

The archive is created with `ar`, and `libtool` is not used.

This project uses `libft`, so the `libft` directory must be present with its own `Makefile`.

### Compilation

From the root of the repository, run:

```bash
make
```

This builds `libft` first and then creates the `libftprintf.a` static library in the root of the repository.

### Cleaning

Remove object files:

```bash
make clean
```

Remove object files and the generated library:

```bash
make fclean
```

Rebuild the project from scratch:

```bash
make re
```

### Example Usage

Create a small test file:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, number: %d\n", "world", 42);
    return (0);
}
```

Compile it with the library:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -I.
```

Run it:

```bash
./a.out
```

## Algorithm and Data Structures

The implementation is based on a linear parsing algorithm over the format string.

The format string is read from left to right. Each normal character is written directly to the output. When the parser finds a `%` character, it checks the following character to identify the conversion type. Depending on that conversion, the next argument is retrieved from the variadic argument list and passed to the corresponding conversion logic.

The main data structure used for the variable arguments is `va_list`, because `ft_printf` receives an unknown number of arguments. The macros `va_start`, `va_arg`, and `va_end` allow the function to initialize the argument list, read each argument with the correct expected type, and cleanly finish the variadic handling.

The return value is the number of characters printed, following the behavior expected from `printf()`.

## Resources

### AI Usage

AI was not used here to generate or modify the C source code, the Makefile, or the implementation of the `ft_printf` algorithm. The AI-assisted part of the project is limited to this documentation file.