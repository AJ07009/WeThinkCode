/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 12:46:52 by ajosias           #+#    #+#             */
/*   Updated: 2020/02/12 14:36:07 by ajosias          ###   ########.fr       */
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

    ch = 'a';
    while (ch <= 'z')
    {
        ft_putchar(ch);
        ch++;
    }
}

int     main()
{
    ft_print_alphabet();
    return (0);
}
