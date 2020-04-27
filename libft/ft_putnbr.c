/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:13:46 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:42:36 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	cpt;
	char			str;

	cpt = 0;
	str = '0';
	if (n < 0)
	{
		cpt = -n;
		write(1, "-", 1);
	}
	else
		cpt = n;
	if (cpt <= 9)
	{
		str += cpt;
		write(1, &str, 1);
	}
	else
	{
		ft_putnbr(cpt / 10);
		ft_putnbr(cpt % 10);
	}
}
