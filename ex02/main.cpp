/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:46:32 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/23 16:46:00 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int		main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed const c(Fixed(3.5f) + Fixed(1.5f));
	Fixed d(10);
	Fixed e(2);

	std::cout << "\n--- Valeurs initiales ---\n";
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;

	std::cout << "\n--- Arithmétique ---\n";
	std::cout << "d + e = " << (d + e) << std::endl;
	std::cout << "d - e = " << (d - e) << std::endl;
	std::cout << "d * e = " << (d * e) << std::endl;
	std::cout << "d / e = " << (d / e) << std::endl;

	std::cout << "\n--- Comparaisons ---\n";
	std::cout << "d > e: " << (d > e) << std::endl;
	std::cout << "d < e: " << (d < e) << std::endl;
	std::cout << "d == e: " << (d == e) << std::endl;
	std::cout << "d != e: " << (d != e) << std::endl;
	std::cout << "d >= e: " << (d >= e) << std::endl;
	std::cout << "d <= e: " << (d <= e) << std::endl;

	std::cout << "\n--- Incrémentation/Décrémentation ---\n";
	std::cout << "a (init): " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;

	std::cout << "\n--- Fonctions min / max ---\n";
	std::cout << "min(d, e): " << Fixed::min(d, e) << std::endl;
	std::cout << "max(d, e): " << Fixed::max(d, e) << std::endl;
	std::cout << "min(b, c): " << Fixed::min(b, c) << std::endl;
	std::cout << "max(b, c): " << Fixed::max(b, c) << std::endl;

	return 0;
}
