## SIMPLE UNIX SHELL

### Description

- This is a simple implementation of a UNIX command line interpreter. The shell can interpret and execute command line arguments read from the standard input. The shell read lines from a file or terminal line which is then interpreted and executed if the command is valid.

### Requirements
- All the files are to be compiled on an Ubuntu 14.04 LTS machine with: gcc -Wal -Werror -Wextra -pedantic *.c All files end with a new line, with no memory leaks. All codes will use the Betty style. It will be checked using betty-style.pl and betty-doc.pl. All codes will be tested using the test files in the test folder. The simple shell supports most shell commands, such as cat, pwd, ls -la and more. Return Value : The shell returns a value of 0 if the command is valid and the command is executed successfully.

### Output
- The program must have the exact same output as sh (/bin/sh) as well as the exact same error output. The only difference is when you print an error, the name of the program must be equivalent to the argv[0]
