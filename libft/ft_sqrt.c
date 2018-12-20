/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 05:47:26 by obelouch          #+#    #+#             */
/*   Updated: 2018/10/10 06:38:17 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;
	int		n;

	if (nb == 0 || nb == 1)
		return (nb);
	i = 1;
	n = 1;
	while (n < nb)
	{
		i++;
		n = i * i;
	}
	if (n == nb)
		return (i);
	else
		return (0);
}