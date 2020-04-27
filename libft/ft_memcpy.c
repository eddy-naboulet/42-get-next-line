/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:12:36 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:41:48 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n != 0)
	{
		((unsigned char*)dest)[n - 1] = ((unsigned char*)src)[n - 1];
		n--;
	}
	return (dest);
}
