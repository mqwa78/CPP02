/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 00:00:42 by mqwa              #+#    #+#             */
/*   Updated: 2025/04/28 02:09:18 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructor basique

Fixed::Fixed() : _nb(0) {
	std::cout << "Default constructor called" << std::endl;
}

//constructor avec int

Fixed::Fixed(int const integer) : _nb(integer << _bits) {
	std::cout << "Int constructor called" << std::endl;
}

//constructor avec float

Fixed::Fixed(float const floatNb) 
	: _nb(roundf(floatNb * (1 << _bits))) {
	std::cout << "Float constructor called" << std::endl;
}

//destructeur

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

//copy

Fixed::Fixed(const Fixed &other) : _nb(other._nb) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

//operator

Fixed&	Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_nb = other.getRawBits();
	}
	return (*this);
}

//Methods

int	Fixed::getRawBits(void) const {
    return this->_nb;
}

void	Fixed::setRawBits(int const raw) {
	this->_nb = raw;
}

float Fixed::toFloat(void) const {
    return (static_cast<float>(this->_nb) / (1 << _bits));
}

int Fixed::toInt(void) const {
    return (this->_nb >> _bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
