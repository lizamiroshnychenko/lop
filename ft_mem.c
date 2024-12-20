#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr = (unsigned char *)b;
	for (size_t i = 0; i < len; i++)
	ptr[i] = (unsigned char)c;
	return (b);
}

void ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
}

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d = (unsigned char *)dst;
	const unsigned char *s = (const unsigned char *)src;

	for (size_t i = 0; i < n; i++)
	d[i] = s[i];
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d = (unsigned char *)dst;
	const unsigned char *s = (const unsigned char *)src;

	if (d < s)
{
	for (size_t i = 0; i < len; i++)
	d[i] = s[i];
}
	else {
		for (size_t i = len; i > 0; i--)
		d[i - 1] = s[i - 1];
		}
	return (dst);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr = s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
		return (void *)ptr;
		ptr++;
	}
    return (NULL);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ptr1 = s1;
	const unsigned char *ptr2 = s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
		return (*ptr1 - *ptr2);
	ptr1++;
	ptr2++;
	}
	return (0);
}
