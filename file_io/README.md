# 0x15. C - File I/O

This project covers basic file input/output operations in C using system calls:
- open, read, write, close
- file descriptors
- file permissions

### Files
| File | Description |
|------|--------------|
| 0-read_textfile.c | Reads a text file and prints it to standard output |
| 1-create_file.c | Creates a file with specific permissions |
| 2-append_text_to_file.c | Appends text to an existing file |
| 3-cp.c | Copies content from one file to another |

### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o cp
