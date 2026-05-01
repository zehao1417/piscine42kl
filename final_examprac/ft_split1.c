/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    *ft_split(charstr);
*/

#include <stdlib.h>

int	check_delimiter(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	n;
	int	word_count;
	int	in_word;

	word_count = 0;
	in_word = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (!check_delimiter(str[n]) && in_word == 0)
		{
			in_word = 1;
			word_count++;
		}
		if (check_delimiter(str[n]))
			in_word = 0;
		n++;
	}
	return (word_count);
}

int	word_len(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0' && !check_delimiter(str[n]))
		n++;
	return (n);
}

char	*copy_word(char *str, int len)
{
	int	n;
	char	*word;

	n = 0;
	word = malloc(sizeof(char) * (len + 1));
	while (str[n] != '\0' && !check_delimiter(str[n]))
	{
		word[n] = str[n];
		n++;
	}
	word[n] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int	n;
	int	i;
	char	**string;

	n= 0;
	i = 0;
	string = malloc(sizeof(char *) * (count_words(str) + 1));
	if (!string)
		return (NULL);
	while (str[n] != '\0')
	{
		if (!check_delimiter(str[n]))
		{
			string[i] = copy_word(&str[n], word_len(&str[n]));
			n += word_len(&str[n]);
			i++;
		}
		else
			n++;
	}
	string[i] = NULL;
	return (string);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello	monkey \v good \n morning!";
	char	**res = ft_split(str);
	int	n;

	n = 0;
	while (res[n])
	{
		printf("%s\n", res[n]);
		n++;
	}
}
