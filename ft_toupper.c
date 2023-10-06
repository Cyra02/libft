/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_touppper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:28:33 by ciestrad          #+#    #+#             */
/*   Updated: 2023/09/18 11:04:16 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_toupper(int a)
{
	int	num;

	num = 0;
	if (a >= 97 && a <= 122)
	{	
		num = a - 32;
		return (num);
	}
	return (a);
}

/*int main(void)
{
	printf("%c", ft_toupper('a'));
	return (0);
}*/
