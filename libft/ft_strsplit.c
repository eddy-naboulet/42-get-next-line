/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:18:15 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:45:23 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_nbwords(char const *s, char c)
{
	int	cpt;
	int	nb_words;

	cpt = 0;
	nb_words = 0;
	while (s[cpt] == c)
		cpt++;
	while (s[cpt])
	{
		if (s[cpt] == c)
		{
			while (s[cpt] == c)
				cpt++;
			nb_words++;
		}
		else
		{
			while (s[cpt] != c && s[cpt])
				cpt++;
		}
	}
	if (s[cpt - 1] != c)
		nb_words++;
	return (nb_words);
}

static char		**ft_nb_size(char **array, int nbr, char const *s, char c)
{
	int	cpt;
	int	i;
	int	j;

	cpt = 0;
	i = 0;
	while (cpt < nbr)
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		j = i;
		while (s[j] != c)
			j++;
		array[cpt] = ft_strsub(s, i, (j - i));
		cpt++;
		i = j;
	}
	array[cpt] = NULL;
	return (array);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		nbr;

	if (s == NULL)
		return (NULL);
	nbr = ft_nbwords(s, c);
	if ((array = (char **)malloc(sizeof(char *) * (nbr + 1))) == NULL)
		return (NULL);
	array = ft_nb_size(array, nbr, s, c);
	return (array);
}
