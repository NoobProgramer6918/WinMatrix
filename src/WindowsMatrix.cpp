#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <cstdlib>
#include <random>
using std::cout, std::endl;

std::random_device rd;  // Seed for the random number engine
std::mt19937 gen(rd());
std::uniform_int_distribution<> distr(0, 9);

class W_Matrix {
  public:
  static int terminal_scaleY;
  static int terminal_scaleX;

  const int Max_trailLEN = 6; // maximum trail lenght
  static int* ocupied_spaces[25];

  const char* Trail_char1 = "@";
  const char* Trail_char2 = "#";
  const char* Trail_char3 = "&";
  const char* Trail_char4 = "$";
  const char* Trail_char5 = ";";
  const char* Trail_char6 = "-";
};

void getConsoleSize(int &width, int &height);

int main() {
  W_Matrix Wmatrix;

  W_Matrix::ocupied_spaces[0] = 0; // value 0 means the lane is free

  
}

void getConsoleSize(int &width, int &height) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    } else {
        // If we fail to get the size, we can set a default or handle the error.
        width = 25;
        height = 20;
        // size measurment is in characters
    }
}