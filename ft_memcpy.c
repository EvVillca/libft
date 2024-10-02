#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
  size_t    i;
  unsigned char *d;
  unsigned char *s;

  i = 0;
  d = (unsigned char *)dest;
  s = (unsigned char *)src;

  if (d == 0 && s == 0 && n > 0)
    return (0);
  while (i < n)
  {
    d[i] = s[i];
    i++;
  }
  return (dest);
}
