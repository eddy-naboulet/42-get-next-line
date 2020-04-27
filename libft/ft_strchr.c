/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:14:38 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:42:52 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	cpt;

	cpt = 0;
	while (s[cpt] != '\0' && s[cpt] != c)
		cpt++;
	if (s[cpt] == '\0' && c != '\0')
		return (NULL);
	return ((char *)(s + cpt));
}
