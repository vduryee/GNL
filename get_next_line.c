/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduryee <vduryee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:24:52 by vduryee           #+#    #+#             */
/*   Updated: 2026/11/10 16:42:34 by vduryee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	// open the file
	// read n bytes (n defined by the BUFFER_SIZE)
	// put what is read inside a temporary storage
	// continue until end of line
	// when EOL is found, fetch the corresponding substr
	// and allocate memory to put it into a new str
	// call the function until end of file
}

char	*save_line(char *line_buffer)
{
	//read until \n or \0
	//line_buffer = '\0';
	//some substr shenanigan
	//return (substr);	
}
