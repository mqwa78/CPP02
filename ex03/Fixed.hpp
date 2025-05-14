/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:48:55 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/01 19:49:05 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
				Fixed();
				Fixed(int const integer);
				Fixed(float const floatNb);
				Fixed(const Fixed& other);
				Fixed& 	operator=(const Fixed & other);
				~Fixed();

				bool					operator>(const Fixed & other) const;
				bool					operator<(const Fixed & other) const;
				bool					operator>=(const Fixed & other) const;
				bool					operator<=(const Fixed & other) const;
				bool					operator!=(const Fixed & other) const;
				bool					operator==(const Fixed & other) const;
				Fixed					operator+(const Fixed & other) const;
				Fixed					operator-(const Fixed & other) const;
				Fixed					operator*(const Fixed & other) const;
				Fixed 					operator/(const Fixed & other) const;
				Fixed& 					operator++();
				Fixed& 					operator--();
				Fixed 					operator++(int);
				Fixed 					operator--(int);
				static Fixed& 			min(Fixed & a, Fixed & b);
				static const Fixed& 	min(const Fixed & a, const Fixed & b);
				static Fixed& 			max(Fixed & a, Fixed & b);
				static const Fixed& 	max(const Fixed & a, const Fixed & b);
				int						getRawBits(void) const;
				void					setRawBits(int const raw);
				float					toFloat(void) const;
				int 					toInt(void) const;

	private:
				int					_nb;
				static const int	_bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif