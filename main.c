/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldehaudt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:51:00 by ldehaudt          #+#    #+#             */
/*   Updated: 2018/08/13 14:51:01 by ldehaudt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void	more_main(void)
{
	test_puts();
	ft_putchar('\n');
	test_memset();
	ft_putchar('\n');
	test_memcpy();
	ft_putchar('\n');
	test_strdup();
	ft_putchar('\n');
	test_cat();
	ft_putchar('\n');
	test_putchar();
	ft_putchar('\n');
	test_putbyte();
	ft_putchar('\n');
	test_printbinary();
	ft_putchar('\n');
	test_strnew();
	ft_putchar('\n');
	test_putnbr();
}

int		main(void)
{
	test_alpha();
	ft_putchar('\n');
	test_digit();
	ft_putchar('\n');
	test_alnum();
	ft_putchar('\n');
	test_ascii();
	ft_putchar('\n');
	test_print();
	ft_putchar('\n');
	test_upper();
	ft_putchar('\n');
	test_lower();
	ft_putchar('\n');
	test_bzero();
	ft_putchar('\n');
	test_strcat();
	ft_putchar('\n');
	test_strlen();
	ft_putchar('\n');
	more_main();
}
