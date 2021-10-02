#include<iostream>
using namespace std;

 class Animal {
public:
    Animal(string sound): sound_(sound) {}
    string MakeSound() {return sound_; }
    virtual int GetPower() {return 0; }
private:
    std::string sound_;
};

class Reptile : public Animal {
public:
     Reptile(std::string sound):
     Animal(sound + "rawr") {}
     int GetPower() {return 2; }
};



