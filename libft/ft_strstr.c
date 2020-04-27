/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:18:21 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:45:31 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	cpt;
	size_t	cpt2;

	cpt = 0;
	cpt2 = 0;
	if (ft_strlen(s2) == 0)
		return ((char*)s1);
	while (s1[cpt] != '\0')
	{
		while (s2[cpt2] == s1[cpt + cpt2])
		{
			cpt2++;
			if (s2[cpt2] == '\0')
				return ((char *)s1 + cpt);
		}
		cpt++;
		cpt2 = 0;
	}
	return (NULL);
}
