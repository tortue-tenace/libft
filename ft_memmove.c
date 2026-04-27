/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:21:46 by thattal           #+#    #+#             */
/*   Updated: 2026/04/21 09:48:18 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s || len == 0)
		return (dst);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[20] = "abcdefgh";
	char	b[20] = "abcdefgh";

	ft_memmove(a + 2, a, 5);
	memmove(b + 2, b, 5);
	printf("[%s | %s]\n", a, b);
	ft_memmove(a, a + 2, 5);
	memmove(b, b + 2, 5);
	printf("[%s | %s]\n", a, b);
	return (0);
}
*/
