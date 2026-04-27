/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:00:00 by thattal           #+#    #+#             */
/*   Updated: 2026/04/22 10:00:00 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] && is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("[%d | %d]\n", ft_atoi("  -42abc"), atoi("  -42abc"));
	printf("[%d | %d]\n", ft_atoi("+2147483647"), atoi("+2147483647"));
	printf("[%d | %d]\n", ft_atoi("\t\n\v  7"), atoi("\t\n\v  7"));
	printf("[%d | %d]\n", ft_atoi(""), atoi(""));
	printf("[%d | %d]\n", ft_atoi("--5"), atoi("--5"));
	return (0);
}
*/
