#pragma once
#include <string>
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
protected:
  std::string name;
  int weight;
public:
    int GetWeight();
    void SetWeight(int weight);
    std::string GetName();
    void SetName(std::string name);
    Divide GetDivide();
    void SetDivide(Divide sdivide);
private:  
  Divide divide;
};


