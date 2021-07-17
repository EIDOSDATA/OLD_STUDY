#include <iostream>

namespace bestComlmpl
{
    void simpleFunc(void);
}

namespace progComlmpl
{
    void simpleFunc(void);
}

int main()
{
    bestComlmpl::simpleFunc();
    progComlmpl::simpleFunc();
    return 0;
}

void bestComlmpl::simpleFunc()
{
    std::cout << "bestCom FUCNTION" << std::endl;    
}

void progComlmpl::simpleFunc()
{
    std::cout << "progComlmpl FUCNTION" << std::endl;    
}