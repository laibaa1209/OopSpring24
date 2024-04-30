//programmer: Laiba Bint-e-Zia
//id: 23K-0006

#include <iostream>

class Platform;

class Logo {

    private:

    std::string logo;

    public:

    Logo(std::string log) : logo(log) {}

    friend class Platform;

    void displayLogo() {
        std::cout << "Current Logo: " << logo << std::endl;
    }

};

class Platform {

    public:
    
    void changeLogo(Logo &logoObj, const std::string &newLogo) {
        logoObj.logo = newLogo;
    }

};

class Server {

    public:

    std::string serverLocation;

    Server(std::string location) : serverLocation(location) {}

    void displayServerInfo() {
        std::cout << "Server Location: " << serverLocation << std::endl;
    }

};

int main() {

    Logo twitterLogo("Blue Bird"); 
    Server mainServer("EdinBurgh"); 

    twitterLogo.displayLogo();
    mainServer.displayServerInfo();

    Platform twitterPlatform;
    twitterPlatform.changeLogo(twitterLogo, "Doge Coin"); 

    twitterLogo.displayLogo();
    mainServer.displayServerInfo();

    return 0;
}
