/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tattal <tattal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:05:16 by tattal            #+#    #+#             */
/*   Updated: 2026/04/21 20:10:28 by tattal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("[%s | %s]\n", ft_strrchr("saucisse", 's'), strrchr("saucisse", 's'));
	printf("[%p | %p]\n", ft_strrchr("saucisse", 'z'), strrchr("saucisse", 'z'));
	printf("[%s | %s]\n", ft_strrchr("hello", '\0'), strrchr("hello", '\0'));
	return (0);
}
*/