/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:16:04 by enaboule          #+#    #+#             */
/*   Updated: 2016/03/22 14:31:32 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	cpt;
	size_t	len;
	size_t	cpt2;

	if (ft_strlen(dest) > n)
		len = n;
	else
		len = ft_strlen(dest);
	cpt = 0;
	cpt2 = 0;
	while (dest[cpt])
		cpt++;
	if ((n - ft_strlen(dest) - 1) > 0)
	{
		while (src[cpt2] && len < n - 1)
		{
			dest[cpt] = src[cpt2];
			cpt2++;
			cpt++;
			n--;
		}
		dest[cpt] = '\0';
	}
	return (len + ft_strlen(src));
}
