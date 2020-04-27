/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:12:02 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:41:30 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	cpt;
	unsigned char	*src1;
	unsigned char	*dest1;
	unsigned char	cpt2;

	cpt = 0;
	src1 = (unsigned char*)src;
	dest1 = (unsigned char*)dest;
	cpt2 = (unsigned char)c;
	while (cpt < n)
	{
		if ((*dest1++ = *src1++) == cpt2)
			return (dest1);
		cpt++;
	}
	return (NULL);
}
