#include <iostream>
#include <cmath>
#include "Magnetic_Field.h"

Magnetic_Field::Magnetic_Field()
{
    B = new double[3];
    B[0] = 0.0;
    B[1] = 0.0;
    B[2] = 0.0;
}

Magnetic_Field::Magnetic_Field(double x, double y, double z)
{
    B = new double[3];
    B[0] = x;
    B[1] = y;
    B[2] = z;
}

Magnetic_Field::~Magnetic_Field()
{
    delete[] B;
}

void Magnetic_Field::setX(double x)
{
    B[0] = x;
}

void Magnetic_Field::setY(double y)
{
    B[1] = y;
}

void Magnetic_Field::setZ(double z)
{
    B[2] = z;
}

double Magnetic_Field::getX() const
{
    return B[0];
}

double Magnetic_Field::getY() const
{
    return B[1];
}

double Magnetic_Field::getZ() const
{
    return B[2];
}

double Magnetic_Field::calculateMagnitude() const
{
    return std::sqrt(B[0] * B[0] + B[1] * B[1] + B[2] * B[2]);
}

void Magnetic_Field::printUnitVector() const
{
    double magnitude = calculateMagnitude();

    if (magnitude == 0.0)
    {
        std::cout << "Unit vector is undefined because the magnitude is 0." << std::endl;
        return;
    }

    std::cout << "Magnetic field unit vector: ("
              << B[0] / magnitude << ", "
              << B[1] / magnitude << ", "
              << B[2] / magnitude << ")" << std::endl;
}