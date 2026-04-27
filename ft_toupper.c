/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:55:17 by thattal           #+#    #+#             */
/*   Updated: 2026/04/21 15:02:00 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	c;

	c = -1;
	while (++c < 256)
		if (ft_toupper(c) != toupper(c))
			printf("DIFF at %d\n", c);
	printf("done\n");
	return (0);
}
*/
