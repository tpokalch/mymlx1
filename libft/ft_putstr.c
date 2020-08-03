/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 20:31:51 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/20 20:48:03 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return ;
	while (*(s + i) != '\0')
	{
		write(1, s + i, 1);
		i++;
	}
}
