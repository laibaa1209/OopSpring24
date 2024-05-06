//programmer: Laiba Bint-e-Zia
//id: 23K-0006
#include<iostream>

class Convert{

    protected:

    int val1;
    double val2;

    public:

    Convert(int v1, double v2 ) : val1(v1), val2(v2) {}
    virtual void compute() {}

};

class L_to_G: public Convert {

    public:

    L_to_G(int v1, double v2 = 0.0) : Convert(v1, v2) {}

    void compute() {
        val2 = val1 * 0.264;
        std::cout<< "litres: "<< val1 <<std::endl << "After conversion to gallons\nGallons: " <<val2 <<std::endl;

    }
};
class F_to_C: public Convert {

    public:

    F_to_C(int v1, double v2 = 0.0) : Convert(v1, v2) {}

    void compute() {
        val2 = (val1-32) * (5.0/9.0);
        std::cout<< "\n\nFarenheit: "<< val1 <<std::endl << "After conversion to celsius\nCelsius: " <<val2 <<std::endl;
    }
};

int main() {

    Convert *convert;

    L_to_G obj1(4);

    convert = &obj1;
    convert->compute();

    F_to_C obj2(70);

    convert = &obj2;
    convert->compute();

    return 0;
}
