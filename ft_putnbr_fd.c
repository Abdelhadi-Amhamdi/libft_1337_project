
#include<unistd.h>
#include "libft.h"

void ft_putnbr_fd(int x, int fd)
{
    long int n = x;
    if(n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(-n , fd);
    }
    if(n > 9)
    {
        ft_putnbr_fd(n/10 , fd);
        ft_putchar_fd((n%10)+48, fd);
    }
    else
        ft_putchar_fd((n%10)+48, fd);

}