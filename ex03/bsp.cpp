/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:36:02 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/01 20:52:12 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	getOrientation(Point p1, Point p2, Point p3) {
	return ((p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const p) {

	Fixed 	area1, area2, area3;
	bool	neg, pos;

	area1 = getOrientation(p, a, b);
	area2 = getOrientation(p, b, c);
	area3 = getOrientation(p, c, a);
	neg = (area1 < 0) || (area2 < 0) || (area3 < 0);
	pos = (area1 > 0) || (area2 > 0) || (area3 > 0);
	return !(neg && pos) && !(area1 == 0 || area2 == 0 || area3 == 0);
}