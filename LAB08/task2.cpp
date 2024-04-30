/*programmer: Laiba Bint-e-Zia
 *id: 23K-0006*/

#include<iostream>

void print() {
    std::cout<< "---------------Name : Laiba Bint-e-Zia---------------\n";
    std::cout<< "---------------id: 23K-0006---------------\n\n";
}

class Character{

    int health;
    int damage;

    public:

    Character(int h, int d) : health(h), damage(d) {}

    void displayCharacter() {

        std::cout<< "Character health: " << health <<std::endl;
        std::cout<< "Character damage: " << damage <<std::endl;

    }

};

class Enemy : public Character {

    public: 

    Enemy(int h, int d) : Character(h, d) {}

    void displayEnemy() {
        displayCharacter();
    }

};

class Player : public Character {

    public: 

    Player(int h, int d) : Character(h, d) {}

    void displayPlayer() {
        displayCharacter();
    }

};

class Wizard : public Player {

    int magicPower;
    std::string spells;

    public:

    Wizard(int pow, std::string spells, int h, int d) : Player(h, d), magicPower(pow), spells(spells) {}

    void DisplayWizard() {

        displayPlayer();
        std::cout<< "Wizard Magic Power: " << magicPower <<std::endl;
        std::cout<< "Wizard spells: " << spells <<std::endl; 

    }

};

int main() {

    print();
    
    Wizard obj(10, "vanish", 20, 12);

    obj.DisplayWizard();

    return 0;
}