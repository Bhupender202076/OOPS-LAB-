// Create two classes DM and DB. DM stores the distance in meter and centimeters and DB stores the distance
// in feet and inches. Write a program to add object of DM with the object of DB class.

#include <iostream>
using namespace std;

class DM
{

public:
    double meter;
    double centimeter;
    void getdistance(double m, double cm)
    {
        meter = m;
        centimeter = cm;
    }

    void display()
    {
        cout << "The meters are " << meter << endl;
        cout << "The centimeters are " << centimeter << endl;
    }
};

class DB
{

public:
    double feet;
    double inch;
    void getdistance(double ft, double inc)
    {
        feet = ft;
        inch = inc;
    }

    void display()
    {
        cout << "The feets are " << feet << endl;
        cout << "The inches are " << inch << endl;
    }

    friend void add(DM, DB);
};

void add(DM D1, DB D2)
{

    double R1, R2;

    R1 = D1.meter + D2.feet * 0.305;
    R2 = D1.centimeter + D2.inch * 2.54;
    cout << "Meters are " << R1 << endl;
    cout << "Centimeters are " << R2 << endl;
}

int main()
{

    DM d1;
    d1.getdistance(4, 70);
    d1.display();

    DB d2;
    d2.getdistance(5, 35);
    d2.display();

    add(d1, d2);

    return 0;
}
