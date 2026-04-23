/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tattal <tattal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:01:20 by tattal            #+#    #+#             */
/*   Updated: 2026/04/22 17:36:18 by tattal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

/*static void	run_test(const char *label, char const *s, unsigned int start,
		size_t len)
{
	char	*res;

	printf("── %s\n", label);
	printf("   s     = \"%s\"\n", s ? s : "(null)");
	printf("   start = %u\n", start);
	printf("   len   = %zu\n", len);
	res = ft_substr(s, start, len);
	if (res == NULL)
		printf("   -> NULL\n\n");
	else
	{
		printf("   -> \"%s\" (len = %zu)\n\n", res, strlen(res));
		free(res);
	}
}*/

/*int	main(void)
{
	printf("===== Tests ft_substr =====\n\n");

	/
	run_test("Cas simple", "Hello, World!", 7, 5);
	run_test("Debut de chaine", "42 Paris", 0, 2);
	run_test("Fin de chaine", "42 Paris", 3, 5);

	
	run_test("len = 0", "Hello", 0, 0);
	run_test("len plus grand que la chaine", "abc", 0, 42);
	run_test("len depasse la fin depuis start", "abcdef", 3, 100);

	
	run_test("start = strlen(s)", "abcdef", 6, 5);
	run_test("start > strlen(s)", "abcdef", 50, 5);

	
	run_test("Chaine vide", "", 0, 5);
	run_test("Un seul caractere", "X", 0, 1);

	
	run_test("Extraction du milieu", "tripouille", 1, 1);
	run_test("Extraction 'tri'", "tripouille", 0, 3);

	return (0);
}*/

