#include <iostream>
#include "FigureException.h"
#include "Figure.h"
#include "Triangle.h"


Triangle::Triangle(int a, int b, int c, int A, int B, int C) // : sideA, sideB, sideC, conorA, conorB, conorC{};
{
	this->sideA = a;
	this->sideB = b;
	this->sideC = c;
	this->cornerA = A;
	this->cornerB = B;
	this->cornerC = C;

	if ((cornerA + cornerB + cornerC) != 180)
	{
		throw FigureException ("Error creating the shape. Reason: the sum of the angles is not equal to 180");
	}
	
	
	if (cornerC == 90) 
	{
		NameTriangle = "Right-angled triangle";
	}
	else if ((sideA == sideB == sideC) && (cornerA == 60) && (cornerB == 60) && (cornerC == 60))
	     {
		      NameTriangle = "Equilateral triangle";
	     }
	     else if ((sideA == sideC) && (cornerA == cornerC))
	         {
		          NameTriangle = "Isosceles triangle";
	         }
	         else
	            {
		            NameTriangle = "Triangle";
	             }
}

Triangle::~Triangle() {};

void Triangle::print_info()
{
	std::cout << NameTriangle << " (sides " << sideA << ", " << sideB << ", " << sideC << "; corners " << cornerA << ", " << cornerB << ", " << cornerC << ") create " << std::endl;
	std::cout << std::endl;
}

