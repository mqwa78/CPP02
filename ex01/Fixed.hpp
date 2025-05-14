/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 23:59:26 by mqwa              #+#    #+#             */
/*   Updated: 2025/04/28 02:08:52 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
				int					_nb;
				static const int	_bits = 8;
	public:
				Fixed();
				Fixed(int const integer);
				Fixed(float const floatNb);
				~Fixed();
				Fixed(const Fixed& other);
				Fixed& 	operator=(const Fixed& other);
				int		getRawBits(void) const;
				void	setRawBits(int const raw);
				float	toFloat(void) const;
				int 	toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif