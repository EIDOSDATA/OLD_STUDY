#include <iostream>
#include <string>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    cout << "Function input\t:\t" << *a << "  " << *b << endl;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "Function output\t:\t" << *a << "  " << *b << endl;
}

void swap(double *a, double *b)
{
    double temp;
    cout << "Function input\t:\t" << *a << "  " << *b << endl;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "Function output\t:\t" << *a << "  " << *b << endl;
}

void swap(char *a, char *b)
{
    char temp;    
    cout << "Function input\t:\t" << *a << "  " << *b << endl;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "Function output\t:\t" << *a << "  " << *b << endl;
}


int main()
{
    int ia = 100, ib = 999;
    double da = 3.1415, db = 1.14;
    char ca = 'A', cb = 'B';    
    string aname = "ASDF", bname = "QWER";
    char line[] = "-----------------------";

    swap(&ia, &ib);
    cout << "Main output\t:\t" << ia << "  " << ib << endl;
    cout << line << endl;

    swap(&da, &db);
    cout << "Main output\t:\t" << da << "  " << db << endl;
    cout << line << endl;

    swap(&ca, &cb);
    cout << "Main output\t:\t" << ca << "  " << cb << endl;
    cout << line << endl;
    aname.length();

/*
    swap(aname, bname);
    cout << "Main output\t:\t" << aname << "  " << bname << endl;
    cout << line << endl;
*/
    return 0;
}