#include "point.h"
#include <iostream>
using namespace std;

void center(point* arr, int size, float& cX, float& cY)
{
	float xcenter = 0.0;
	float ycenter = 0.0;

	for (int i = 0;i < size; i++)
	{
		xcenter += arr[i].getX();
		ycenter += arr[i].getY();
	}

	xcenter = (xcenter) / size;
	ycenter = (ycenter) / size;

	cX = xcenter;
	cY = ycenter;
}


void closer(point* pa, point* pb, int size1, int size2, float originalX, float originalY)
{
	float distance1 = 0;
	float distance2 = 0;
	float centAx = 0;
	float centAy = 0;
	float centBx = 0;
	float centBy = 0;
	point dis(originalX, originalY);
	center(pa, size1, centAx, centAy);
	center(pb, size2, centBx, centBy);

	distance1 = dis.distance(centAx, centAy);
	distance2 = dis.distance(centBx, centBy);


	if (distance1 > distance2)
		cout << " is closer to cluster A" << endl;
	else if (distance2 > distance1)
		cout << " is closer to cluster B" << endl;
	else
		cout << " is in the middle between both clusters" << endl;

}

//void closer(float aX, float bY, float cX, float dY, float originalX, float originalY)
//{
//	float distance1, distance2 = 0;
//
//
//	/*distance1 = pow(aX - originalX, 2.0) + pow(bY - originalY, 2.0);
//	distance1 = sqrt(distance1);
//
//	distance2 = pow(cX - originalX, 2.0) + pow(dY - originalY, 2.0);
//	distance2 = sqrt(distance2);*/
//
//	if (distance1 > distance2)
//		cout << "The original point is closer to the first cluster";
//	else if (distance2 > distance1)
//		cout << "The original point is closer to the second cluster";
//	else
//		cout << "The orignal point is in the middle between both clusters";
//
//}

//a) Generate n random points for cluster A with
//70.0 < x < 90.0 and 70.0 < y < 90.0.For example, take n = 200
//	b) Generate n random points for cluster B with
//	20.0 < x < 40.0 and 20.0 < y < 40.0.For example, take n = 200
//	c) Generate m = 20 random points p with 5.0 < x < 100.0 and 5.0 < y < 100.0.
//	d) For each of the above m points, output to which cluster(A or B) it should
//	belong.


int main()
{
	srand(time(0));
	point* p;
	point* c;
	point* r;
	int clusterA = 0;
	int clusterB = 0;
	int randomSize = 0;
	cout << "Enter size of cluster A, B and number of random points" << endl;
	cin >> clusterA >> clusterB >> randomSize; cout << endl;
	p = new point[clusterA];
	c = new point[clusterB];
	r = new point[randomSize];

	/*cout << "Must be 70.0< x < 90.0 and 70.0 < y < 90.0" << endl;*/
	float u, o;
	for (int i = 0;i < clusterA; i++)
	{

		u = (rand() % 20) + 71;
		o = (rand() % 20) + 71;
		p[i].setX(u);
		p[i].setY(o);

	}

	
	/*cout << "Must be 20.0 < x < 40.0 and 20.0 < y < 40.0" << endl;*/
	float k, l;
	for (int i = 0;i < clusterB; i++)
	{

		k = (rand() % 20) + 21;
		l = (rand() % 20) + 21;
		c[i].setX(k);
		c[i].setY(l);

	}

	
	/*cout << "Must be 5.0 < x < 100.0 and 5.0 < y < 100.0" << endl;*/
	float m, n;
	for (int i = 0;i < randomSize; i++)
	{

		m = (rand() % 100) + 6;
		n = (rand() % 100) + 6;
		r[i].setX(m);
		r[i].setY(n);

	}

	

	float v, z;

	for (int i = 0;i < randomSize;i++)
	{
		v = r[i].getX();
		z = r[i].getY();
		cout << "Point number " << i + 1;
		closer(p, c, clusterA, clusterB, v, z);
		cout << endl;
	}



}