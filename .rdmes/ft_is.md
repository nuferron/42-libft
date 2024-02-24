These functions receive an integer c and check if it belongs to a certain character class (i.e. isalpha checks if c is a letter). All these functions are included in the [ctype.h](https://www.tutorialspoint.com/c_standard_library/ctype_h.htm) header.

### int isalpha(int c)
As stated above, this function checks wether c is a letter or not, regardless wether it's uppercase or lowercase.
The return values are:
  - Non-zero: If it is a letter
  - 0: If it's not

### int isdigit(int c)
It checks whether c is a digit (0 - 9) or not.
The return values are:
  - Non-zero: If it is a digit
  - 0: If it's not

### int isalnum(int c)
It checks wether c is alphanumeric, which means that it can be either a letter or a digit.
The return values are:
  - Non-zero: If it is alphanumeric
  - 0: If it's not

### int isascii(int c)
It checks wether c corresponds to a character in the ascii table or not.
The return values are:
  - Non-zero: If it is an ascii character
  - 0: If it's not
  
### int isprint(int c)
It checks wether c is a printable character or not. The ascii printable characters are used to represent human-readable text (including letters, spaces, digits and symbols).
The return values are:
  - Non-zero: If it is printable
  - 0: If it's not
