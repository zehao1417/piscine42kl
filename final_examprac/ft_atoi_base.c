#include <stdio.h>

int	base_check(char *base)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[n])
	{
		if (base[n] == '-' || base[n] == '+' || base[n] <= 32 || base[n] == 127)
			return (0);
		i = n + 1;
		while (base[i])
		{
			if (base[i] == base[n])
				return (0);
			i++;
		}
		n++;
	}
	return (1);
}

int	base_len(char *base)
{
	int	n;

	n = 0;
	while (base[n] != '\0')
		n++;
	return (n);
}

int	ft_value(char c, char *base)
{
	int	n;

	n = 0;
	while (base[n])
	{
		if (c == base[n])
			return (n);
		n++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	num;
	int	out;
	int	base_mult;

	if (!base_check(base))
		return (0);
	base_mult = base_len(base);
	num = 1;
	n = 0;
	out = 0;
	while (str[n] == ' ' || (str[n] >= 9 && str[n] <= 13))
		n++;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			num = -num;
		n++;
	}
	while (ft_value(str[n], base) != -1)
	{
		out = (out * base_mult) + ft_value(str[n], base);
		n++;
	}
	return (num * out);
}

int	main(void)
{
	char	str[] = "    ---123aAbcdef";
	char	*base = "0123456789abcdef";

	printf("%d\n", ft_atoi_base(str, base));
}
