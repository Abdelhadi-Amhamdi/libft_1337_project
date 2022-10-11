
#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd ,&c , 1);
}


// int main()
// {
//     char x;

//     int fd = open("test.txt" , O_WRONLY | O_CREAT);
//     ft_putchar_fd('c' , fd);
//     fd = open("test.txt" , O_RDONLY , 1);
//     read(fd , &x , 1);
//     printf("%c\n" , x);
// }