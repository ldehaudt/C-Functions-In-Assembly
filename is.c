/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldehaudt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:52:02 by ldehaudt          #+#    #+#             */
/*   Updated: 2018/08/13 14:52:04 by ldehaudt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void	test_alpha(void)
{
	printf("ALPHA : \n");
	printf("a = %d\n", ft_isalpha('a'));
	printf("1 = %d\n", ft_isalpha('1'));
	printf("4 = %d\n", ft_isalpha('4'));
	printf("& = %d\n", ft_isalpha('&'));
}

void	test_digit(void)
{
	printf("DIGIT : \n");
	printf("a = %d\n", ft_isdigit('a'));
	printf("1 = %d\n", ft_isdigit('1'));
	printf("4 = %d\n", ft_isdigit('4'));
	printf("& = %d\n", ft_isdigit('&'));
}

void	test_alnum(void)
{
	printf("ALNUM : \n");
	printf("a = %d\n", ft_isalnum('a'));
	printf("1 = %d\n", ft_isalnum('1'));
	printf("4 = %d\n", ft_isalnum('4'));
	printf("& = %d\n", ft_isalnum('&'));
}

void	test_print(void)
{
	printf("Printable : \n");
	printf("a = %d\n", ft_isprint('a'));
	printf("1 = %d\n", ft_isprint('1'));
	printf("(4) = %d\n", ft_isprint(4));
	printf("& = %d\n", ft_isprint('&'));
}

void	test_ascii(void)
{
	printf("ASCII : \n");
	printf("a = %d\n", ft_isascii('a'));
	printf("1 = %d\n", ft_isascii('1'));
	printf("(4) = %d\n", ft_isascii(4));
	printf("& = %d\n", ft_isascii('&'));
	printf("(178) = %d\n", ft_isascii(178));
	printf("(-1) = %d\n", ft_isascii(-1));
}
