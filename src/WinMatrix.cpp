#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <random>

std::random_device rd;  // Seed for the random number engine
std::mt19937 gen(rd());
std::uniform_int_distribution<> distr(0, 9);

class WinMatrix {
  public:
  const int Max_trailLEN = 6; // maximum trail lenght

  const char* Trail_char1 = "@";
  const char* Trail_char2 = "#";
  const char* Trail_char3 = "&";
  const char* Trail_char4 = "$";
  const char* Trail_char5 = ";";
  const char* Trail_char6 = "-";
};

void get_consoleSize(int &width, int &height);

int main() {
<<<<<<< Updated upstream:src/WinMatrix.cpp
  WinMatrix matrix;
}
=======
  W_Matrix Wmatrix;

  
}

void get_consoleSize(int &width, int &height) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    } else {
        // If we fail to get the size, we can set a default or handle the error.
        width = 20;
        height = 15;
        // width and height is measured in characters not in pixels
    }
>>>>>>> Stashed changes:src/WindowsMatrix.cpp
