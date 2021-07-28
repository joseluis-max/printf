# _Printf
Project _printf prints strings formatted with the following special characters:
- `%c` --> char
- `%s` --> char *
- `%d` --> integer
- `%i` --> integer

## How used it ?

Download the source code, compile it with the command `$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`. 

Include the `holberton.h` header in the file where we are going to use the `_printf` function. 

### Examples

Requirements for the software and other tools to build, test and push 

- Code Implementation
![main.c!](https://raw.githubusercontent.com/joseluis-max/printf/main/Screenshot%20from%202021-07-27%2014-03-35.png)
- Execution complile file
![Execution!](https://raw.githubusercontent.com/joseluis-max/printf/main/Screenshot%20from%202021-07-27%2014-05-06.png)

### Man Page install
You can install command as follows 

    `$ sudo cp man_3_printf /usr/local/man/man1/man_3_printf.1`
    `$ sudo gzip /usr/local/man/man1/man_3_printf.1`
    `$ man man_3_printf`

## Authors

  - **Sebastían Villa** - *villalopezsebastian@gmail.com* -
    [GitHub](https://github.com/SebasVillaLo)
  - **José Valdiviezo** - *luisj.valdiviezo20@gmail.com* -
    [GitHub](https://github.com/joseluis-max)
    
## License
 
This project is licensed under the [MIT](LICENSE.md)
Creative Commons License - see the [MIT](LICENSE.md) file for
details

## Acknowledgments

  - C
  - Variadic Arguments
  - Pointers function
  - Struct
  - Typedef
