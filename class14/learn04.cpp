#include <iostream>
#include <cstring>
using namespace std;

enum img_type {JPG, PNG, BMP};

struct image
{
    char name[20];
    int width;
    int height;
    img_type type;
};

void details(image*);

int main()
{
    image backg = {"profile", 720, 480, BMP};
    details(&backg);

    return 0;
}

void details(image *ptr)
{
    // vendo o tipo da imagem para exibição
    char typeStr[2][4];
    if (ptr->type == JPG) {
        strcpy(typeStr[0], "jpg");
        strcpy(typeStr[1], "JPG");
    }
    else if (ptr->type == PNG) {
        strcpy(typeStr[0], "png");
        strcpy(typeStr[1], "PNG");
    }
    else {
        strcpy(typeStr[0], "bmp");
        strcpy(typeStr[1], "BMP");

    }
    
    cout << "A imagem \"" << ptr->name << "." << typeStr[0]
         << "\" com tamanho " << ptr->width << "x" << ptr->height
         << " tem formato " << typeStr[1] << ".\n";
}
