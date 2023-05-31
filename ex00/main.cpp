/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:46:16 by lkavalia          #+#    #+#             */
/*   Updated: 2023/05/31 22:10:02 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// int	main(void)
// {
// 	//Testing swap()
// 	std::cout << GREEN "Testing swap()	===================" BLANK << std::endl;
// 	{
// 		int	a = 10;
// 		int b = 5;

// 		std::cout << YELL "INT" BLANK << std::endl;
// 		std::cout << "a: " << a << " b: " << b << std::endl;
// 		swap(a, b);
// 		std::cout << "a: " << a << " b: " << b << std::endl;
// 		std::cout << std::endl;
// 	}
// 	{
// 		float	a = 4.56;
// 		float	b = 2.21;

// 		std::cout << YELL "FLOAT" BLANK << std::endl;
// 		std::cout << "a: " << a << " b: " << b << std::endl;
// 		swap(a, b);
// 		std::cout << "a: " << a << " b: " << b << std::endl;
// 		std::cout << std::endl;
// 	}
// 	{
// 		std::string	a = "HELLO";
// 		std::string	b = "42 Wolfsburg";

// 		std::cout << YELL "STD::STRING" BLANK << std::endl;
// 		std::cout << "a: " << a << " b: " << b << std::endl;
// 		swap(a, b);
// 		std::cout << "a: " << a << " b: " << b << std::endl;
// 		std::cout << std::endl;
// 	}

// 	//Testing	min()
// 	std::cout << GREEN "Testing min()	====================" BLANK << std::endl;
// 	{
// 		int	a = 10;
// 		int b = 5;

// 		std::cout << YELL "INT" BLANK << std::endl;
// 		std::cout << "a: " << a << " b: " << b << std::endl;
// 		std::cout << "min: " << min(a, b) << std::endl;
// 		std::cout << std::endl;
// 	}
// 	{
// 		float	a = 10.34;
// 		float	b = 5.2;

// 		std::cout << YELL "STRING" BLANK << std::endl;
// 		std::cout << "a: " << a << " b: " << b << std::endl;
// 		std::cout << "min: " << min(a, b) << std::endl;
// 		std::cout << std::endl;
// 	}
// 	{
// 		std::string	a = "hello";
// 		std::string	b = "hhhaashdjhshzzz";

// 		std::cout << YELL "STRING" BLANK << std::endl;
// 		std::cout << "a: " << a << " b: " << b << std::endl;
// 		std::cout << "min: " << ::min(a, b) << std::endl;
// 		std::cout << std::endl;
// 	}
	
// 	//Testing	max()
// 	std::cout << RED "Testing max()	====================" BLANK << std::endl;
// 	{
// 		int	a = 10;
// 		int b = 5;

// 		std::cout << YELL "INT" BLANK << std::endl;
// 		std::cout << "a: " << a << " b: " << b << std::endl;
// 		std::cout << "max: " << max(a, b) << std::endl;
// 		std::cout << std::endl;
// 	}
// 	{
// 		float	a = 10.34;
// 		float	b = 5.2;

// 		std::cout << YELL "FLOAT" BLANK << std::endl;
// 		std::cout << "a: " << a << " b: " << b << std::endl;
// 		std::cout << "max: " << max(a, b) << std::endl;
// 		std::cout << std::endl;
// 	}
// 	{
// 		std::string	a = "hello";
// 		std::string	b = "hhhaashdjhshzzz";

// 		std::cout << YELL "STRING" BLANK << std::endl;
// 		std::cout << "a: " << a << " b: " << b << std::endl;
// 		std::cout << "max: " << ::max(a, b) << std::endl;
// 		std::cout << std::endl;
// 	}
// 	return (0);
// }

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}