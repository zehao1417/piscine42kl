/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char    *ft_itoa(int nbr);
*/

#include <stdlib.h>
#include <stdio.h>

int	ft_numlen(int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		count++;
	}
	while (nbr >= 10)
	{
		nbr /= 10;
		count++;
	}
	count++;
	// printf("%i\n", count);
	return (count);
}

char	*ft_fill(int nbr, char *str, int *n)
{
	long	num;

	num = nbr;
	if (num < 0)
	{
		str[(*n)++] = '-';
		num = -num;
	}
	if (num >= 10)
	{
		ft_fill((num / 10), str, n);
	}
	str[(*n)++] = (num % 10) + '0';
	return (str);
}

char	*ft_itoa(int nbr)
{
	int	n;
	char	*str;

	n = 0;
	str = malloc(sizeof(char) * (ft_numlen(nbr) + 1));
	if (!str)
		return (NULL);
	str = ft_fill(nbr, str, &n);
	//	printf("%i\n", n);
	str[n] = '\0';
	return (str);
}

int	main(void)
{
	int	number;
	char	*res;

	number = 123456789;
	res = ft_itoa(number);
	printf("%s\n", res);
	free(res);
}
