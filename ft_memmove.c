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

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	buf1[] = "Hello World";
	char	buf2[] = "aaaaaaaaaaaaaabbbbbbbbbbbbb";
	char	dest[50];

	printf("%s\n", (char *)ft_memmove(dest, buf1, 0));
	printf("%s\n", (char *)ft_memmove(buf2, buf1, 5));
	printf("%s\n", (char *)memmove(dest, buf1, 0));
	printf("%s\n", (char *)memmove(buf2, buf1, 5));
	return (0);
}*/