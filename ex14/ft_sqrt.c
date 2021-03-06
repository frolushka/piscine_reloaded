/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbednar <sbednar@student.fr.42>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:07:48 by sbednar           #+#    #+#             */
/*   Updated: 2018/11/20 12:05:51 by sbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	if (nb <= 0)
		return (0);
	res = 1;
	while (res * res < nb)
		res++;
	if (res * res == nb)
		return (res);
	return (0);
}
