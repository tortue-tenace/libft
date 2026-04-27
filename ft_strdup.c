/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:32:37 by thattal           #+#    #+#             */
/*   Updated: 2026/04/24 12:25:28 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*result;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (source[len])
		len++;
	result = malloc(sizeof(char) * len + 1);
	if (result == NULL)
		return (NULL);
	while (source[i])
	{
		result[i] = source[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
