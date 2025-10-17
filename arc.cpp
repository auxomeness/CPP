#include <iostream>
#include <vector>
using namespace std;

class Animal {
    protected:
        string name;
        int age;
    
    public:
        Animal(string n, int a) {
            name = n;
            age = a;
        }
        
        virtual void speak() {
            cout << "Animal generic sound\n";
        }
        
        virtual void move() {
            cout << "Animal moves!\n";
        }
        
        virtual void details() {
            cout << name << " " << age << " " << endl;
        }
};

class Mammal : public Animal {
    protected:
        bool isWarmBlooded;
        
    public:
        Mammal(string name, int age, bool isWarmBlooded = true) 
        : Animal(name, age), isWarmBlooded(isWarmBlooded) {}
    
        void speak() override {
            cout << "Mammal speaks\n";
        }
        
        void move() override {
            cout << "Mammal moves\n";
        }
        
        void give_birth() {
            cout << "Mammal gives birth\n";
        }
};

class Bird : public Animal {
    protected:
        bool canFly;
    public:
        Bird(string name, int age, bool canFly = true) 
        : Animal(name, age), canFly(canFly) {}    
      
        void speak() override {
            cout << "Bird speaks\n";
        }
        
        void move() override {
            cout << "Bird moves\n";
        }  
        
        void lay_eggs() {
            cout << "Birds lay eggs\n";
        }
};

class Dog : public Mammal {
    private:
        string breed;
        
    public:
        Dog(string name, int age, string breed) : Mammal(name, age), breed(breed) {}
        
        void speak() override { 
            cout << "Woof!\n";
        }
        
        void fetch() {
            cout << "The dog fetched!\n";
        }
        
        void details() override{
            cout << name << " " << age << " " << breed << endl;
        }
};

class Penguin : public Bird {
    private:
        string species;
    
    public:
        Penguin(string name, int age, string species) : Bird(name, age), species(species) {}
        
        void move() override {
            cout << "Penguin moves\n";
        }  
        
        void details() {
            cout << name << " " << age << " " << species << endl;
        }
};

class Cat : public Mammal {
    private:
        string breed;
        
    public:
        Cat(string name, int age, string breed) : Mammal(name, age), breed(breed) {}
        
        void speak() override { 
            cout << "Meow!\n";
        }
        
        void purr() {
            cout << "The cat purrs!\n";
        }
        
        void details() {
            cout << name << " " << age << " " << breed << endl;
        }
};

class Eagle : public Bird {
    private:
        string species;
    
    public:
        Eagle(string name, int age, string species) : Bird(name, age), species(species) {}
        
        void speak() override { 
            cout << "Screech!\n";
        }

        void move() override {
            cout << "The eagle soars in the sky\n";
        }  
        
        void details() {
            cout << name << " " << age << " " << species << endl;
        }
};

class Zoo {
    private:
        vector <Animal*> animals;
        
    public:
        void addAnimal(Animal* animal) {
            animals.push_back(animal);
        }
        
        void listAnimals() const {
            for (auto animal : animals) {
                animal->details();
            }
        }

        void simulateDay() const {
            for (auto animal : animals) {
                animal->speak();
                animal->move();
            }
        }
};

int main() {
    Dog dog("Browny", 3, "Golden Retriever");
    Cat cat("PussyCat", 1, "Persian");
    Eagle eagle("Panabong", 4, "Philippine Eagle");
    Penguin penguin("Rico", 2, "Adélie penguin");
    
    Zoo zoo;
    
    zoo.addAnimal(&dog);
    zoo.addAnimal(&cat);
    zoo.addAnimal(&eagle);
    zoo.addAnimal(&penguin);

    zoo.listAnimals();
    cout << endl;

    cout << "A day in a zoo\n";
    zoo.simulateDay();
    cout << endl;

    return 0;
}