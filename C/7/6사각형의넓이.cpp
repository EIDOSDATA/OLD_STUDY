#include <iostream>
#include <string>
using namespace std;

int Sq_Area(int *a, int *b)
{
    int val = (*a) * (*b);
    cout << "SQARE Area\t:\t" << (*a) * (*b) << endl;
    return val;
}

int Sq_Area(int a, int b = 10)
{
    int val = a * b;
    cout << "SQARE Area\t:\t" << a * b << endl;
    return val;
}

int main()
{
    int ia = 10, ib = 10;
    int value;
    char line[] = "-----------------------";

    value = Sq_Area(&ia, &ib);
    cout << ia << "  *  " << ib << "  =  " << value << endl;
    cout << line << endl;

    value = Sq_Area(22);
    cout << "22" << "  *  " << "x" << "  =  " << value << endl;
    cout << line << endl;


    return 0;
}