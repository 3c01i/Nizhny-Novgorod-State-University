#include "Animals.h"
#include "MilckAnimals.h"
#include "Cat.h"
#include "ColdAnimals.h"
#include "Dog.h"
#include "frog.h"
#include "Snake.h"
#include <iostream>
using namespace std;

int main(){
  MilckAnimals pig;
  Cat myrka;
  pig.SetDivide(Divide::vseyad);
  myrka.SetName("lol");
  myrka.SetWeight(54);
  std::cout << pig.GetDivide() << std::endl;
  std::cout << myrka.GetName() << std::endl;
  std::cout << myrka.GetWeight() << std::endl;
  return 0;
}