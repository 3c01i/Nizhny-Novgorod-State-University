#include "Animals.h"
#include <iostream>
using namespace std;

int main(){
  MilckAnimals pig;
  Cat myrka;
  pig.SetDivide(Divide::plotoyad);
  myrka.eda=Eating::milck;
  std::cin>>myrka.name;
  cout << myrka.eda;
  std::cout << myrka.name << std::endl;
  return 0;
}