#include<iostream>
using namespace std;



class Reptile : public Animal {
public:
     Reptile(std::string sound):
     Animal(sound + "rawr") {}
     int GetPower() {return 2; }
};

