/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 22:29:48 by lkavalia          #+#    #+#             */
/*   Updated: 2023/05/31 23:30:12 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ITER_HPP
# define	ITER_HPP

# include <iostream>
# include <string>

template	<typename T>
void	iter(T *arr, int len, void (*f)(T&))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

template	<typename T>
void	print_arr(T& subject)
{
	std::cout << "Print: " << subject << std::endl;
}

template	<typename T>
void	add(T& element)
{
	element++;
}


# define	BLANK "\033[0m"
# define	RED	"\033[0;31m"
# define	GREEN "\033[0;32m"
# define	YELL "\033[0;33m"
# define	CYAN "\033[0;36m"

#endif