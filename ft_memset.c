/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:18:58 by thattal           #+#    #+#             */
/*   Updated: 2026/04/21 09:27:14 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[10] = "Hello";
	char	b[10] = "Hello";

	ft_memset(a, 'X', 3);
	memset(b, 'X', 3);
	printf("[%s | %s]\n", a, b);
	return (0);
}
*/