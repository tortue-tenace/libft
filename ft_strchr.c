/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:18:39 by thattal           #+#    #+#             */
/*   Updated: 2026/04/21 15:53:08 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*res;

	res = ft_strchr("bonjour", 'q');
	if (res)
		printf("%s\n", res);
	else
		printf("(null)\n");
	res = ft_strchr("bonjour", 'j');
	if (res)
		printf("%s\n", res);
	else
		printf("(null)\n");
	return (0);
}
*/