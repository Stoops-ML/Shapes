#ifndef POINT_H
#define POINT_H

class Point {
public:
	Point (int x, int y);

	inline int getX () const;
	inline int getY ()  const;
private:
	int m_x;
	int m_y;
};

inline int Point::getX()const
{
	return m_x;
}

inline int Point::getY()const
{
	return m_y;
}

#endif