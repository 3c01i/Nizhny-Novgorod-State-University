#include <iostream>
#include "string"
#include "Complex.h"
using namespace std;

int main() {
    Complex x(6, 22), u(-10, 0), l(0, 0);
    bool reas;
    x.Print();
    u.Print();
    reas = u == x;
    std::cout<<reas<<endl;
    u=x;
    x.Print();
    u.Print();
    reas = u == x;
    std::cout<<reas<<endl;
    std::cin>>x;
    std::cout<<x;
    return 0;
}