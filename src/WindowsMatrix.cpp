#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <random>

std::random_device rd;  // Seed for the random number engine
std::mt19937 gen(rd());
std::uniform_int_distribution<> distr(0, 9);

class W_Matrix {
  public:
  static int terminal_scaleY;
  static int terminal_scaleX;

  const int Max_trailLEN = 6; // maximum trail lenght

  const char* Trail_char1 = "@";
  const char* Trail_char2 = "#";
  const char* Trail_char3 = "&";
  const char* Trail_char4 = "$";
  const char* Trail_char5 = ";";
  const char* Trail_char6 = "-";
};

int main() {
  W_Matrix Wmatrix;

  CONSOLE_SCREEN_BUFFER_INFO csbi;

  
  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
  W_Matrix::terminal_scaleX = csbi.srWindow.Right - csbi.srWindow.Left + 1;
  W_Matrix::terminal_scaleY = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
}
