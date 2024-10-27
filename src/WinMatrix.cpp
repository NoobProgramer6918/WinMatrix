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

int main() {
  WinMatrix matrix;
}