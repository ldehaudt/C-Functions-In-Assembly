/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oddballs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldehaudt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:47:15 by ldehaudt          #+#    #+#             */
/*   Updated: 2018/08/13 14:47:16 by ldehaudt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void	test_upper(void)
{
	printf("TO Upper : \n");
	printf("a = %c\n", ft_toupper('a'));
	printf("z = %c\n", ft_toupper('z'));
	printf("A = %c\n", ft_toupper('A'));
	printf("Z = %c\n", ft_toupper('Z'));
	printf("4 = %c\n", ft_toupper('4'));
}

void	test_lower(void)
{
	printf("TO lower : \n");
	printf("a = %c\n", ft_tolower('a'));
	printf("z = %c\n", ft_tolower('z'));
	printf("A = %c\n", ft_tolower('A'));
	printf("Z = %c\n", ft_tolower('Z'));
	printf("4 = %c\n", ft_tolower('4'));
}

void	test_bzero(void)
{
	char *str;

	printf("BZERO : \n");
	str = malloc(10);
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = 'd';
	str[4] = 'e';
	str[5] = 'f';
	str[6] = '\0';
	ft_bzero(str + 1, 2);
	printf("%s\n", str);
	printf("%s\n", str + 3);
	free(str);
}

void	test_cat(void)
{
	int fd;
	ft_cat(0);
	printf("\nCAT : \n");
	fd = open("test", O_RDONLY);
	ft_cat(fd);
}
