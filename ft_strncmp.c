/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 20:11:38 by tattal            #+#    #+#             */
/*   Updated: 2026/04/22 11:18:20 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("me:  %d\n", ft_strncmp("foufou", "fifou", 3));
	printf("sys: %d\n", strncmp("foufou", "fifou", 3));
	printf("me:  %d\n", ft_strncmp("abc", "abc", 10));
	printf("sys: %d\n", strncmp("abc", "abc", 10));
	printf("me:  %d\n", ft_strncmp("abc", "abcd", 10));
	printf("sys: %d\n", strncmp("abc", "abcd", 10));
	printf("me:  %d\n", ft_strncmp("abc", "abc", 0));
	printf("sys: %d\n", strncmp("abc", "abc", 0));
	return (0);
}*/
