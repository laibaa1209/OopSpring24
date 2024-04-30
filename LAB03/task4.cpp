/*programmer: Laiba Bint-e-Zia
  ID: 23K-0006
  Description: define a class for smartphone*/

  #include<iostream>

//define class smartphone
  class Smartphone {

    //attributes
    std::string brand, model, displayResolution;
    long int RAM, ROM, storage;

    //access modifier setting member functions to public
    public:

    //getter and setter to set value to private attributes
    void setBrand(std::string Brand) {
        brand = Brand;
    }

    std::string getBrand(){ 
        return brand;
    }

    void setModel(std::string Model) {
        model = Model;
    }

    std::string getModel(){ 
        return model;
    }

    void setResolution(std::string resolution) {
        displayResolution = resolution;
    }

    std::string getResolution(){ 
        return displayResolution;
    }

    void setRAM(long int ram) {
        RAM = ram;
    }

    long int getRAM(){ 
        return RAM;
    }

    void setROM(long int rom) {
        ROM = rom;
    }

    long int getROM(){ 
        return ROM;
    }

    void setStorage(long int Storage) {
        storage = Storage;
    }

    long int getStorage() {
        return storage;
    }

    //member functions to perform various activities on phone
    void MakePhoneCalls(long long int number) {
        std::cout<< "making phone call to "<< number <<std::endl;
    }

    void SendMessage(long long int number, std::string message) {
        std::cout<< "sending message: " << message << " to " << number <<std::endl;  
    }

    void InternetConnecting(std::string wifiName) {
        std::cout<< "connecting to " << wifiName << std::endl;
    }

    void BrowsingInternet(std::string URL) {
        std::cout <<"browsing on" << URL <<std::endl;
    }

  }; //end of class


//start of main
int main() {

    //2 distinct objects of class
    Smartphone mySmartphone1;
    Smartphone mySmartphone2;

    //info for object 1
    std::cout<< "For Object 1: " <<std::endl;

    //calling getter and setter to exhibit attributes
    mySmartphone1.setBrand("Realme");
    std::cout<< "the brand name is: " << mySmartphone1.getBrand() <<std::endl;

    mySmartphone1.setModel("C12");
    std::cout<< "the Model name is: " << mySmartphone1.getModel() <<std::endl;

    mySmartphone1.setResolution("720x1280");
    std::cout<< "the resolution of phone is: " << mySmartphone1.getResolution() << " pixels" <<std::endl;

    mySmartphone1.setRAM(4);
    std::cout<< "the RAM of phone is: " << mySmartphone1.getRAM() << " GB" <<std::endl;

    mySmartphone1.setROM(64);
    std::cout<< "the ROM of phone is: " << mySmartphone1.getROM() << " GB" <<std::endl;

    mySmartphone1.setStorage(72);
    std::cout<< "theStorage of phone is: " << mySmartphone1.getStorage() << "GB" <<std::endl;

    //calling of member functions in main
    mySmartphone1.MakePhoneCalls(0330-8973765);
    mySmartphone1.SendMessage(03317257132, "how have you been?");
    mySmartphone1.InternetConnecting("optix");
    mySmartphone1.BrowsingInternet("quizlet.com");


    //info for object 2
    std::cout<< "For Object 2: " <<std::endl;

    //calling getter and setter to exhibit attributes
    mySmartphone2.setBrand("Apple");
    std::cout<< "the brand name is: " << mySmartphone2.getBrand() <<std::endl;

    mySmartphone2.setModel("Iphone12");
    std::cout<< "the Model name is: " << mySmartphone2.getModel() <<std::endl;

    mySmartphone2.setResolution("2532x1170");
    std::cout<< "the resolution of phone is: " << mySmartphone2.getResolution() << " pixels" <<std::endl;

    mySmartphone2.setRAM(4);
    std::cout<< "the RAM of phone is: " << mySmartphone2.getRAM() << " GB" <<std::endl;

    mySmartphone2.setROM(256);
    std::cout<< "the ROM of phone is: " << mySmartphone2.getROM() << " GB" <<std::endl;

    mySmartphone2.setStorage(524);
    std::cout<< "theStorage of phone is: " << mySmartphone2.getStorage() << "GB" <<std::endl;

    //calling of member functions in main
    mySmartphone2.MakePhoneCalls(03302573765);
    mySmartphone2.SendMessage(03324257142, "Where are you?");
    mySmartphone2.InternetConnecting("konnect");
    mySmartphone2.BrowsingInternet("instagram.com");



    return 0;
}
  