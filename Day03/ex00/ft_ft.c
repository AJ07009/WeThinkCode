/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 09:39:23 by ajosias           #+#    #+#             */
/*   Updated: 2020/02/13 11:13:44 by ajosias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>


 void ft_ft(int *nbr)
{
	*nbr=42;
}

 int main()
{ 
	int i;
	int *nbr;
	nbr= &i;

	ft_ft(nbr);
	printf("%d", *nbr);
}

