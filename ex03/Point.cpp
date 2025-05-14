/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:54:14 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/01 21:00:11 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point() : _x(0), _y(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
	//std::cout << "Float constructor called" << std::endl;
}

Point::~Point() {
	//std::cout << "Destructor called" << std::endl;
}

Point::Point(const Point & other) : _x(other._x), _y(other._y) {
	//std::cout << "Copy constructor called" << std::endl;
}

Point&	Point::operator=(const Point & other) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		return (*this);
	}
	return (*this);
}

Fixed	Point::getX() const {
	return (this->_x);
}

Fixed	Point::getY() const {
	return (this->_y);
}
