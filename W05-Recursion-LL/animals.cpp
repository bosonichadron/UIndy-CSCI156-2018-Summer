/*
    Name: Paul Talaga
    Date: June 14
    Desc: Inheritance example

*/
#include <iostream>
#include <vector>

using namespace std;

class Animal{
    public:
    int numEyes;
    int numLegs;
    string name;
    string color;
    
    Animal(){
        cout << "Animal constructor" << endl;
        numEyes = -1;
        numLegs = -1;
        name = "No name";
        color = "black";
    }
    
    Animal(string name){
        cout << "Animal constructor - overload" << endl;
        numEyes = -1;
        numLegs = -1;
        this->name = name;
        color = "black";
    }
    
    // Virtual allows derived classes to redefine a function and if 
    // polymorthism is done, will select the correct function.
    virtual ~Animal(){
        cout << "Animal " << name << " destructor called" << endl;
    }
    
    virtual void print(){
        cout << "Animal: " << name;
        cout << " color: " << color;
        cout << " legs: " << numLegs;
        cout << " eyes: " << numEyes;
        cout << endl;
    }
};

class Snake : public Animal{
    public:
    Snake(){
        cout << "Snake Constructor" << endl;
        color = "Brown";
        numLegs = 0;
        numEyes = 2;
        name = "sssssSnake";
        isPoisonous = false;
    }
    
    Snake(string name) : Animal(name){
        cout << "Snake Constructor - overload" << endl;
        color = "Brown";
        numLegs = 0;
        numEyes = 2;
        isPoisonous = false;
    }
    
    ~Snake(){
        cout << "Snake " << name << " destructor called" << endl;
    }
    
    bool isPoisonous;
     void print(){
        cout << "Snake: " << name;
        cout << " color: " << color;
        cout << " legs: " << numLegs;
        cout << " eyes: " << numEyes;
        cout << " poisionous: " << isPoisonous;
        cout << endl;
        //Animal::print();
    }
};

class Giraffe : public Animal{
    public:
    Giraffe(){
        cout << "Giraffe Constructor" << endl;
        color = "Brown";
        numLegs = 4;
        numEyes = 2;
        name = "I'm up here!";
    }
    
    Giraffe(string name) : Animal(name){
        cout << "Snake Constructor - overload" << endl;
        color = "Brown";
        numLegs = 4;
        numEyes = 2;
    }
    
    ~Giraffe(){
        cout << "Giraffe " << name << " destructor called" << endl;
    }
    
     void print(){
        cout << "Giraffe: " << name;
        cout << " color: " << color;
        cout << " legs: " << numLegs;
        cout << " eyes: " << numEyes;
        cout << endl;
    }
};


int main(){
    /*Animal adi;
    adi.numEyes = 2;
    adi.numLegs = 2;
    adi.name = "Adi";
    adi.color = "Green";
    
    Snake trey;
    Snake jared("jared");
    //trey.name = "Trey";
    
    adi.print();
    trey.print();
    jared.print();
    */
    
    vector<Animal*> zoo;
    zoo.push_back(new Snake("Jared"));
    zoo.push_back(new Animal("Adi"));
    zoo.push_back(new Giraffe("Melissa"));
    
    for(unsigned i = 0; i < zoo.size(); i++){
        cout << i;
        zoo[i]->print();
    }
    
    for(unsigned i = 0; i < zoo.size(); i++){
        delete zoo[i]; // give the memory back!
        zoo[i] = NULL;
    }
    
}