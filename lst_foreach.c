
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *root;

    root = begin_list;
    while (root)
    {
        (*f)(root->data);
        root =  root->next;
    }
    

}