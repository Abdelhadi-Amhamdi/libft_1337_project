#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    void *data;
    struct list *next;
} t_list;

t_list *new_node(void *content)
{
    t_list *p;

    p = (t_list *)malloc(sizeof(t_list));
    if (!p)
        return 0;
    p->data = content;
    p->next = NULL;
    return p;
}

void add_item_tofront(t_list **list, t_list *item)
{
        item->next = *list;
        *list = item;
}

t_list *get_last_item(t_list *list)
{
    t_list *tmp;
    tmp = list;
    while (tmp->next)
        tmp = tmp->next;
    return tmp;
}


void add_item_toback(t_list **list, t_list *item)
{
    t_list *tmp;

    tmp = get_last_item(*list);
    tmp->next = item;
}

size_t list_size(t_list *list)
{
    size_t size;
    t_list *tmp;

    size = 0;
    tmp = list;
    while(tmp)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}

void list_del_item(t_list *item)
{
    free(item->data);
    item->data = NULL;
}

int main()
{
    t_list *my_list;

    my_list = new_node("abc");
    add_item_tofront(&my_list , new_node("hello"));
    add_item_toback(&my_list , new_node("hey"));
    add_item_tofront(&my_list , new_node("abcd"));
    add_item_toback(&my_list , new_node("xyz"));

    list_del_item(my_list->next);

    printf("%zu\n", list_size(my_list));
    printf("%s\n", my_list->next->data);
    printf("%s", get_last_item(my_list)->data);
}