#include <iostream>
#include <cmath>
#include "Circle.h"

using namespace std;

const double Circle::PI (3.14);


Circle::Circle (int x, int y, int radius) 
: Shape (x, y), m_radius (radius){}

Circle::Circle (const Point& pos, int radius) 
: Shape (pos), m_radius (radius){}


void Circle::printDetails() const
{
	cout << "Circle Details:" << endl << endl;
	Shape::printDetails();
	cout << "radius: " << m_radius << endl << endl;
}


bool Circle::resize(int percent)
{
	// check percent validity
	m_radius = m_radius * sqrt ((percent + 100.00 ) / 100);
	return true;
}


void Circle::draw() const
{
	cout << "I am a Circle" << endl;
}
