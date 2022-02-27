#pragma once
enum Divide {
  vseyad,
  plotoyad,
  travoyad
};

enum Eating {
    milck,
    meat
};
class Animals {
public:
  char name[20];
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

class Cat : public MilckAnimals {
public:
    Eating eda;
};

class Dog : public MilckAnimals {
public:
    Eating eda;
};

class Snake : public ColdAnimals {
public:
    float lenght;
};

class frog : public ColdAnimals {
    float jump;
    int jumpheight;
};
