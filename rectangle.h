#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle:public Shape {
public:
	Rectangle (int x =0, int y = 0, int width = 5, int height = 5);	
	Rectangle (const Point& pos, int width, int height);	

	virtual bool resize(int percent);
	virtual void draw() const;
	virtual void printDetails() const;
	
private:	
	int m_width;
	int m_height;
};

#endif //RECTANGLE_H