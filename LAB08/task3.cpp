/*programmer: Laiba Bint-e-Zia
 *id: 23K-0006*/

#include<iostream>

void print() {
    std::cout<< "---------------Name : Laiba Bint-e-Zia---------------\n";
    std::cout<< "---------------id: 23K-0006---------------\n\n";
}

//base class 1
class Position {

    int x;
    int y;
    int z;

    public: 

    Position(int x, int y, int z) : x(x), y(y), z(z) {}

    void displayPosition() {

        std::cout<< "character moving right : " << x << " places" <<std::endl;
        std::cout<< "character moving left :" << y << " places" <<std::endl;
        std::cout<< "character jumping: " << z << " places" <<std::endl;
    
    }

};

//base class 2
class Health {

    int health;

    public:

    Health(int health) : health(health){}

    void displayHealth() {
          std::cout<< "health remaning: " << health <<std::endl;
    }

};

//derived class
class Character : public Position, public Health {

    int damage;
    int power;
    std::string speciality;

    public:

    Character(int damage, int power, std::string speciality, int health, int x, int y, int z) : Position(x, y, z), Health(health), damage(damage), power(power), speciality(speciality) {}

    void DisplayOfActions() {

        displayPosition();
        displayHealth();
        std::cout<< "the damage is of: " << damage <<std::endl;
        std::cout<< "the power of player is: " << power <<std::endl;
        std::cout<< "the speciality of character is: " << speciality <<std::endl;

    }

}; 

int main() {

    print();
    
    Character myCharacter(6, 8, "flying", 5, 4, 2, 3);

    myCharacter.DisplayOfActions();

    return 0;
}