#ifndef TRIANGLE_H 
#define TRIANGLE_H 

class Triangle : public Figure
{
private:
	int sideA;
	int sideB;
	int sideC;
	int cornerA;
	int cornerB;
	int cornerC;
	std::string NameTriangle;
	
public:
	Triangle(int a, int b, int c, int A, int B, int C); 
   	~Triangle(); 
	void print_info();
};

#endif
