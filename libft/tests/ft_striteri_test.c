/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 12:01:03 by tmwalo            #+#    #+#             */
/*   Updated: 2017/05/26 12:01:12 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    ft_pt_putchari(unsigned int i, char *s)
{
    write(1,s,1);
	write(1," ",1);
    printf("%d\n",i);
}

int main(void)
{
    char    str[] = "palice_malice\n";
    void    (*pf)(unsigned int, char *);

    pf = &ft_pt_putchari;
    ft_striteri(str,pf);
    return (0);
}
