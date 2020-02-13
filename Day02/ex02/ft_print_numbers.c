/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 13:08:25 by ajosias           #+#    #+#             */
/*   Updated: 2020/02/12 13:10:45 by ajosias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_numbers(void)
{
    char number;

    number = '0';
    while (number <= '9')
    {
	ft_putchar(number++);
    }
}

int		main()
{
	ft_print_numbers();
	return 0;
}
