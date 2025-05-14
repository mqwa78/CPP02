/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:33:14 by mqwa              #+#    #+#             */
/*   Updated: 2025/04/27 23:53:54 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
				int					_nb;
				static const int	_bits = 8;
	public:
				Fixed();
				~Fixed();
				Fixed(const Fixed &other);
				Fixed& 	operator=(const Fixed & other);
				int		getRawBits(void) const;
				void	setRawBits(int const raw);
};

#endif