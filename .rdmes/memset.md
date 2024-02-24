### void *memset(void *s, int c, size_t n)
This function sets n bytes of the memory pointed by s to c. In other words, it writes the c character in s from the beginning of s to n bytes. You can find this function in the [string.h](https://www.tutorialspoint.com/c_standard_library/string_h.htm) header.
Examples:
| &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;INPUT&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; | &emsp;&emsp;&nbsp;&nbsp;OUTPUT&emsp;&nbsp;&emsp;&nbsp;&nbsp; |
|:------------------------------------:|:------:|

| s | c | n ||
|:---:|:---:|:---:|:---:|
| "This is a string" | '5' | 6 | 555555s a string |
| "It's-a me, Mario" | 127 (DEL) | 11 | Mario! |
| "Normal string" | 'a' | -1 | Segmentation fault |
| "" | 'a' | 3 | Segmentation fault |
| NULL | 'a' | 3 | Segmentation fault |
| NULL | 'a' | 0 | NULL |
| "What's that?" | 'a' | 300 | Undefined behaviour |
