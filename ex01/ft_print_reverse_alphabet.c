/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 11:12:57 by ajosias           #+#    #+#             */
/*   Updated: 2020/02/12 11:34:38 by ajosias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void    ft_print_alphabet(void)
{
    char ch;

    ch = 'z';
    while (ch >= 'a')
    {
        ft_putchar(ch);
        ch--;
    }
}

int     main()
{
    ft_print_alphabet();
    return (0);
}
