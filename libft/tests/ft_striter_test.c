/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 12:00:23 by tmwalo            #+#    #+#             */
/*   Updated: 2017/05/26 12:00:45 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_pt_putchar(char *s)
{
    write(1,s,1);
}

int main(void)
{
    char    str[] = "malice\n";
    void    (*pf)(char *);

    pf = &ft_pt_putchar;
    ft_striter(str,pf);
    return (0);
}
