/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:15:48 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:43:48 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	cpt;

	cpt = 0;
	if (s && f)
	{
		while (s[cpt] != '\0')
		{
			(*f)(cpt, s + cpt);
			cpt++;
		}
	}
}
