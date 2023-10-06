/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:00:08 by ciestrad          #+#    #+#             */
/*   Updated: 2023/10/03 11:11:33 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
	printf("%d", ft_lstsize(node));
	return (0);
}*/
