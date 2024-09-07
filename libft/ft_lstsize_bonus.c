/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:17:35 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/16 14:17:35 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	length;

	length = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		length++;
	}
	return (length);
}

/*#include <stdio.h>

void	print_list(t_list *head)
{
	t_list	*temp;

	temp = head;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
}

int	main(void)
{
	t_list	*n1;
	t_list	*head;

	n1 = ft_lstnew(ft_strdup("str node 1"));
	head = n1;
	n1 = ft_lstnew(ft_strdup("str node 2"));
	n1->next = head;
	head = n1;
	n1 = ft_lstnew(ft_strdup("str node 3"));
	n1->next = head;
	head = n1;
	n1 = ft_lstnew(ft_strdup("str node 4"));
	n1->next = head;
	head = n1;
	n1 = ft_lstnew(ft_strdup("str node 5"));
	n1->next = head;
	head = n1;
	print_list(head);
	printf("%d\n", ft_lstsize(n1));
	return (0);
}*/
