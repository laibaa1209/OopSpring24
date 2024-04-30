//programmer: Laiba Bint-e-ZIa
//std id: 23K-0006

#include<iostream>

inline float avg(int numOfRunScored, int playerDismissed) {
    std::cout<< "the batting avg of the player is: " << numOfRunScored / playerDismissed <<std::endl;
}

inline float strikeRate(int numOfRunScored, int ballsFaced) {
    std::cout<< "the strike rate is: " <<  ( (numOfRunScored / ballsFaced) * 100 ) <<std::endl;
}

int main() {

    avg(140, 4);

    strikeRate(140, 40);

    return 0;
}