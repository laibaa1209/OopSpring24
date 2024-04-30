//programmer: Laiba Bint-e-ZIa
//std id: 23K-0006

#include<iostream>

class ImageData{

    int width;
    float height;
    int* imageData;

    public:

    ImageData(int width, float height, int* imageData) : width(width), height(height), imageData(imageData) {
        this->imageData = new int[5];

        for(int i =0; i < 5; i++ ) {
            this->imageData[i] = imageData[i];
        }

    }

    ImageData(const ImageData& data) : width(data.width), height(data.height), imageData(data.imageData) {
        imageData = new int[5];

        for(int i =0; i < 5; i++ ) {
            imageData[i] = data.imageData[i];
        }
    }

    ~ImageData() {
        delete[] imageData;
    }

    void display() {
        
        std::cout<< "the image data is as follows: \n";
     
        std::cout<< "height: " << height <<std::endl;
        std::cout<< "width: " << width <<std::endl;

        for(int i = 0; i < 5; i++) {
            std::cout<< "image pixels: "<< imageData[i] <<std::endl; 
        }
    }

    void updateImageData() {

        for(int i =0; i < 5; i++) {
        
            if( imageData[i] <= 0 ) {
                imageData[i] = rand() % 225;
            }
        }

    }

};

int main() {

    int data[] = {24, 86, 0, 76, 19};

    ImageData data1(12, 8.3, data);

    ImageData data2 (data1);

    data1.display();
    data2.display();

    data1.updateImageData();
    data2.updateImageData();

    data1.display();
    data2.display();

    return 0;
}