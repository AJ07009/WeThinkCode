/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipretori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 00:47:57 by ipretori          #+#    #+#             */
/*   Updated: 2020/02/15 17:27:59 by ajosias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int pow;

	pow = nb;
	power--;
	if (power > 0)
	{
		while (power > 0)
		{
			pow *= nb;
			power--;
		}
		return (pow);
	}
	else
	{
		return (1);
	}
}
