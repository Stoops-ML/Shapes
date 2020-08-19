#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle:public Shape {
public:
	Circle (int x = 0, int y = 0, int radius = 5);	
	Circle (const Point& pos, int radius );	
	
	virtual bool resize(int percent);	
	virtual void draw() const;
	virtual void printDetails() const;
	
private:	
	static const double PI;
	double m_radius;
};

#endif //CIRCLE_H