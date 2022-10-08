
#include "libft.h"
#include<string.h>

int main()
{
    char dest[] = "hello world";
 //world
// hello world

    ft_memmove(dest, dest + 5, 6);
    //memmove(dest, dest + 5, 6);
    printf("%s" , dest);
    return 0;
}