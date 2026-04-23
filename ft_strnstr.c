/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tattal <tattal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:53:08 by thattal           #+#    #+#             */
/*   Updated: 2026/04/23 12:35:31 by tattal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len && little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("[%s | %s]\n", ft_strnstr("Hello World", "World", 11), strnstr("Hello World", "World", 11));
	printf("[%p | %p]\n", ft_strnstr("Hello World", "World", 5), strnstr("Hello World", "World", 5));
	printf("[%s | %s]\n", ft_strnstr("abc", "", 3), strnstr("abc", "", 3));
	printf("[%p | %p]\n", ft_strnstr("Hello", "xyz", 5), strnstr("Hello", "xyz", 5));
	return (0);
}
*/
