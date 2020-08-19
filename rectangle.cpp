#include <iostream>
#include <cmath>
#include "Rectangle.h"

using namespace std;


Rectangle::Rectangle (int x, int y, int width, int height) 
: Shape (x, y), m_width (width), m_height (height) {}

Rectangle::Rectangle (const Point& pos, int width, int height) 
: Shape (pos), m_width (width), m_height (height) {}


void Rectangle::printDetails() const
{
	cout << "Rectangle Details:" << endl;
	Shape::printDetails();
	cout << "width: " << m_width << endl << "height: " << m_height<< endl << endl;
}

bool Rectangle::resize(int percent)
{
	// check percent validity
	m_height = m_height * sqrt ((percent + 100 ) / 100);
	m_width = m_width * sqrt ((percent + 100 ) / 100);
	return true;
	
}


void Rectangle::draw() const
{
	cout << "I am a Rectangle" << endl;
}

