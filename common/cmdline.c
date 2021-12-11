/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmdline.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keshav <keshav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:32:06 by keshav            #+#    #+#             */
/*   Updated: 2021/12/11 15:32:16 by keshav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fractol.h"

int	ft_cmd_fractal(char *str)
{
	if (!ft_strncmp(str, "-mandel", 8))
		return (1);
	else if (!ft_strncmp(str, "-julia", 7))
		return (2);
	else if (!ft_strncmp(str, "-ship", 6))
		return (3);
	else
		return (0);
}

int	ft_cmd_resolution(t_data *data, char *str)
{
	int	val;

	val = 0;
	if (!ft_strncmp(str, "-high", 6))
		val = 1;
	else if (!ft_strncmp(str, "-medium", 8))
		val = 2;
	else if (!ft_strncmp(str, "-low", 5))
		val = 3;
	if (val == 1)
		ft_init_window(data, 1200, 800, 1000);
	else if (val == 2)
		ft_init_window(data, 900, 600, 500);
	else if (val == 3)
		ft_init_window(data, 450, 300, 255);
	else
		return (1);
	return (0);
}
