#include <stdio.h>
#include <iostream>
#include <cstdio>

#include <string>
#include <string.h>

#define ARR_SIZE 20

using namespace std;

int main()
{
    int kor, eng, math, total;
    float avg;
    char grade, exam_type, name[ARR_SIZE];
    char line[] = "-----------------------";    

    std::cout << "NAME : " << std::ends;    
    std::cin >> name;
    //gets(name);
    //gets_s(name);
        
    std::cout << "EXAM TYPE : " << std::ends;
    std::cin >> exam_type;

    std::cout << "Input Score Kor, Eng, Math : " << std::ends;
    std::cin >> kor >> eng >> math;

    total = kor + eng + math;
    avg = total / 3.0f;

    cout << line << endl;

    std::cout << std::fixed;
    std::cout.precision(10);


    std::cout << "NAME : " << name << std::endl;
    std::cout << "EXAM TYPE : " << exam_type << std::endl;
    std::cout << "Kor : " << kor << "\t\tEng : " << eng << "\t\tMath : " << math << std::endl;
    std::cout << "Total : " << total << "\tAvg : " << avg << std::endl;

    
    return 0;
}
