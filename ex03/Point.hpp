/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:50:58 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/01 19:49:13 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
			Point();
			Point(const float x, const float y);
			Point(const Point & other);
			Point&	operator=(const Point & other);
			~Point();

			Fixed	getX() const;
			Fixed	getY() const;

	private:
			const Fixed	_x;
			const Fixed	_y;
	
};

#endif