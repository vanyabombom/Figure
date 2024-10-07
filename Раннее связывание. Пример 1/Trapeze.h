#pragma once
#include "Figure.h"
class Trapeze : public Figure
{
private:
	int h;
public:
	void showArea() const;
	Trapeze(int h) : Figure(m_value1, m_value2);
};

