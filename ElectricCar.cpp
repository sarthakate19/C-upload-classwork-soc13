#include <iostream>
using namespace std;

class Vehicle {
public:
    void Vehicle_Info() {
        cout << "Its class Vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    void Car_Info() {
        cout << "Its Car class." << endl;
    }
};

class ElectricCar : public Car {
public:
    void ElectricCar_Info() {
        cout << "Its ElectricCar class." << endl;
    }
};

int main() {
    ElectricCar E;

    E.ElectricCar_Info();
    E.Car_Info();
    E.Vehicle_Info();

    return 0;
}