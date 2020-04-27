/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:14:26 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:42:46 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	cpt;
	size_t	cpt2;

	cpt = 0;
	cpt2 = 0;
	while (dest[cpt] != '\0')
		cpt++;
	while (src[cpt2] != '\0')
	{
		dest[cpt] = src[cpt2];
		cpt++;
		cpt2++;
	}
	dest[cpt] = '\0';
	return (dest);
}
