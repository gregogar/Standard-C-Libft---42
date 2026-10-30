*This project has been created as part of the 42 curriculum by grgarcia*

# Libft

## Description
Libft is a static library written in C as part of the 42 curriculum.
Its goal is to recreate from scratch a selection of functions from the C standard library,- among other utilities-. The goal of this project is building a strong and deeper understanding of fundamental C programming concepts, such as pointer manipulation, basic and advanced string processing, memory management, dynamic memory allocation, linked lists manipulation and static library compilation. 
Once compiled, this project generates a static library named libft.a that can be linked to other C programs and reused in future projects.

## Detailed description of the library
The library contains several groups of functions, each designed to handle common operations in C programming.

### 1. Character verification and transformation
Functions used to identify ASCII character categories and convert letter cases.

```c
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_tolower(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
```

### 2. Number conversion
Functions used to convert between integers and their string representations.

```c
int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);
```

### 3. String management
Functions for measuring, copying, concatenating, searching and comparing strings.

```c
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *big, const char *small, size_t len);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *s, int c);
```

### 4. Memory management
Functions for manipulating, comparing, searching, copying and allocating memory.

```c
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *src, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
```

### 5. Advanced string manipulation
Functions for creating, splitting, joining, trimming and transforming strings.

```c
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
```

### 6. Output to file descriptors
Functions for writing characters, strings and integers to a specified file descriptor.

```c
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
```

### 7. Basic linked list operations
Functions for creating, traversing, modifying, transforming and deleting singly linked lists.
The library uses the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Available linked list functions:

```c
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(void *content);
unsigned int	ft_lstsize(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
```

## Instructions
A C compiler, such as cc, and the make utility are required to compile the library.
Clone the repository and navigate to the project directory.
Step 1.
	Run: make all
This command compiles the source files and creates the static library: libft.a
	Command 'make' can also be used next to the following rules:
	
		- make clean 	-> Removes the previously created object files (*.o).
		- make fclean	-> Removes the previously created object files (*.o) and the libft.a file.
		- make re		-> Removes all the previously created files (*.o & *.a) and recompiles the library.
Step 2.
	Use the header (#include "libft.h") in your C source file. After compiling libft with make all and example C program can be linked with the library. For example, 'cc -Wall -Wextra -Werror example.c libft.a -o prueba'.
	Then execute ./prueba and let the program do it's work.

## Resources
This project has been mainly develop using the Linux manual pages, which can be consulted from a Linux terminal when commanding, for example, (man <name_of_a_given_function>). All the information needed can be read from this pages.
The 42 Libft official subject has also been followed in order to align the all the library functions with the expected behaviour extracted from the original functions.

## AI use
AI has been used as a learning and support tool during the development of this project. Specifically, it has helped with the understanding and clarifying of C fundamental concepts and the reviewing of edge cases.