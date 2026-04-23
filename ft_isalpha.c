/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:58:39 by thattal           #+#    #+#             */
/*   Updated: 2026/04/20 13:52:12 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	c;

	c = -1;
	while (++c < 256)
		if (!ft_isalpha(c) != !isalpha(c))
			printf("DIFF at %d\n", c);
	printf("done\n");
	return (0);
}
*/
