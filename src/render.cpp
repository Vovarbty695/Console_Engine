#include<iostream>
#include"color.h"
#include"render.h"
#include<string>
#include"error.h"

using namespace std;

void triangle(int height, std::string color){
    string color_code = RESET;

    if(color == "red"){
        color_code = RED;
    }
    else if(color == "blue"){
        color_code = BLUE;
    }
    else if(color == "yellow"){
        color_code = YELLOW;
    }
    else if(color == "green"){
        color_code == GREEN;
    }
    else if(color == "green"){
        color_code == GREEN;
    }
    else if(color == "magenta"){
        color_code == MAGENTA;
    }
    else if(color == "white"){
        color_code == WHITE;
    }
    else if(color == "cyan"){
        color_code == CYAN;
    }
    else{
        cout << Error_Color << endl;
    }

    for (int i = 0; i <= height; i++) {
        // Виведення пробілів зліва
        for (int space = 0; space < height - i; space++) {
            cout << " ";
        }

        // Виведення зірочок зліва
        for (int j = 0; j <= i; j++) {
            cout << color_code << "*";
        }

        // Виведення зірочок справа
        for (int j = 0; j < i; j++) {
            cout << color_code << "*";
        }

        cout << RESET << "\n";
    }
}