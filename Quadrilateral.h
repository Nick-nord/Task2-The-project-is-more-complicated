#ifndef QUADRILATERAL_H 
#define QUADRILATERAL_H 

class Quadrilateral :public Figure
{
private:
	int sideA;
	int sideB;
	int sideC;
	int sideD;
	int cornerA;
	int cornerB;
	int cornerC;
	int cornerD;
	std::string NameQuadrilateral;
	
public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	
	void print_info();
};
#endif 
