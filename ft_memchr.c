/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:18:04 by thattal           #+#    #+#             */
/*   Updated: 2026/04/24 12:26:36 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	target;
	size_t			i;

	ptr = (unsigned char *)s;
	target = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == target)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("[%p | %p]\n", ft_memchr("coucou", 'u', 6), memchr("coucou", 'u', 6));
	printf("[%p | %p]\n", ft_memchr("coucou", 'z', 6), memchr("coucou", 'z', 6));
	printf("[%p | %p]\n", ft_memchr("coucou", 'c', 0), memchr("coucou", 'c', 0));
	return (0);
}
*/
