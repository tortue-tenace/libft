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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

/*int main()
{
    // 1. Cas normal
    char *s1 = ft_strdup("hello");
    printf("=== Cas normal ===\n");
    printf("original : hello\n");
    printf("copie    : %s\n", s1);
   printf("meme adresse ? %d\n", strcmp(s1, "hello") == 0);
    free(s1);

    // 2. Chaine vide
    char *s2 = ft_strdup("");
    printf("\n=== Chaine vide ===\n");
    printf("longueur : %ld\n", strlen(s2)); // doit afficher 0
    printf("copie    : \"%s\"\n", s2);
    free(s2);

    // 3. Chaine avec espaces et caracteres speciaux
    char *s3 = ft_strdup("hello world !@#");
    printf("\n=== Caracteres speciaux ===\n");
    printf("original : hello world !@#\n");
    printf("copie    : %s\n", s3);
    free(s3);


    char original[] = "bonjour";
    char *s4 = ft_strdup(original);
    printf("\n=== Independance des copies ===\n");
    s4[0] = 'B';
    printf("original : %s\n", original); // doit afficher bonjour
    printf("copie    : %s\n", s4);       // doit afficher Bonjour
    free(s4);

    // 5. Chaine d'un seul caractere
    char *s5 = ft_strdup("a");
    printf("\n=== Un seul caractere ===\n");
    printf("copie : %s\n", s5); // doit afficher a
    free(s5);

    return 0;
}*/
