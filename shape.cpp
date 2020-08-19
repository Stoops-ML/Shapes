#include <iostream>
#include "Shape.h"

using namespace std;

Shape::Shape (int x, int y) : m_pos (x, y) {}
Shape::Shape (const Point& pos) : m_pos (pos) {}

Shape::~Shape () {}


void Shape::printDetails()  const
{
	cout << "Position is: (" << m_pos.getX() << "," << m_pos.getY() << ")" << endl << endl;
}

void Shape::move (const Point& pos)
{
	m_pos = pos;
	draw ();
}

void Shape::move (int x, int y)
{
	move(Point(x, y));
}