/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:43:03 by thattal           #+#    #+#             */
/*   Updated: 2026/04/21 15:02:30 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[5];
	char	b[5];
	size_t	r1;
	size_t	r2;

	r1 = ft_strlcpy(a, "Hello", sizeof(a));
	r2 = strlcpy(b, "Hello", sizeof(b));
	printf("[%s|%zu | %s|%zu]\n", a, r1, b, r2);
	return (0);
}
*/