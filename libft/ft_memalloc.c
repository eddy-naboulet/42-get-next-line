/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:11:53 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:41:22 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*cpt;

	if ((cpt = (void*)malloc(sizeof(void) * size)) == NULL)
		return (NULL);
	if (cpt == NULL)
		return (NULL);
	ft_bzero(cpt, size);
	return (cpt);
}
