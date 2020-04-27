/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:12:55 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:42:10 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	cpt;

	cpt = 0;
	if (dest > src)
		ft_memcpy(dest, src, n);
	else
		while (cpt != n)
		{
			((unsigned char*)dest)[cpt] = ((unsigned char*)src)[cpt];
			cpt++;
		}
	return (dest);
}
