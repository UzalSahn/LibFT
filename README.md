# 📚 Libft – Your First C Library

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Status](https://img.shields.io/badge/Status-In%20Progress-yellow.svg)
![School 42](https://img.shields.io/badge/42-Common%20Core-black.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)

---

### 🚀 Description
**Libft** (Library of Functions) is the first project in the 42 Common Core curriculum. The goal is to create a custom C library called `libft.a` from scratch.

At 42, students are often forbidden from using standard C library functions (like `printf`, `strcpy`, or `atoi`) in their projects. Instead, we must create our own implementations. This project builds that foundation.

This library contains:
1.  **Libc functions:** Re-coding standard C functions.
2.  **Additional functions:** Useful string and memory manipulation tools.
3.  **Bonus functions:** Linked list manipulation.

---

## 🛠️ Content
The library is divided into three main sections.

### Part 1 - Libc Functions
Standard C functions re-coded to understand their internal logic.

| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Check if character is alphabetic |
| `ft_isdigit` | Check if character is a digit |
| `ft_isalnum` | Check if character is alphanumeric |
| `ft_isascii` | Check if character is a 7-bit ASCII |
| `ft_isprint` | Check if character is printable |
| `ft_strlen` | Calculate length of a string |
| `ft_memset` | Fill memory with a constant byte |
| `ft_bzero` | Zero out a byte string |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Copy memory area (handles overlap) |
| `ft_strlcpy` | Size-bounded string copying |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper` | Convert char to uppercase |
| `ft_tolower` | Convert char to lowercase |
| `ft_strchr` | Locate character in string (first occurrence) |
| `ft_strrchr` | Locate character in string (last occurrence) |
| `ft_strncmp` | Compare two strings (up to n bytes) |
| `ft_memchr` | Scan memory for a character |
| `ft_memcmp` | Compare memory areas |
| `ft_strnstr` | Locate a substring in a string |
| `ft_atoi` | Convert ASCII string to integer |
| `ft_calloc` | Allocate memory and set to zero |
| `ft_strdup` | Duplicate a string |

### Part 2 - Additional Functions
Functions that are not in the standard Libc but are useful for string manipulation.

| Function | Description |
| :--- | :--- |
| `ft_substr` | Extract a substring from a string |
| `ft_strjoin` | Concatenate two strings |
| `ft_strtrim` | Trim characters from beginning and end of string |
| `ft_split` | Split a string into an array using a delimiter |
| `ft_itoa` | Convert integer to ASCII string |
| `ft_strmapi` | Apply function to every char of string (with index) |
| `ft_striteri` | Apply function to every char of string (by reference) |
| `ft_putchar_fd` | Output a char to a file descriptor |
| `ft_putstr_fd` | Output a string to a file descriptor |
| `ft_putendl_fd` | Output a string followed by newline to FD |
| `ft_putnbr_fd` | Output a number to a file descriptor |

### Part 3 - Bonus (Linked Lists)
Functions to manipulate lists (useful for later projects like push_swap).

| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Create a new list node |
| `ft_lstadd_front` | Add a node to the beginning of the list |
| `ft_lstsize` | Count the number of nodes in a list |
| `ft_lstlast` | Return the last node of the list |
| `ft_lstadd_back` | Add a node to the end of the list |
| `ft_lstdelone` | Delete a node and free its content |
| `ft_lstclear` | Delete and free a list |
| `ft_lstiter` | Apply a function to every node |
| `ft_lstmap` | Create a new list by applying a function to an existing one |

---

## 💻 Installation & Usage

### 1. Compiling the library
To compile the library, run:
```bash
make
```
To compile the bonus functions as well:
```bash
make bonus
```

### 2. Using it in your code
To use this library in your code, include the header and link the library during compilation:

**In your C file:**
```c
#include "libft.h"

int main()
{
    ft_putstr_fd("Hello World with Libft!\n", 1);
    return (0);
}
```

**Compiling with gcc:**
```bash
gcc main.c -L. -lft -o my_program
```

### 3. Cleaning up
*   `make clean`: Removes object files (`.o`).
*   `make fclean`: Removes object files and the library (`libft.a`).
*   `make re`: Recompiles everything from scratch.

---

## 🛡️ The Norm
All code is written in accordance with the **42 Norm**.
*   No `for` loops.
*   No global variables.
*   Functions cannot exceed 25 lines.
*   Strict variable naming and formatting rules.

---

## 🚀 Third-Party Testers
This project has been tested with:
*   [Francinette](https://github.com/xicodomingues/francinette)
*   [libft-unit-test](https://github.com/alelievr/libft-unit-test)
*   [libft-war-machine](https://github.com/0x050f/libft-war-machine)

> 💡 **Keep coding, keep building.**
