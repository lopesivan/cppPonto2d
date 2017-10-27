//
// Created by ivan on 27/10/17.
//

#include "Ponto2d.h"

Ponto2d::Ponto2d (float _x, float _y) : _x (_x), _y (_y) {}

float Ponto2d::x() const
{
    return _x;
}

void Ponto2d::x (float _x)
{
    Ponto2d::_x = _x;
}

float Ponto2d::y() const
{
    return _y;
}

void Ponto2d::y (float _y)
{
    Ponto2d::_y = _y;
}

std::ostream &operator<< (std::ostream &os, const Ponto2d &d)
{
    os << "(" << d.x() << "," << d.y() << ")";
    return os;
}

Ponto2d::Ponto2d() {}

Ponto2d Ponto2d::operator+ (Ponto2d ponto)
{
    float x = _x + ponto.x();
    float y = _y + ponto.y();

    return Ponto2d (x,y);


}

