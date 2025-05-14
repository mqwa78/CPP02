/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:48:39 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/01 20:59:29 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructor basique

Fixed::Fixed() : _nb(0) {
	//std::cout << "Default constructor called" << std::endl;
}

//constructor avec int

Fixed::Fixed(int const integer) : _nb(integer << _bits) {
	//std::cout << "Int constructor called" << std::endl;
}

//constructor avec float

Fixed::Fixed(float const floatNb) 
	: _nb(roundf(floatNb * (1 << _bits))) {
	//std::cout << "Float constructor called" << std::endl;
}

//destructeur

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

//copy

Fixed::Fixed(const Fixed &other) : _nb(other._nb) {
	//std::cout << "Copy constructor called" << std::endl;
}

//operator

Fixed&	Fixed::operator=(const Fixed& other) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_nb = other.getRawBits();
	}
	return (*this);
}

bool	Fixed::operator>(const Fixed & other) const {
	return (this->_nb > other._nb);
}

bool	Fixed::operator<(const Fixed & other) const {
	return (this->_nb < other._nb);
}

bool	Fixed::operator<=(const Fixed & other) const {
	return (this->_nb <= other._nb);
}

bool	Fixed::operator>=(const Fixed & other) const {
	return (this->_nb >= other._nb);
}

bool	Fixed::operator!=(const Fixed & other) const {
	return (this->_nb != other._nb);
}

bool	Fixed::operator==(const Fixed & other) const {
	return (this->_nb == other._nb);
}

Fixed	Fixed::operator+(const Fixed & other) const {
	Fixed	result;
	result.setRawBits(this->_nb + other._nb);
	return (result);
}

Fixed	Fixed::operator-(const Fixed & other) const {
	Fixed	result;
	result.setRawBits(this->_nb - other._nb);
	return (result);
}

Fixed	Fixed::operator*(const Fixed & other) const {
	Fixed	result;
	long	temp = static_cast<long>(this->_nb) * static_cast<long>(other._nb);
	result.setRawBits(static_cast<int>(temp >> _bits));
	return (result);
}

Fixed Fixed::operator/(const Fixed & other) const {
	Fixed result;
	if (other._nb == 0) {
		std::cerr << "Error: Division by zero." << std::endl;
		return (result);
	}
	long temp = (static_cast<long>(this->_nb) << Fixed::_bits) / other._nb;
	result.setRawBits(static_cast<int>(temp));
	return (result);
}

Fixed& 	Fixed::operator++() {
	++(this->_nb);
	return (*this);
}

Fixed& 	Fixed::operator--() {
	--(this->_nb);
	return (*this);
}

Fixed 	Fixed::operator++(int) {
	Fixed	tmp = *this;
	++(*this);
	return (tmp);
}

Fixed 	Fixed::operator--(int) {
	Fixed	tmp = *this;
	--(*this);
	return (tmp);
}

//Methods

Fixed& 	Fixed::min(Fixed & a, Fixed & b) {
	
 	if (a < b) {
		return (a);
	}
	return (b);
}

const Fixed& 	Fixed::min(const Fixed & a, const Fixed & b) {
	
	if (a < b) {
	   return (a);
   }
   return (b);
}

Fixed& 	Fixed::max(Fixed & a, Fixed & b) {
	
	if (a > b) {
	   return (a);
   }
   return (b);
}

const Fixed& 	Fixed::max(const Fixed & a, const Fixed & b) {
	
	if (a > b) {
	   return (a);
   }
   return (b);
}

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
