/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:37:10 by obelouch          #+#    #+#             */
/*   Updated: 2018/10/10 04:54:08 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			(*f)(&s[i]);
			i++;
		}
	}
}
