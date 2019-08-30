/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanssen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 09:09:29 by sjanssen          #+#    #+#             */
/*   Updated: 2019/08/14 23:36:44 by sjanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= '0' && *str <= '9')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
