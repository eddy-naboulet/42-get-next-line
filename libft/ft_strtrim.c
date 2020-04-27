/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:18:39 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:45:44 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	start;
	size_t			len;

	if (s == NULL)
		return (NULL);
	start = 0;
	while ((s[start] == ' ' || s[start] == '\t' || s[start] == '\n') &&
			s[start])
		start++;
	len = ft_strlen(s) - 1;
	while (len > 0 && (s[len] == ' ' || s[len] == '\t' || s[len] == '\n'))
		len--;
	if (len == 0)
		return ("");
	str = ft_strsub(s, start, len - start + 1);
	return (str);
}
