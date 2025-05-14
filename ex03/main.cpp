/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:33:19 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/01 20:58:49 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const p);

int		main(void)
{
	Point a(0.0f, 0.0f);
	Point b(5.0f, 0.0f);
	Point c(0.0f, 5.0f);

	Point inside(1.0f, 1.0f);
	Point outside(6.0f, 1.0f);
	Point edge(2.5f, 2.5f);
	Point vertex(0.0f, 0.0f);
	Point base(2.0f, 0.0f);

	std::cout << "Triangle: A(0,0), B(5,0), C(0,5)\n" << std::endl;
	
	std::cout << "Inside (1,1):   " << (bsp(a, b, c, inside) ? "Inside" : "Outside") << std::endl;
	std::cout << "Outside (6,1):  " << (bsp(a, b, c, outside) ? "Inside" : "Outside") << std::endl;
	std::cout << "Edge (2.5,2.5): " << (bsp(a, b, c, edge) ? "Inside" : "Outside") << std::endl;
	std::cout << "Vertex (0,0):   " << (bsp(a, b, c, vertex) ? "Inside" : "Outside") << std::endl;
	std::cout << "Base (2,0):     " << (bsp(a, b, c, base) ? "Inside" : "Outside") << std::endl;
	return (0);
}