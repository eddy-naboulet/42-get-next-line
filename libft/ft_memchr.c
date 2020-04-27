/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:12:19 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:41:37 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	cpt;

	cpt = 0;
	while (cpt != n && ((unsigned char*)s)[cpt] != (unsigned char)c)
		cpt++;
	if (cpt == n)
		return (NULL);
	return ((unsigned char*)s + cpt);
}
