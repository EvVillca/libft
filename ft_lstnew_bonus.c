#include "libft.h"

/*Crea un nodo con información cualquiera*/
t_list  *ft_lstnew(void *content)
{
  t_list    *n;

  n = (t_list *) malloc(sizeof(t_list));
  if (n == NULL)
    return (NULL);
  n->content = content;
  n->next = NULL;
  return (n);
}
