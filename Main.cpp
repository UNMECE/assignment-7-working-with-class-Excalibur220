#include <iostream>
#include "Electric_Field.h"
#include "Magnetic_Field.h"

using namespace std;

int main()
{
    Electric_Field E_default;
    Electric_Field E_components(1e5, 10.9, 1.7e2);
    Electric_Field E_setters;

    E_setters.setX(25.0);
    E_setters.setY(40.0);
    E_setters.setZ(15.0);

    Magnetic_Field B_default;
    Magnetic_Field B_components(3.0, 4.0, 12.0);
    Magnetic_Field B_setters;

    B_setters.setX(5.0);
    B_setters.setY(10.0);
    B_setters.setZ(2.0);

    cout << "Electric Field Objects" << endl;
    cout << "E_default = (" << E_default.getX() << ", " << E_default.getY() << ", " << E_default.getZ() << ")" << endl;
    cout << "Magnitude of E_default: " << E_default.calculateMagnitude() << endl;

    cout << "E_components = (" << E_components.getX() << ", " << E_components.getY() << ", " << E_components.getZ() << ")" << endl;
    cout << "Magnitude of E_components: " << E_components.calculateMagnitude() << endl;

    cout << "E_setters = (" << E_setters.getX() << ", " << E_setters.getY() << ", " << E_setters.getZ() << ")" << endl;
    cout << "Magnitude of E_setters: " << E_setters.calculateMagnitude() << endl;

    cout << endl;
    cout << "Electric field inner product of E_components and E_setters: "
         << E_components.innerProduct(E_setters) << endl;

    cout << endl;
    cout << "Magnetic Field Objects" << endl;
    cout << "B_default = (" << B_default.getX() << ", " << B_default.getY() << ", " << B_default.getZ() << ")" << endl;
    cout << "Magnitude of B_default: " << B_default.calculateMagnitude() << endl;

    cout << "B_components = (" << B_components.getX() << ", " << B_components.getY() << ", " << B_components.getZ() << ")" << endl;
    cout << "Magnitude of B_components: " << B_components.calculateMagnitude() << endl;

    cout << "B_setters = (" << B_setters.getX() << ", " << B_setters.getY() << ", " << B_setters.getZ() << ")" << endl;
    cout << "Magnitude of B_setters: " << B_setters.calculateMagnitude() << endl;

    cout << endl;
    B_components.printUnitVector();
    B_setters.printUnitVector();

    return 0;
}