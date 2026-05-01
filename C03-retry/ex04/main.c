/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 20:10:36 by zetan             #+#    #+#             */
/*   Updated: 2026/04/16 21:17:17 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char*str, char*to_find);

int	main(void)
{
	char stack[] = "Hello ninja, have you ate yet?";	
	
	printf("%s", ft_strstr(stack, "z"));
}
