/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:45:40 by lkavalia          #+#    #+#             */
/*   Updated: 2023/05/31 22:03:57 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WHATEVER_HPP
# define	WHATEVER_HPP

# include <iostream>
# include <string>

template <typename	T>
void	swap(T& a1, T& a2)
{
	T	tmp;

	tmp = a1;
	a1 = a2;
	a2 = tmp;
}

template <typename	T>
T	min(const T& a1, const T& a2)
{
	return (a2 <= a1 ? a2 : a1);
}

template <typename	T>
T	max(const T& a1, const T& a2)
{
	return (a2 >= a1 ? a2 : a1);
}

# define	BLANK "\033[0m"
# define	RED	"\033[0;31m"
# define	GREEN "\033[0;32m"
# define	YELL "\033[0;33m"
# define	CYAN "\033[0;36m"

#endif