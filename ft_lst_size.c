typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    t_list *root;

    root = begin_list;
    int i = 0;
    while (root)
    {
        root = root->next;
        i++;
    }
    return i;
    
}