#include"point.h"


point::point()
{
	y = 0;
	x = 0;
};

	point::point(float n1, float n2)
	{
		x = n1;
		y = n2;
	};

	void point::setX(float n)
	{
		x = n;
	};

	void point::setY(float num)
	{
		y = num;
	};

	float point::getX()
	{
		return x;
	};

	float point::getY()
	{
		return y;
	};

	void point::display()
	{
		cout << "(" << x << " , " << y << ")";
	};

	float point::distance(float num1, float num2)
	{
		float step1 = 0;
		float step2 = 0;
		step1 = pow(abs(x - num1), 2.0) + pow(abs(y - num2), 2.0);
		step2 = sqrt(step1);
		return step2;
	};
