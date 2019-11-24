#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
    Complex x;
    Complex y(4.3,8.2);
    Complex z(3.3,2.1);
    cout<<x<<y<<z<<endl;
    x=y-z;
    cout<<x<<y<<z<<endl;
    x=y+z;
    cout<<x<<y<<z<<endl;

}
