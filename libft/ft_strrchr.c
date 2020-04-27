/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:18:06 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:45:15 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		cpt;
	char	*ptr;

	cpt = ft_strlen(s);
	ptr = (char*)s;
	if (s == NULL)
		return (NULL);
	while (cpt >= 0)
	{
		if (ptr[cpt] == (char)c)
			return (&ptr[cpt]);
		cpt--;
	}
	return (NULL);
}
