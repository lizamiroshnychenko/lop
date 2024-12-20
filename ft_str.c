#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t len = 0;
	while (s[len] != '\0')
	len++;
	return len;
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i = 0;
	if (dstsize == 0)
	return ft_strlen(src);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i = 0;
	size_t j = 0;

	while (dst[i] && i < dstsize)
	i++;
	while (src[j] && (i + j + 1) < dstsize)
	{
	dst[i + j] = src[j];
	j++;
}
	if (i < dstsize)
	dst[i + j] = '\0';
	return i + ft_strlen(src);
}

char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
	if (*s == (char)c)
	return (char *)s;
	s++;
	}
	if (c == '\0')
	return (char *)s;
	return (NULL);
}

char *ft_strrchr(const char *s, int c)
{
	const char *last = NULL;
	while (*s)
	{
		if (*s == (char)c)
		last = s;
		s++;
	}
	if (c == '\0')
	return ((char *)s);
	return ((char *)last);
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
		return (unsigned char)*s1 - (unsigned char)*s2;
	if (*s1 == '\0')
	break;
	s1++;
	s2++;
	}
	return (0);
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
	return ((char *)haystack);
	for (size_t i = 0; haystack[i] && i < len; i++)
	{
		if (haystack[i] == needle[0])
	{
		size_t j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
		j++;
		if (needle[j] == '\0')
		return (char *)(haystack + i);
	}
	}
	return (NULL);
}
