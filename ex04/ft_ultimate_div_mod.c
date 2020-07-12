/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plnyakan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:41:49 by plnyakan          #+#    #+#             */
/*   Updated: 2020/07/12 14:41:52 by plnyakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b){

	*a=(4/2);
	*b=(4%2);
}
int main(){
	
	int a=4;
	int b=2;	

	ft_ultimate_div_mod(&a,&b);

	printf("%d",a);
	printf("%d",b);

	return 0;

}
