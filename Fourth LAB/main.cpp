#include <iostream>
#include "MyVector.h"
#include "MyMatrix.h"

int main(){
	MyVector<int> a(3);
	MyVector<int> b{2,2};
	MyMatrix<int> yu(2,2);
	MyMatrix<int> yy(2,2);
	std::cin>>yy;
	std::cin>>b;
	std::cout<<yy<<std::endl;
	yy=yy*b;
	std::cout<<yy<<std::endl;
}