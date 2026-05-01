/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:06:16 by zetan             #+#    #+#             */
/*   Updated: 2026/04/14 17:44:29 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char*str);

int	main(void)
{
	char	n1[34] = "hElLo, nInJa+hAve yoU-aTe yet? :o";

	printf("%s", ft_strcapitalize(n1));
}
