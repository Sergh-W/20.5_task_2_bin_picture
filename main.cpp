#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main ()
{
    std::srand(std::time(nullptr));

    int picHeight, picWidth, num;

    std::cout << "Please enter the height and width of the picture (separated by a space) in pixels:" << std::endl;
    std::cin >> picHeight >> picWidth;


    std::ofstream picture("..\\pic.txt");

    for (int j = 0; j < picHeight; ++j) {
        for (int k = 0; k < picWidth; ++k) {
            num = std::rand() % 2;
            picture << num;
        }
        picture << std::endl;
    }

     picture.close();
     return 0;
}