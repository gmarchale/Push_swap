/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <gmarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:41:57 by gmarchal          #+#    #+#             */
/*   Updated: 2023/03/06 22:02:33 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_create_out(int i, const char *str, int sign);

void	errors(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_FAILURE);
}

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
	if (result == 2147483648 && sign == -1)
		return (result * sign);
	if (result > INT_MAX)
		errors();
	return (result * sign);
}

long	ft_atol(const char *str)
{
	int		sign;
	long	base;
	int		i;

	i = 0;
	base = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (ft_isdigit(str[i]) == 1)
	{
		base = ft_create_out(i, str, sign);
		return (base * sign);
	}
	else
		return (0);
}

static long	ft_create_out(int i, const char *str, int sign)
{
	unsigned long int	out;

	out = 0;
	while (ft_isdigit(str[i]) == 1)
	{
		out = (out * 10) + (str[i] - 48);
		if (out > INT_MAX && sign == 1)
			return ((long)INT_MAX + 2);
		else if ((out > (long)INT_MIN * -1) && (sign == -1))
			return ((long)INT_MAX + 2);
		i++;
	}
	return ((long)out);
}
