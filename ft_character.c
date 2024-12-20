#include "libft.h"

int ft_isalpha(int c)
{
	return ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') );
}

int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

int ft_toupper(int c)
{
	if (ft_isalpha(c) && c >= 'a' && c <= 'z')
	{
		return c - 32;
	}
	return c;
}

int ft_tolower(int c)
{
	if (ft_isalpha(c) && c >= 'A' && c <= 'Z')
	{
	return c + 32;
	}
	return c;
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return result * sign;
}
