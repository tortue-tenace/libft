/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:19:06 by thattal           #+#    #+#             */
/*   Updated: 2026/04/21 09:19:07 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
	return ;
}

/*
#include <stdio.h>
#include <strings.h>
int	main(void)
{
	char	a[6] = "ABCDE";
	char	b[6] = "ABCDE";
	int		i;

	ft_bzero(a + 1, 3);
	bzero(b + 1, 3);
	i = 0;
	while (i < 6)
	{
		printf("%d/%d ", a[i], b[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
