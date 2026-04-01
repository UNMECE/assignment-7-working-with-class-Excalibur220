#include <cmath>
#include "Electric_Field.h"

Electric_Field::Electric_Field()
{
    E = new double[3];
    E[0] = 0.0;
    E[1] = 0.0;
    E[2] = 0.0;
}

Electric_Field::Electric_Field(double x, double y, double z)
{
    E = new double[3];
    E[0] = x;
    E[1] = y;
    E[2] = z;
}

Electric_Field::~Electric_Field()
{
    delete[] E;
}

void Electric_Field::setX(double x)
{
    E[0] = x;
}

void Electric_Field::setY(double y)
{
    E[1] = y;
}

void Electric_Field::setZ(double z)
{
    E[2] = z;
}

double Electric_Field::getX() const
{
    return E[0];
}

double Electric_Field::getY() const
{
    return E[1];
}

double Electric_Field::getZ() const
{
    return E[2];
}

double Electric_Field::calculateMagnitude() const
{
    return std::sqrt(E[0] * E[0] + E[1] * E[1] + E[2] * E[2]);
}

double Electric_Field::innerProduct(const Electric_Field &other) const
{
    return E[0] * other.E[0] + E[1] * other.E[1] + E[2] * other.E[2];
}