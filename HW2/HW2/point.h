#include <iostream>
using namespace std;


class point
{
private:
	float x;
	float y;

public:
	point();


	point(float n1, float n2);
	

	void setX(float n);
	

	void setY(float num);
	

	float getX();
	

	float getY();
	

	void display();
	

	float distance(float num1, float num2);
	
};

