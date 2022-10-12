
#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd ,&c , 1);
}


int main()
{
    //char x;


    int fd = open("file.txt" , O_RDWR | O_CREAT);
    printf("%d", fd);
    ft_putchar_fd('c' , fd);
    //fd = open("test.txt" , O_RDONLY , 0);
    //read(fd , &x , 1);
    //printf("%c\n" , x);
}