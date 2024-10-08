#include "Trapeze.h"
#include "Figure.h"
#include <iostream>
using namespace std;

Trapeze::Trapeze(int h) : Figure(m_value1, m_value2)
{
	int height = h;
}
void Trapeze::showArea() const
{
	cout << "Area of the trapeze: " << (m_value1 + m_value2) * height / 2 ;
}

