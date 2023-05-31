/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 22:28:27 by lkavalia          #+#    #+#             */
/*   Updated: 2023/05/31 23:37:42 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	std::cout << CYAN "STRING:" BLANK << std::endl;
	std::string arr[5] = {"A", "B", "C", "D", "E"};

	iter(arr, 5, print_arr<std::string>);
	std::cout << std::endl;
	//iter(arr, 5, add<std::string>);
	
	std::cout << RED "INT:" BLANK << std::endl;
	int	arr_int[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	iter(arr_int, 10, print_arr<int>);
	iter(arr_int, 10, add<int>);
	std::cout << std::endl;
	iter(arr_int, 10, print_arr<int>);
	std::cout << std::endl;
	
	std::cout << YELL "FLOAT:" BLANK << std::endl;
	float	arr_float[4] = {1.2, 2.4, 3.5, 4.7};
	iter(arr_float, 4, print_arr);
	iter(arr_float, 4, add);
	std::cout << std::endl;
	iter(arr_float, 4, print_arr);
	std::cout << std::endl;
	
	return (0);
}