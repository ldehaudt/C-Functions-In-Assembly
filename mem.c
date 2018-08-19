/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldehaudt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:49:14 by ldehaudt          #+#    #+#             */
/*   Updated: 2018/08/13 14:49:16 by ldehaudt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void	test_memset(void)
{
	char *s;

	printf("\nMEMSET :\n");
	s = malloc(10);
	ft_bzero(s, 10);
	ft_memset(s, 'a', 4);
	ft_puts("'a' len 4 = ");
	ft_puts(s);
	free(s);
}

void	test_memcpy(void)
{
	char *st;

	printf("\nMEMCPY :\n");
	st = malloc(10);
	ft_bzero(st, 10);
	st[5] = 'f';
	ft_puts("abcde + st[5]->'f' = ");
	ft_memcpy(st, "abcde", 5);
	ft_puts(st);
	free(st);
}
