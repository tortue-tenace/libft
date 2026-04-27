/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:03:34 by thattal           #+#    #+#             */
/*   Updated: 2026/04/21 15:04:32 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
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
		if (ft_tolower(c) != tolower(c))
			printf("DIFF at %d\n", c);
	printf("done\n");
	return (0);
}
*/
