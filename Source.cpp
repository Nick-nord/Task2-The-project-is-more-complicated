#include<iostream>
#include "FigureException.h"
#include"Figure.h"
#include"Triangle.h"
#include"Quadrilateral.h"



int main() {
	Figure figure;
	Figure* p;
	p = &figure;
	p->print_info();

	
	try 
	{
		Triangle triangle(10, 20, 30, 50, 60, 70);
        p = &triangle;
	    p->print_info();
	}
	catch (const FigureException& ex)
	{
		std::cout << ex.getMessage() << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception&)   // обработка остальных исключений
	{
		std::cout << "Something wrong" << std::endl;
	}

	try
	{
		Triangle triangle1(10, 20, 30, 50, 60, 90);
		p = &triangle1;
		p->print_info();
	}
	catch (const FigureException& ex)
	{
		std::cout << ex.getMessage() << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception&)   // обработка остальных исключений
	{
		std::cout << "Something wrong" << std::endl;
	}

	try
	{
		Triangle triangle2(10, 20, 30, 50, 40, 90);
		p = &triangle2;
		p->print_info();
	}
	catch (const FigureException& ex)
	{
		std::cout << ex.getMessage() << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception&)   // обработка остальных исключений
	{
		std::cout << "Something wrong" << std::endl;
	}

	
	try
	{
		Triangle triangle3(10, 20, 10, 50, 60, 50);
		p = &triangle3;
		p->print_info();
	}
	catch (const FigureException& ex)
	{
		std::cout << ex.getMessage() << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception&)   // обработка остальных исключений
	{
		std::cout << "Something wrong" << std::endl;
	}

	try
	{
		Triangle triangle4(30, 30, 30, 60, 60, 60);
		p = &triangle4;
		p->print_info();
	}
	catch (const FigureException& ex)
	{
		std::cout << ex.getMessage() << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception&)   // обработка остальных исключений
	{
		std::cout << "Something wrong" << std::endl;
	}

	
	try
	{
		Quadrilateral quadrilateral1(10, 20, 30, 40, 50, 60, 70, 80);
		p = &quadrilateral1;
		p->print_info();
	}
	catch (const FigureException& ex)
	{
		std::cout << ex.getMessage() << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception&)   // обработка остальных исключений
	{
		std::cout << "Something wrong" << std::endl;
	}
	try
	{
		Quadrilateral quadrilateral2(10, 20, 10, 20, 90, 90, 90, 90);
		p = &quadrilateral2;
		p->print_info();
	}
	catch (const FigureException& ex)
	{
		std::cout << ex.getMessage() << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception&)   // обработка остальных исключений
	{
		std::cout << "Something wrong" << std::endl;
	}
	try
	{
		Quadrilateral quadrilateral3(20, 20, 20, 20, 90, 90, 90, 90);
		p = &quadrilateral3;
		p->print_info();
	}
	catch (const FigureException& ex)
	{
		std::cout << ex.getMessage() << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception&)   // обработка остальных исключений
	{
		std::cout << "Something wrong" << std::endl;
	}
	try
	{
		Quadrilateral quadrilateral4(20, 30, 20, 30, 30, 40, 30, 40);
		p = &quadrilateral4;
		p->print_info();
	}
	catch (const FigureException& ex)
	{
		std::cout << ex.getMessage() << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception&)   // обработка остальных исключений
	{
		std::cout << "Something wrong" << std::endl;
	}
	try
	{
		Quadrilateral quadrilateral5(30, 30, 30, 30, 30, 40, 30, 40);
		p = &quadrilateral5;
		p->print_info();
	}
	catch (const FigureException& ex)
	{
		std::cout << ex.getMessage() << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception&)   // обработка остальных исключений
	{
		std::cout << "Something wrong" << std::endl;
	}

	return EXIT_SUCCESS;
}