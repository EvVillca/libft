t_list  *ft_lstnew(void *content)
{
  t_list    *n;

  n = (t_list *) malloc(sizeof(tlist));
  if (n == NULL)
    return (NULL);
  n->content = content;
  n->next = NULL;
  return (n);
}
