#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape {
public:
	Shape (int x = 0, int y = 0);	
	Shape (const Point& pos);		

	virtual ~Shape ();
	
	virtual bool resize(int percent) = 0;
	void move (const Point& pos);
	void move (int x, int y);
	virtual void draw() const = 0;	
	virtual void printDetails() const;	

protected:
	inline const Point& getPosition () const;

private:		
	Point m_pos;
};

inline const Point& Shape::getPosition() const
{
	return m_pos;
}


#endif // SHAPE_H