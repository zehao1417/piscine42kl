/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 21:01:30 by zetan             #+#    #+#             */
/*   Updated: 2026/04/28 15:38:19 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_delimiter(char c, char *charset)
{
	int	n;

	n = 0;
	while (charset[n] != '\0')
	{
		if (c == charset[n])
			return (1);
		n++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	n;
	int	in_word;
	int	word_count;

	word_count = 0;
	in_word = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (!(check_delimiter(str[n], charset)) && in_word == 0)
		{
			in_word = 1;
			word_count++;
		}
		if (check_delimiter(str[n], charset))
			in_word = 0;
		n++;
	}
	return (word_count);
}

int	word_length(char *str, char *charset)
{
	int	len;

	len = 0;
	while (!check_delimiter(str[len], charset) && str[len] != '\0')
		len++;
	return (len);
}

char	*copy_word(char *str, int len)
{
	int		n;
	char	*word;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	n = 0;
	while (n < len)
	{
		word[n] = str[n];
		n++;
	}
	word[n] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**string;
	int		n;
	int		i;

	n = 0;
	i = 0;
	string = malloc(sizeof(char *) * (count_word(str, charset) + 1));
	if (!string)
		return (NULL);
	while (str[n] != '\0')
	{
		if (!check_delimiter(str[n], charset))
		{
			string[i] = copy_word(&str[n], word_length(&str[n], charset));
			n += word_length(&str[n], charset);
			i++;
		}
		else
			n++;
	}
	string[i] = NULL;
	return (string);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "hey~/ monkey @good*morning ~";
	char	*charset = ".*@! ~";
	char	**string = ft_split(str, charset);
	int	i = 0;

	printf("Before: %s\nAfter: ", str);
	while (string[i])
	{
		printf("%s ", string[i]);
		free(string[i]);
		i++;
	}
	free(string);
}
*/
