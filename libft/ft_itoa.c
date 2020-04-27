/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:09:09 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:39:55 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char		*ft_chiffre(int n)
{
	char	*str;

	if (n < 0)
	{
		if ((str = (char *)(malloc(sizeof(char) * 3))) == NULL)
			return (NULL);
		str[0] = '-';
		str[1] = -n + '0';
		str[2] = '\0';
	}
	else
	{
		if ((str = (char *)(malloc(sizeof(char) * 2))) == NULL)
			return (NULL);
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}

static char		*ft_wrnb(int cpt, unsigned int nbr, int ng)
{
	char	*str;

	if ((str = (char *)(malloc(sizeof(char) * cpt + ng + 1))) == NULL)
		return (NULL);
	str[cpt + ng] = '\0';
	if (ng == 1)
		cpt++;
	while (cpt > 0)
	{
		cpt--;
		str[cpt] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (ng == 1)
		str[cpt] = '-';
	return (str);
}

static char		*ft_nb(int n)
{
	unsigned int	nbr;
	int				ng;
	int				cpt;

	ng = 0;
	cpt = 0;
	if (n < 0)
	{
		ng = 1;
		n = -n;
	}
	nbr = n;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		cpt++;
	}
	return (ft_wrnb(cpt, (unsigned int)n, ng));
}

char			*ft_itoa(int n)
{
	if (n > -10 && n < 10)
		return (ft_chiffre(n));
	else
		return (ft_nb(n));
}
