/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooth <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:10:24 by hbooth            #+#    #+#             */
/*   Updated: 2020/02/12 16:39:06 by hbooth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 
int ft_putchar(char c)
{
	write(1,&c, 1);
	return (0);
}

void ft_is_negative(int n)
{
	if (n>= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}

int	main()
{
	ft_is_negative(-70);
	return (0);
}
