/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:46:32 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/14 20:44:12 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int		main( void ) {

	Fixed			a;
	Fixed const		b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << b / a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	if (a >= b)
		std::cout << "a is greater than b" << std::endl;
	if (a <= b)
		std::cout << "a is less than b" << std::endl;
	if (a == b)
		std::cout << "a is equal to b" << std::endl;
	return (0);
}