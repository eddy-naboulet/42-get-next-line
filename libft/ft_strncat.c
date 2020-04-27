/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:16:43 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:44:17 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	cpt;
	size_t	cpt2;

	cpt = 0;
	cpt2 = 0;
	while (dest[cpt] != '\0')
		cpt++;
	while (src[cpt2] != '\0' && cpt2 < n)
	{
		dest[cpt] = src[cpt2];
		cpt++;
		cpt2++;
	}
	dest[cpt] = '\0';
	return (dest);
}
