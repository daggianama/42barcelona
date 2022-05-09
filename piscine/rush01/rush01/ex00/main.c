/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:44:02 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/10 18:04:44 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void ft_arr(int *map, char *imput)              // apunta al imput/argumentos revisados y el malloc reservado para crea tablero
{
	
}


void check_string (int argc, char *argv[])    // revisa el string que son los argumentos para que pasen a ser imput para el tablero
{
	int i;            // indica el movimiento de lectura en el string, usado para el while loop 

	i = 0;
	while (argv[i] ! = '\0') // si el string contiene nada o es null
	{
		if (i % 2 == 0)  //si es par 	
		{
			if (argv[i] < 1 && > 4)  // esta fuera de  los valores entre 1 y 4		
			return (0);
		}
		else
		{
			if (argv[i] !=  " ")
				return (0);
		}
	i++;
}

int main(int argc, char *argv[])           // lee los argumentos activa el check de errores y hac malloc para reservar espacio
{
	int imput;

	if(argc != 2) 
	{	
		write(1, "Not possible to find a solution", 21)
		return (0);
	else
	{
		imput = check_string(argv[1]);
		if (imput == 0)
		       return (0);
	}
	else
	{
		*map = (int*) malloc (4*4 sizeof(int));
		ft_map(int *map, char *argv);
	}
}
