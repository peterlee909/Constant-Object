#include <iostream>
#include "test.h"

using namespace std;

int main()
{
    test testObj(10,20);
    testObj.regularFunction();
    testObj.constFunction();
    testObj.print();

    const test constObj(20,30);
    constObj.constFunction();
//    constObj.regularFunction(); //const object can't use regular function.

    return 0;
}
