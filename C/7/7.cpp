#include <iostream>
using namespace std;

int BoxVol(int x = 28, int y = 29, int z = 30) // int BoxVol(int *x, int *y, int *z)
{
    int value;
    value = x * y * z; // value = (*x) * (*y) * (*z);
    return value;
}

int main()
{
    int x, y, z;
    //cout << "Input X, Y, Z\t" << ends;
    //cin >> x >> y >> z;
    //cout << x << "  *  " << y << "  *  " << z << "  =  " << BoxVol(&x, &y, &z) << endl;

    cout << "BoxVol[15, 17, 20]  =  " << BoxVol(15, 17, 20) << endl;
    cout << "BoxVol[20, 25, def]  =  " << BoxVol(20, 25) << endl;
    cout << "BoxVol[17, def, def]  =  " << BoxVol(17) << endl;
    return 0;
}