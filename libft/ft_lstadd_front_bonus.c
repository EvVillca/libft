#include "libft.h"

/*
 * el 1º nodo se enlaza con el nuevo
 * convierte el nuevo en el primero nodo
 * */
void    ft_lstadd_front(t_list **lst, t_list *new)
{
  if (lst && new)
  {
    new->next = *lst;
    *lst = new;
  }
}
