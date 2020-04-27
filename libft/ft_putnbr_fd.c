/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:13:59 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:25:33 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	cpt;
	char			str;

	cpt = 0;
	str = '0';
	if (n < 0)
	{
		cpt = -n;
		write(fd, "-", 1);
	}
	else
		cpt = n;
	if (cpt <= 9)
	{
		str += cpt;
		write(fd, &str, 1);
	}
	else
	{
		ft_putnbr_fd(cpt / 10, fd);
		ft_putnbr_fd(cpt % 10, fd);
	}
}
