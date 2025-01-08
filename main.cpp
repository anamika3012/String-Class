#include <iostream>
#include "MyString.h"
#include <string>

using namespace std;

int main()
{
    MyString a = "Anamika";
    MyString b = " Ranjan";
    a+=b;
    cout<<a<<endl;

    a.erase(70, 1);
    cout<<a<<endl;

    return 0;
}
