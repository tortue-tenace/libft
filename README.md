*This activity has been created as part of the 42 curriculum by thattal.*

# Libft

## Description

Libft is the very first project of the 42 common core. It consists of
re-implementing a set of standard libc functions along with a few
additional utility functions, all gathered into a reusable static
library (`libft.a`).

The library covers three areas:

1. **Libc functions** — re-implementations of standard functions
   (string handling, memory manipulation, character classification,
   conversion).
2. **Additional functions** — utilities that are not part of the libc
   (`ft_split`, `ft_substr`, `ft_itoa`, file-descriptor output, etc.).
3. **Linked lists** — handling of a simple singly-linked `t_list`
   structure (creation, insertion, traversal, deletion, mapping).

## Instructions

### Compilation

From the root of the repository, run:

```sh
make
```

This produces the `libft.a` archive at the root of the project.

Available rules:

| Rule          | Effect                                              |
| ------------- | --------------------------------------------------- |
| `make`        | Builds the library (alias for `make all`)           |
| `make clean`  | Removes the `.o` object files                       |
| `make fclean` | Removes the `.o` files **and** `libft.a`            |
| `make re`     | Equivalent to `make fclean && make all`             |

### Usage in another project

Include the header and link the library at compile time:

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello, libft!", 1);
    return (0);
}
```

```sh
cc main.c -L. -lft -I. -o program
```

## Function list

### Part 1 — Libc functions (23)

`ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint`
`ft_strlen` `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove`
`ft_strlcpy` `ft_strlcat` `ft_toupper` `ft_tolower` `ft_strchr`
`ft_strrchr` `ft_strncmp` `ft_memchr` `ft_memcmp` `ft_strnstr`
`ft_atoi` `ft_calloc` `ft_strdup`

### Part 2 — Additional functions (11)

`ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_itoa`
`ft_strmapi` `ft_striteri` `ft_putchar_fd` `ft_putstr_fd`
`ft_putendl_fd` `ft_putnbr_fd`

### Part 3 — Linked lists (9)

`ft_lstnew` `ft_lstadd_front` `ft_lstsize` `ft_lstlast`
`ft_lstadd_back` `ft_lstdelone` `ft_lstclear` `ft_lstiter`
`ft_lstmap`

Underlying structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

## Resources

### Documentation and references

- The `man` pages of every libc function involved
  (`man 3 strlen`, `man 3 strlcpy`, etc.)
- A lot of online C courses

### Use of AI

AI was not used to write any of the library's function code. It was
only used to clarify a few points on compilations errors, learning, and pass some tests to the functions.
