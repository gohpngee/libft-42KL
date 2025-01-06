# libft-42KL
A library in C containing functions that you can call by importing the library in future projects
Functions included:
islpha: Checks if the character entered in an alphabet.
isdigit: Checks if the character entered is a number.
isalnum: Checks if the character entered is either an alphabet or number.
isascii: Checks if the character entered is within the range of ascii characters.
isprint: Checks if the character entered contains printable characters.
strlen: Returns the length of the string.
memset: Sets the memory to a specified value.
bzero: Sets the memory to the value 0.
memcpy: Copy a specified number of bytes from a source memory location to a destination memory location.
memmove: Copy a block of memory from one location to another, even when the memory regions overlap.
strlcpy: Copy a string from the source (src) to the destination (dst), ensuring that the destination buffer is not overflowed. 
strlcat: Concatenate two strings, but with a safety mechanism to prevent buffer overflows. It appends the source string (src) to the destination string (dst), ensuring that the total length of the destination string does not exceed a specified size (size).
toupper: Converts the string to uppercase.
tolower: Converts the string to lowercase.
strchr: Returns the first occurance of a character in a string.
strrchr: Returns the last occurance of a character in a string.
strncmp: Compares the lexicographical value difference between two strings up to a certain iteration.
memcmp: Returns the lexicographical value difference between two strings in memory.
memchr: Returns a pointer to the character searched for in a string.
strnstr: Finding a needle in a haystack.
atoi: Converts arrays to integers.
substr: Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
strjoin: Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
strtrim: Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
split: Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.
itoa: Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
strmapi: Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to collect the
results from the successive applications of f.
striteri: Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.
purchar_fd: Outputs the character ’c’ to the given file descriptor.
putstr_fd: Outputs the string ’s’ to the given file descriptor.
putendl_fd: Outputs the string ’s’ to the given file descriptor followed by a newline.
putnbr_fd: Outputs the integer ’n’ to the given file descriptor.
lst_new: Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
lstadd_front: Adds the node ’new’ at the beginning of the list.
lstsize: Counts the number of nodes in a list.
lst_last: Returns the last node of the list.
lstadd_back: Adds the node ’new’ at the end of the list.
lstdelone: Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.
lstclear: Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.
lstiter: Iterates the list ’lst’ and applies the function ’f’ on the content of each node.
lstmap: Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.
