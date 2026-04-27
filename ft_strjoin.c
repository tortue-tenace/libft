/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tattal <tattal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:10:32 by tattal            #+#    #+#             */
/*   Updated: 2026/04/23 11:19:26 by tattal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstring;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	nstring = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!nstring)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		nstring[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		nstring[i + j] = s2[j];
		j++;
	}
	nstring[i + j] = '\0';
	return (nstring);
}
