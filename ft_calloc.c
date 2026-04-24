/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thattal <thattal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:00:25 by thattal           #+#    #+#             */
/*   Updated: 2026/04/24 12:25:38 by thattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*store;
	char	*ptr;
	size_t	i;

	i = 0;
	store = malloc(nmemb * size);
	ptr = (char *)store;
	if (store == NULL)
		return (NULL);
	while (ptr[i])
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

/*int main()
{
    // 1. Cas normal : tableau d'entiers
    int *tab = ft_calloc(5, sizeof(int));
    if (!tab)
        return (printf("Échec allocation\n"), 1);
    printf("=== Tableau d'entiers ===\n");
    for (int i = 0; i < 5; i++)
        printf("tab[%d] = %d\n", i, tab[i]); // doit afficher 0
    free(tab);

    // 2. Cas normal : tableau de chars
    char *str = ft_calloc(6, sizeof(char));
    if (!str)
        return (printf("Échec allocation\n"), 1);
    printf("\n=== Tableau de chars ===\n");
    for (int i = 0; i < 6; i++)
        printf("str[%d] = %d\n", i, str[i]); // doit afficher 0
    free(str);

    // 3. Cas limite : nmemb = 0
    void *zero = ft_calloc(0, sizeof(int));
    printf("\n=== nmemb = 0 ===\n");
    printf("retour : %p\n", zero); // NULL ou pointeur selon implémentation
    free(zero);

    // 4. Cas limite : size = 0
    void *zero2 = ft_calloc(5, 0);
    printf("\n=== size = 0 ===\n");
    printf("retour : %p\n", zero2);
    free(zero2);

    return 0;
}*/