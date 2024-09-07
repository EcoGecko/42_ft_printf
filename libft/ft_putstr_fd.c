/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:03:18 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/14 23:25:27 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, &*s, 1);
			s++;
		}
	}
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	ft_putstr_fd(argv[1], 1);
}*/
