/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:35:50 by thattal           #+#    #+#             */
/*   Updated: 2026/04/24 12:26:47 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr;
	const unsigned char	*ptr2;
	size_t				i;

	ptr = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ptr[i] != ptr2[i])
			return ((int)ptr[i] - (int)ptr2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("[%d | %d]\n", ft_memcmp("abc", "abd", 3), memcmp("abc", "abd", 3));
	printf("[%d | %d]\n", ft_memcmp("abc", "abc", 3), memcmp("abc", "abc", 3));
	printf("[%d | %d]\n", ft_memcmp("abc", "abd", 0), memcmp("abc", "abd", 0));
	return (0);
}
*/