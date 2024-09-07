# Ft_printf
##### Graded 125/100

### About
It's just a simple recoding of printf().

### Compilation
To compile the library you can run `make`. This will generate a `libftprintf.a` file. To use it just link it with your source files at compilation. Example:
```sh
$ cc main.c -lftprintf -L <path_to_libftprintf.a> -I <path_to_printf.h>
```
