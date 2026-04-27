/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:16:09 by thattal           #+#    #+#             */
/*   Updated: 2026/04/24 12:25:07 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (0);
	if (n < 0)
	{
		n *= -1;
		count = 1;
	}
	while (n >= 1)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*result;

	nb = n;
	len = ft_intlen(nb);
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	if (nb == 0)
		result[0] = '0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		result[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (result);
}
