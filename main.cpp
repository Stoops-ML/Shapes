#include "rectangle.h"
#include "circle.h"


void main()
{
	Circle circle (10, 15, 30);
	Rectangle rect (2, 3, 5, 10);
	
	circle.printDetails();
	circle.resize(50);
	circle.printDetails();
	rect.printDetails();
	rect.move (12, 13);
	rect.printDetails();
}
