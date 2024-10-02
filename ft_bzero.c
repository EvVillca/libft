#include "libft.h"
/*_
 * Borra los n bytes y colaca 0 en su lugar.
 */
void    ft_bzero(void *s, size_t n)
{
  size_t    i;

  i = 0;
  while (i < n)
  {
    *(unsigned char *)s++ = 0;
    i++;
  }
}
