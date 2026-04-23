/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:47:41 by thattal           #+#    #+#             */
/*   Updated: 2026/04/20 16:49:22 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("[%zu | %zu]\n", ft_strlen("Hello"), strlen("Hello"));
	printf("[%zu | %zu]\n", ft_strlen(""), strlen(""));
	printf("[%zu | %zu]\n", ft_strlen("a"), strlen("a"));
	return (0);
}
*/
