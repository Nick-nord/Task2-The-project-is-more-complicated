#ifndef FIGURE_H 
#define FIGURE_H 

class Figure {
protected:
	int side;
	std::string NameFigure;
public:
	Figure();
	virtual void print_info();
};

#endif 
