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

/*int main(void){
	char	dst[8];
	size_t real;
	size_t me;

	me = ft_strlcpy(dst, "pate", sizeof(dst));
	real = strlcpy(dst, "lklklkl", sizeof(dst));
	printf("%zu\n", me);
	printf("%zu\n", real);
	return (0);
}*/