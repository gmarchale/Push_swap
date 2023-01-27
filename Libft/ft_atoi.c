/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <gmarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:41:57 by gmarchal          #+#    #+#             */
/*   Updated: 2022/10/19 14:54:38 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	size_t	result;
	int		count;

	i = 0;
	sign = 1;
	result = 0;
	count = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i++] == 45)
			sign = -1;
	}
	while (str[i] == '0')
		i++;
	while ((str[i] >= '0' && str[i] <= '9' && ++count))
		result = result * 10 + (str[i++] - '0');
	if ((result > LLONG_MAX || count > 19) && sign == -1)
		return (0);
	else if ((result > LLONG_MAX || count > 19) && sign == 1)
		return (-1);
	return (result * sign);
}
