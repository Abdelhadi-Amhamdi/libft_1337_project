
 #include "libft.h"

int main()
{

    t_list *node;
    int i = 0;
    
    ft_lstadd_front(&node , ft_lstnew("hello"));
    // ft_lstadd_front(node , ft_lstnew("hey"));
    // ft_lstadd_front(node , ft_lstnew("hi"));


    printf("%s\n" , *node->content);
    // printf("%s\n" , node[0]->next->content);
    // printf("%s\n" , node[0]->next->next->content);


    return 0;
}