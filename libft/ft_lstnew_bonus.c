/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:18:08 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/16 13:03:53 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
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
	print_list(head);
	return (0);
}*/
