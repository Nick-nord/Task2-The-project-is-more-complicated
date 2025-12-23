#include<iostream>
#include "FigureException.h"
#include "Figure.h"
#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
{
	this->sideA = a;
	this->sideB = b;
	this->sideC = c;
	this->sideD = d;
	this->cornerA = A;
	this->cornerB = B;
	this->cornerC = C;
	this->cornerD = D;
	
	if ((cornerA + cornerB + cornerC)+ cornerD != 360)
	{
		throw FigureException("Error creating the shape. Reason: the sum of the angles is not equal to 360");
	}

	
	if ((cornerA == 90) && (cornerB == 90) && (cornerC == 90) && (cornerD == 90))
	{
		if ((sideA == sideB) && (sideA == sideC) && (sideA == sideD))
		{
			NameQuadrilateral = "Square";
		}
		else
		{
			NameQuadrilateral = "Rectangle";
		}
	}
	else
	{
		if ((cornerA == cornerC) && (cornerB == cornerD))
		{
			if ((sideA == sideB) && (sideA == sideC) && (sideA == sideD))
			{
				NameQuadrilateral = "Rhomb";
			}
			else
			{
				NameQuadrilateral = "Parallelogram";
			}
		}
		else
		{
			NameQuadrilateral = "Quadrilateral";
		}
	}

}

void Quadrilateral::print_info() {
	std::cout << NameQuadrilateral << " (sides " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; corners " << cornerA << ", " << cornerB << ". " << cornerC << ", " << cornerD <<") create "<< std::endl;
	std::cout << std::endl;
}
