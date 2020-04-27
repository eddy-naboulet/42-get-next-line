/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 18:55:34 by enaboule          #+#    #+#             */
/*   Updated: 2016/04/05 15:13:24 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	if ((str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)
						+ 1))) == NULL)
		return (NULL);
	str = ft_strcpy(str, s1);
	ft_strcpy(str + ft_strlen(s1), s2);
	free(s1);
	return (str);
}

int		ft_g_error(t_gnl **gnl, char **line)
{
	char	*tmp;

	if ((*gnl)->gnl != NULL && ft_strlen((*gnl)->gnl) != 0)
	{
		tmp = *line;
		*line = ft_strdup((*gnl)->gnl);
		free((*gnl)->gnl);
		free(tmp);
		(*gnl)->gnl = NULL;
		return (1);
	}
	return (0);
}

void	malloc_gnl(t_gnl **gnl, char **line)
{
	*line = ft_memalloc(1);
	if (!*gnl)
	{
		*gnl = ft_memalloc(sizeof(t_gnl));
		(*gnl)->gnl = NULL;
	}
}

int		get_next_line(const int fd, char **line)
{
	static t_gnl	*gnl = NULL;
	char			buf[BUFF_SIZE + 1];
	int				ret;

	if (fd < 0 || line == NULL)
		return (-1);
	malloc_gnl(&gnl, line);
	while (gnl->gnl == NULL || ft_strchr(gnl->gnl, '\n') == NULL)
	{
		if ((ret = read(fd, buf, BUFF_SIZE)) == -1)
			return (-1);
		if (ret == 0)
			return (ft_g_error(&gnl, line));
		buf[ret] = '\0';
		if (gnl->gnl == NULL)
			gnl->gnl = ft_strdup(buf);
		else
			gnl->gnl = ft_strjoin_gnl(gnl->gnl, buf);
	}
	gnl->tmp = *line;
	*line = ft_strsub(gnl->gnl, 0, ft_strchr(gnl->gnl, '\n') - gnl->gnl);
	free(gnl->tmp);
	gnl->gnl = ft_strsub(gnl->gnl, ft_strchr(gnl->gnl, '\n') - gnl->gnl + 1,
			ft_strlen(ft_strchr(gnl->gnl, '\n') + 1));
	return (1);
}
