# 0x15. C - File I/O

> Input and output facilities are not part of the C language itself, so we have not emphasized them in our presentation thus far. 
> Nonetheless, programs interact with their environment in much more complicated ways.
> Before a file can be read or written, it has to be opened by the library function `fopen`.
> `fopen` takes an external name like `x • c` or `y. c`, does some housekeeping and negotiation with the operating system (details of which needn't concern us), and returns a pointer to be used in subsequent reads or writes of the file.
	 FILE *fp;
	 FILE *fopen(char *name, char *mode);
	 fp = fopen(name, mode);

> The first argument of £open is a character string containing the name of the file.
> The second argument is the mode, also a character string, which indicates how one intends to use the file. Allowable modes include read ("r"), write ( "w"), and append ("a"). 
> Some systems distinguish between text and binary files; for the latter, a "b" must be appended to the mode string.

# TASKS

### 0. Tread lightly, she is near

File: `0-read_textfile.c` - A function that reads a text file and prints it to the POSIX standard output.  
Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`


### 1. Under the snow
File: `1-create_file.c` - A  function that creates a file.  
Prototype: `int create_file(const char *filename, char *text_content);`  


### 2. Speak gently, she can hear
File: `2-append_text_to_file.c`  - A function that appends text at the end of a file.  
Prototype: `int append_text_to_file(const char *filename, char *text_content);`


### 3. cp
File: `3-cp.c` - A program that copies the content of a file to another file.  


### 4. elf
File: `100-elf_header.c` - a program that displays the information contained in the ELF header at the start of an ELF file.
