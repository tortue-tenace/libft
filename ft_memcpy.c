/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:19:03 by thattal           #+#    #+#             */
/*   Updated: 2026/04/21 09:19:04 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;

	if (!dest && !src)
		return (NULL);
	pdest = (unsigned char *)dest;
	psrc = (const unsigned char *)src;
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[10];
	char	b[10];

	ft_memcpy(a, "hello", 6);
	memcpy(b, "hello", 6);
	printf("[%s | %s]\n", a, b);
	ft_memcpy(a, "abc", 0);
	memcpy(b, "abc", 0);
	printf("[%s | %s]\n", a, b);
	return (0);
}
*/
