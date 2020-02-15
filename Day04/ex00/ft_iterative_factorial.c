/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:59:15 by ajosias           #+#    #+#             */
/*   Updated: 2020/02/15 15:36:05 by ajosias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	if ( nb <= 0)
	{
		int i = (nb - 1);
		int nb1 = nb;
		while ( i >= 1)
		{
			nb1 = nb1 * i;
			i--;
		}
		return (nb1);
	}
	return (0);
}
