#include "Square.h"
#include <iostream>
using namespace std;

void Square::ShowArea() const
{
	cout << "Area of the square: " << m_value1 * m_value1;
}
