/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:35:56 by thattal           #+#    #+#             */
/*   Updated: 2026/04/21 14:53:20 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;
	size_t	dst_len;

	dst_len = 0;
	while (dst[dst_len])
		dst_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (i < size - dst_len - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*int main(void){
	char	dst[] = "Hello";
	size_t real;
	size_t me;

	me = ft_strlcat(dst, "", sizeof(dst));
	real = strlcat(dst, "", sizeof(dst));
	printf("%zu\n", me);
	printf("%zu\n", real);
	return (0);
}*/