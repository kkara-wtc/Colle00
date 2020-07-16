/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:16:43 by kkara             #+#    #+#             */
/*   Updated: 2020/07/16 11:17:51 by kkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	horizontal(int x, char left, char centre, char right)
{
	if ( x >= 1)
	{
		ft_putchar(left);
		while (x >= 2)
		{
			ft_putchar(centre);
		}
		else if ( x == 0)
		{
			ft_putchar(right);
		}
		ft_putchar("\n");
	}

void	vertical(int x, int y, char sides);
{
	int		i;

	i = 2;
	while(y > 2)
	{
		ft_putchar(sides);
		while(x > i)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar(sides);
		ft_putchar("\n");
	}
}

// creating square
void	rush(int x, int y)
{
	if (y >= 1)
	{
		horizontal(x, 'o', '-', 'o');
		vertical(x, y, '|');
	}
	
	else if (y >= 2)
	{
		horizontal(x, 'o', '-', 'o');
	}
}

