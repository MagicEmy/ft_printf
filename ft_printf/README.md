# ft_printf

## Table of Contents

1. [Introduction](#introduction)
2. [Common Instructions](#common-instructions)
3. [Mandatory Part](#mandatory-part)
4. [Bonus Part](#bonus-part)
5. [Project Structure](#project-structure)
6. [Usage](#usage)
7. [Compilation](#compilation)
8. [Testing](#testing)
9. [Norm and Memory Management](#norm-and-memory-management)
10. [License](#license)

---

## Introduction

**ft_printf** is a project where you are tasked with recoding the standard C `printf` function. This project is part of the Codam/42 curriculum and focuses on mastering C language concepts such as variadic functions, memory management, and efficient output handling.

---

## Common Instructions

- Your project must be written in **C**.
- It must adhere to the **Norm** standard.
- Your functions should not crash unexpectedly (e.g., segmentation fault, bus error, double free).
- All heap-allocated memory must be properly freed. **No memory leaks** will be tolerated.
- Submit a **Makefile** that:
  - Compiles your source files with `-Wall -Wextra -Werror` flags.
  - Contains the rules `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
  - Does **not relink** when unnecessary.
- You must submit your work to the assigned Git repository.
- If **Deepthought** (42's automatic grading system) is used for grading and encounters an error, the evaluation will stop.

---

## Mandatory Part

### Program Name:

`libftprintf.a`

### Turn-in Files:

- `Makefile`
- `*.h`, `*.c` files

### Makefile Rules:

- `NAME`, `all`, `clean`, `fclean`, `re`

### External Functions Allowed:

- `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`

### Description:

You must write a library that contains the `ft_printf()` function, which mimics the behavior of the original `printf()` function in C.

#### Requirements:

- Do **not** implement the buffer management of the original `printf()`.
- Handle the following conversions:
  - `%c`: Prints a single character.
  - `%s`: Prints a string.
  - `%p`: Prints a pointer in hexadecimal format.
  - `%d`: Prints a decimal (base 10) number.
  - `%i`: Prints an integer in base 10.
  - `%u`: Prints an unsigned decimal (base 10) number.
  - `%x`: Prints a hexadecimal (base 16) number in lowercase.
  - `%X`: Prints a hexadecimal (base 16) number in uppercase.
  - `%%`: Prints a percent sign.
- The `ft_printf()` function will be compared against the original `printf()`.
- Use the `ar` command to create your library (using `libtool` is forbidden).
- The `libftprintf.a` file must be created in the root of your repository.

---

## Project Structure

```
ft_printf/
├── ft_printf.c            # Main implementation of ft_printf
├── ft_conversions_char.c  # Character-related conversions
├── ft_conversions_numbers.c # Number-related conversions
├── ft_putnbr.c           # Helper function for number output
├── main.c                # Example usage of ft_printf
├── test_ft_printf.c      # Unit tests for ft_printf (using Unity)
├── Makefile              # Build instructions
├── libftprintf.a         # Static library output
└── Unity/               # Testing framework (Unity)
```

---

## Compilation and Usage

### Building the Project

Run the following command to build both the library and the executable:

```bash
make
```

This will:
- Compile all source files into object files
- Create the static library `libftprintf.a`
- Generate the executable `ft_printf`

### Running the Program

Once compiled, you can run the program with:

```bash
./ft_printf
```

### Using the Library in Your Own Projects

To use the library in your own programs:

1. Include the header in your source file:
```c
#include "ft_printf.h"
```

2. Compile your program with the library:
```bash
gcc -Wall -Wextra -Werror your_program.c libftprintf.a -o your_program
```

### Cleaning Up

To remove object files:

```bash
make clean
```

To remove everything (including the library and executable):

```bash
make fclean
```

To rebuild everything:

```bash
make re
```

## Testing

Unit tests for ft_printf are implemented using the Unity testing framework.

To compile and run the tests:

```bash
make run_test
```

The test results will be displayed in the terminal, showing which tests passed or failed.

## Mandatory Conversions

The following conversions are supported by ft_printf:

- %c: Prints a single character.
- %s: Prints a string.
- %p: Prints a pointer in hexadecimal format.
- %d: Prints a decimal (base 10) number.
- %i: Prints an integer in base 10.
- %u: Prints an unsigned decimal (base 10) number.
- %x: Prints a hexadecimal (base 16) number in lowercase.
- %X: Prints a hexadecimal (base 16) number in uppercase.
- %%: Prints a percent sign.

## Norm and Memory Management

This project adheres to the Codam/42 Norm standards:

- No memory leaks are allowed. All heap-allocated memory must be properly freed.
- The code must prevent undefined behaviors such as segmentation faults or bus errors.

## Author

- **Emanuela**  
  [<img alt="GitHub" height="32px" src="https://github.githubassets.com/images/modules/logos_page/GitHub-Mark.png" />](https://github.com/MagicEmy)
  [<img alt="LinkedIn" height="32px" src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/LinkedIn_logo_initials.png/600px-LinkedIn_logo_initials.png" />](https://www.linkedin.com/in/emanuelalicameli/)