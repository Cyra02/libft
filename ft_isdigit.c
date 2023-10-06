/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:01:55 by ciestrad          #+#    #+#             */
/*   Updated: 2023/09/18 13:31:28 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf ("%d\n", ft_isdigit('a'));
	printf ("%d\n", ft_isdigit(1));
	return (0);
}*/
