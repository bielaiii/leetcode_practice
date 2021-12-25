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

class Mammal : public Animal {
public:
     Mammal():
     Animal("fuzzy fuzz") {}
     int GetPower() {return 3; }
};

class Turtle : public Reptile {
public:
     Turtle(): Reptile("turtle turtle") {}
     int GetPower() {return 7; }
}

int main(){

    
    return 0;
}



