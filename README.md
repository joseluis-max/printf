# _Printf
Project _printf prints strings formatted with the following special characters:
- `%c` --> char
- `%s` --> char *
- `%d` --> integer
- `%i` --> integer

## How used it ?

Download the source code, compile it with the command `$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`. 

Include the `holberton.h` header in the file where we are going to use the `_printf` function.

### FlowChart
<img src="https://github.com/joseluis-max/printf/blob/main/image%20(2).png" alt="flowchart" width="500"/>
<img src="https://github.com/joseluis-max/printf/blob/main/image%20(3).png" alt="flowchart" width="500"/>

### Examples

- Code Implementation
<img src="https://raw.githubusercontent.com/joseluis-max/printf/main/Screenshot%20from%202021-07-27%2014-03-35.png" alt="main.c" width="500"/>
- Execution complile file
<img src="https://raw.githubusercontent.com/joseluis-max/printf/main/Screenshot%20from%202021-07-27%2014-05-06.png" alt="execution" width="500"/>

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
 
This project is licensed under the [MIT](https://github.com/joseluis-max/printf/blob/9ab2c72770dc02e83f3fa9099a7936f3ee5bd28a/LICENSE)
Creative Commons License - see the [MIT](https://github.com/joseluis-max/printf/blob/9ab2c72770dc02e83f3fa9099a7936f3ee5bd28a/LICENSE) file for
details

## Acknowledgments

  - C
  - Variadic Arguments
  - Pointers function
  - Struct
  - Typedef
