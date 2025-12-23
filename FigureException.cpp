#include<iostream>
#include <cstring>
#include "FigureException.h"
#include "Figure.h"
#include "Triangle.h"

FigureException::FigureException(std::string message) : message{ message } {}
std::string FigureException::getMessage() const { return message; }