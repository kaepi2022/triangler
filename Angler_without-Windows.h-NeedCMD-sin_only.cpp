#include <iostream>
#include <cmath>

using namespace std;

#define M_PI 3.1415

int main(void){
    double ANGLE = 0;
    double RADIAN = 0;
    double SIN = 0;

    while (true){

        std::cout << "Please input Your angle here!(0°～360°) : ";
        std::cin >> ANGLE;

        if (ANGLE <= 360 && ANGLE >= 0){
            break;
        }else {
            //エラー処理用
            std::cout << "Invalid input! :( ... Please try again" << endl;
        }
    }

    RADIAN = ANGLE * M_PI / 180;
    SIN = sin(RADIAN);
    std::cout << "Your sin(" << ANGLE << "°) is " << SIN << " :)" << endl;

    return 0;
}