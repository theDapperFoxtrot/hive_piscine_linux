/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smishos <smishos@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:26:14 by smishos           #+#    #+#             */
/*   Updated: 2024/02/23 13:26:35 by smishos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_combn(int n)
{
    int i;
    char print[10];

    if (n <= 0 || n >= 10)
        return ;
    i = 0;
    while (i < n)
    {
        print[i] = i + '0';
        i++;
    }
    while (print[0] <= ('9' - n + 1))
    {
        i = n - 1;
        while (i >= 0)
        {
            ft_putchar(print[i]);
            i--;
        }
        ft_putchar(',');
        ft_putchar(' ');
        print[n - 1]++;
        i = n - 1;
        while (i > 0)
        {
            if (print[i] > '9')
            {
                print[i - 1]++;
                print[i] = print[i - 1] + 1;
            }
            i--;
        }
    }
    i = n - 1;
    while (i >= 0)
    {
        ft_putchar(print[i]);
        i--;
    }
}

int main()
{
    ft_print_combn(2);
    return (0);
}
