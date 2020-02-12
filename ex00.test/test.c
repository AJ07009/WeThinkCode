/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 09:35:04 by ajosias           #+#    #+#             */
/*   Updated: 2020/02/12 09:45:40 by ajosias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *s)
{
	int 	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		main(void)
{
	char 	*s;
	int 	len;

	len = 0;
	s = "hello";
	len = ft_strlen(s);
	printf("%d", le&n);
}
