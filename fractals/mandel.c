/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keshav <keshav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:56:00 by keshav            #+#    #+#             */
/*   Updated: 2021/12/11 15:56:17 by keshav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fractol.h"

static
void	ft_iterate(t_data *data, int x, int y)
{
	t_numbr	old;
	t_numbr	new;
	t_numbr	poi;
	int		i;

	i = 0;
	new.real = 0;
	new.img = 0;
	poi.real = ft_getreal(x, data);
	poi.img = ft_getimg(y, data);
	while (i < data->i)
	{
		old.real = new.real;
		old.img = new.img;
		new.real = old.real * old.real - old.img * old.img + poi.real;
		new.img = 2 * old.real * old.img + poi.img;
		if (new.real * new.real + new.img * new.img > 4)
			break ;
		i++;
	}
	ft_draw_pixel(data, x, y, ft_calc_color(new, i, data));
}

int	mandelbrot(t_data *data)
{
	int	x;
	int	y;	

	y = 0;
	while (y < data->y)
	{
		x = 0;
		while (x < data->x)
		{
			ft_iterate(data, x, y);
			x++;
		}
		y++;
	}
	return (0);
}
