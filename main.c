/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <heda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 08:51:37 by heda sil          #+#    #+#             */
/*   Updated: 2022/12/16 16:49:30 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	*str;

	str = "helllo";
	/*int a = printf("printf: [%c]\n", 'a');
	printf("printf return: %d\n", a);*/
	int b = printf("printf: [%3.2p]\n", NULL);
	printf("printf return: %d\n", b);
	/*int c = printf("printf: [%25p]\n", str);
	printf("printf return: %d\n", c);
	int d = printf("printf: [%25.2d]\n", 1);
	printf("printf return: %d\n", d);
	int e = printf("printf: [%25.2i]\n", 1);
	printf("printf return: %d\n", e);
	int f = printf("printf: [%25.2u]\n", 1);
	printf("printf return: %d\n", f);
	int g = printf("printf: [%25.2x]\n", 1);
	printf("printf return: %d\n", g);
	int h = printf("printf: [%25.2X]\n", 1);
	printf("printf return: %d\n", h);
	int i = printf("printf: [%%]\n");
	printf("printf return: %d\n", i);*/
	printf("---My printf---\n");	
	/*int	aa = ft_printf("printf: [%c]\n", 'a');
	printf("printf return: %d\n", aa);*/
	int bb = ft_printf("printf: [%3.2p]\n", NULL);
	printf("printf return: %d\n", bb);
	/*int cc = ft_printf("printf: [%25p]\n", str);
	printf("printf return: %d\n", cc);
	int dd = ft_printf("printf: [%25.2d]\n", 1);
	printf("printf return: %d\n", dd);
	int ee = ft_printf("printf: [%25.2i]\n", 1);
	printf("printf return: %d\n", ee);
	int ff = ft_printf("printf: [%25.2u]\n", 1);
	printf("printf return: %d\n", ff);
	int gg = ft_printf("printf: [%25.2x]\n", 1);
	printf("printf return: %d\n", gg);
	int hh = ft_printf("printf: [%25.2X]\n", 1);
	printf("printf return: %d\n", hh);
	int	ii = ft_printf("printf: [%%]\n");
	printf("printf return: %d\n", ii);*/
	return (0);
}
