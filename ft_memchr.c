/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:18:04 by thattal           #+#    #+#             */
/*   Updated: 2026/04/22 11:34:29 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

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

/*#include <stdio.h>
int	main(void){
	void	*result;
	void	*result2;
	
	result2 = ft_memchr("coucou", 'c', 4);
	result = ft_memchr("coucou", 'a', 4);
	printf("%p\n", result);
	printf("%c\n", *(char *)result2);
	return (0);
}*/