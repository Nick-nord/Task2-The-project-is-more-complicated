#include<iostream>
#include "Figure.h"

Figure::Figure()
{
	this->side = 0;
	this->NameFigure = "Figure";
}
void Figure::print_info()
{
	std::cout << NameFigure << "(sides " << side <<") create" << std::endl;
	std::cout << std::endl;
}