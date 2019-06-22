#include "test.h"
#include <iostream>

using namespace std;

test::test(int a, int b):
//regVar(a),
constVar(b) //member initializer
{
    regVar = a;
}

void test::regularFunction(){
    cout << "i am a regular function" << endl;
}

void test::constFunction() const {
    cout << "i am a const function" << endl;
}

void test::print(){
    cout << "regular Variable is: " << regVar << endl;
    cout << "const Variable is: " << constVar << endl;
}
