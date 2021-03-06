/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipretori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 10:23:35 by ipretori          #+#    #+#             */
/*   Updated: 2020/02/15 17:40:44 by ajosias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int a;
	int b;

	a = 2;
	b = nb;
	while (a < b)
	{
		if (nb % a == 0)
			return (0);
		else
			a++;
	}
	return (1);
}
