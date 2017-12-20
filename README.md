42 Core Cirriculum Projects
===

  These are the several projects required to be completed before accessing further branches. Full assignment details can be found in the pdfs.
  
Libft
---
Small recrations of some usefull C library funtions.

Fillit
---
Packing problem solver for tetris pieces.  Input is given to the program using valid newline seperated tetrominos (max of 26) output with a valid file will be a solution of the smallest possible square with each piece in its upperleft most position according to its order.
    
Usage:
  
  `make all`
  
  `./fillit [path to file]`    

<img src="https://github.com/S11Kelevra/42-Core-Projects/blob/master/media/fillitcap.png" width="500">

Get Next line
---
```C
int  get_next_line(const int fd, char **line)
```

Function used read and return lines from a given file descriptor. Succesive calls to the function returns the next line untill the EOF. Bytes read is defined by `BUFF_SIZE` macro in the header. Multiple file descriptors are handled though a linked list and one static variable used for bonuses.
