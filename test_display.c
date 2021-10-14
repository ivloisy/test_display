/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_display.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:14:17 by ivloisy           #+#    #+#             */
/*   Updated: 2021/10/13 15:29:57 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    display(t_ps *ps)
{
    t_list *lst;

    lst = ps->a.lst;
    while(lst->content != NULL)
    {
        ft_putnbr_fd(*(int *)lst->content, 1);
        ft_putchar_fd('\n', 1);
        if (lst->next == NULL)
            break ;
        lst = lst->next;
    }
    ft_putchar_fd('\n', 1);
    lst = ps->b.lst;
    while(lst->content != NULL)
    {
        ft_putnbr_fd(*(int *)lst->content, 1);
        ft_putchar_fd('\n', 1);
        if (lst->next == NULL)
            break ;
        lst = lst->next;
    }
}//