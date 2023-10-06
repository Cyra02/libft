/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:47:33 by ciestrad          #+#    #+#             */
/*   Updated: 2023/10/03 12:05:10 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}

/*int	main(void)
{
	t_list	**dalist;
	t_list	*node;

	node = 0;
	dalist = &node;
	ft_lstadd_front(dalist, ft_lstnew("perro"));
	ft_lstadd_front(dalist, ft_lstnew("gato"));
	ft_lstadd_front(dalist, ft_lstnew("conejo"));
	ft_lstadd_front(dalist, ft_lstnew("pato"));
	node = *dalist;
	printf("%s", (char *)(ft_lstlast(node))-> content);
	return (0);
}*/
