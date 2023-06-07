/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:54:38 by lkavalia          #+#    #+#             */
/*   Updated: 2023/06/07 09:25:09 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int>	arr1;
	Array<int>	arr2(4);

	std::cout << YELL "ARR1" BLANK << std::endl;
	std::cout << "size: " << arr1.size() << std::endl;
	std::cout << YELL "ARR2" BLANK << std::endl;
	std::cout << "size: " << arr2.size() << std::endl;
	try { arr2[4];}
	catch (const std::exception& e)
	{
		std::cout << RED << "Exception: " << e.what() << BLANK << std::endl;
	}
	
	for(int i = 0; i < arr2.size(); i++)
		arr2[i] = i;
	for (int i = 0; i < arr2.size(); i++)
		std::cout << arr2[i] << " ";
	std::cout << std::endl;
	
	std::cout << CYAN "\nTesting assigment operator overload!" BLANK << std::endl;
	arr1 = arr2;
	std::cout << "arr1 = arr2 size: " << arr1.size() << " :" << std::endl;
		for (int i = 0; i < arr1.size(); i++)
		std::cout << arr1[i] << " ";
	std::cout << std::endl;

	std::cout << CYAN "\nTesting if its a deep copy!" BLANK << std::endl;
	arr1[1] = 10;
	arr2[3] = -1;
	for (int i = 0; i < arr1.size(); i++)
		std::cout << arr1[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < arr2.size(); i++)
		std::cout << arr2[i] << " ";
	std::cout << std::endl;
	
	Array<std::string>	arr3(3);
	arr3[0] = "Welcome";
	arr3[1] = "to";
	arr3[2] = "Wolfsburg!";
	
	for (int i  = 0; i < arr3.size(); i++)
		std::cout << arr3[i] << " ";
	std::cout << std::endl;

	Array<std::string>	arr4(arr3);
	std::cout << CYAN << "Testing copy constructor on std::strings!" BLANK << std::endl;
		for (int i  = 0; i < arr4.size(); i++)
		std::cout << arr4[i] << " ";
	std::cout << std::endl;
	return (0);
}