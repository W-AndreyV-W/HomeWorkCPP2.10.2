#pragma once
#include <iostream>
#include "Triangle.h"


class TriangleEquil :public Triangle {
public:
    TriangleEquil() :TriangleEquil("�������������� �����������:", 3, 30) {}
private:
    TriangleEquil(std::string name_, int quanfig_, int side_a_b_c_);
};
