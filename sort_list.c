#include <stdlib.h>
typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;
t_list *sort_list(t_list *lst, int ascending(int a, int b))
{
    int tmp;
    t_list *root;

    root=(t_list *)(malloc(sizeof(t_list)));
    root = lst;
    tmp = 0;
    while (lst->next)
    {
        if (ascending(lst->data, lst->next->data))
            lst = lst->next;
        else
        {
            tmp = lst->next->data;
            lst->next->data = lst->data;
            lst->data = tmp;
            lst = root;
        }
    }
    return root;
}

int ascending(int a, int b)
{
    return (a <= b);
}

int main()
{
    t_list *list;
    list = (t_list *) malloc(sizeof(t_list));
    int k = 7;
    list->data = 6;
    list->next->data = 8;

    

}