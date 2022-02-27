#pragma once
enum Divide {
  vseyad,
  plotoyad,
  travoyad
};

class Animals {
public:
  char name;
  int weight;

  Divide GetDivide(){
    return(divide);
  }

  void SetDivide(Divide sdivide){
    this->divide = sdivide;
  }
private:  
  Divide divide;
};
 
class MilckAnimals : public Animals {
public:
  int drink;
};

class ColdAnimals : public Animals {
public:
  int eat;
};