# My Libft Library

## Description
I have written my own `libft` library from scratch and added various additional functions to enhance basic C functionalities. This library is designed to simplify frequently used operations in programming.

## Features
- Custom implementations of basic functions from the standard C library.
- Additional functions for string manipulation.
- Memory management functions.
- Functions for managing linked lists.

## Included Functions

### 1. Libc Functions
These functions provide custom implementations of standard C library functions:
- `ft_strlen` – Calculates the length of a string.
- `ft_strcpy` – Copies a string.
- `ft_strcmp` – Compares two strings.
- `ft_memcpy` – Copies a memory block.

### 2. Additional Functions
These functions are either not included in the standard C library or are enhanced versions:
- `ft_substr` – Extracts a substring from a string.
- `ft_strjoin` – Concatenates two strings.
- `ft_split` – Splits a string based on a specific character.
- `ft_itoa` – Converts an integer to a string.

### 3. Bonus Functions (Linked List Operations)
Functions developed for linked list operations using a custom data structure:

```c
typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;
```

- `ft_lstnew` – Creates a new node.
- `ft_lstadd_front` – Adds a new node to the front of the list.
- `ft_lstsize` – Returns the number of nodes in the list.
- `ft_lstlast` – Returns the last node in the list.
- `ft_lstadd_back` – Adds a new node to the end of the list.

## Installation Instructions

### Clone the Project
```sh
git clone https://github.com/Nalveiz/libft
cd libft
```

### Build the Library
```sh
make
```
This will generate the `libft.a` library file.

