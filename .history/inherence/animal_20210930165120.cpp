#include<iostream>
#include<vector>
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
};

int main(){
    Turtle t;
    Mammal gopher;
    Animal *cow = new Animal("moo");
    std::cout << t.MakeSound() << std::endl;
    std::cout << gopher.MakeSound() << std::endl;
    std::cout << cow->MakeSound() << std::endl;
     //std::vector<Animal> vec = {t, gopher, *(cow)};
     Animal * t2 = new Turtle();
Animal * m2 = new Mammal();
Animal * r2 = new Reptile("hiss");
 std::vector<Animal *> vec = {t2, m2, r2};
    return 0;
}




