//
// Created by ivan on 27/10/17.
//

#ifndef CPPPONTO2D_PONTO2D_H
#define CPPPONTO2D_PONTO2D_H


#include <ostream>

class Ponto2d
{

private:
    float _x;
    float _y;

public:
    Ponto2d (float _x, float _y);

    Ponto2d();

    float y() const;

    void  y (float _y);

    float x() const;

    void  x (float _x);

    Ponto2d operator+ (Ponto2d ponto);

public:
    friend std::ostream &operator<< (std::ostream &os, const Ponto2d &d);
};


#endif //CPPPONTO2D_PONTO2D_H
