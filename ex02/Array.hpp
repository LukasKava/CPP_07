/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:54:46 by lkavalia          #+#    #+#             */
/*   Updated: 2023/06/06 20:48:08 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

//Class template	===================
template	<typename T>
class	Array
{
	public:
		//Canonical form	===========
		Array(void): _elements(NULL), _size(0) {};
		Array(unsigned int n): _elements(new T[n]), _size(n) {};
		Array(const Array& other) {	*this = other;};
		~Array(void) {	delete[] this->_elements;};

		Array&	operator=(const Array& other)
		{
			if (this->_elements)
				delete[] this->_elements;
			this->_elements = new	T[other.size()];
			this->_size = other._size;
			for (int i = 0; i < other.size(); i++)
				this->_elements[i] = other._elements[i];
			return (*this);
		};
		
		//Member Functions	===========
		T&				operator[](size_t index)
		{
			if (index > _size - 1)
				throw	std::out_of_range("Provided index is too Big!");
			return (_elements[index]);
		};
		int	size(void) const { return (this->_size);};
		//Exceptions		===========
	private:
		T				*_elements;
		unsigned int	_size;
};



//Colors	===========================
# define	BLANK "\033[0m"
# define	RED	"\033[0;31m"
# define	GREEN "\033[0;32m"
# define	YELL "\033[0;33m"
# define	CYAN "\033[0;36m"

#endif