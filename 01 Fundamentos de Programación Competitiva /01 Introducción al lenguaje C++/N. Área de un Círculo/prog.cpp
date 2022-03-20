#include <iostream>
#include <cmath>
#include <iomanip>

//#define PI 3.1416

using namespace std;
int main() {
  double radio, area;
  const double PI = 3.1416;
  
  cin >> radio;
  area = PI * pow(radio,2); 
  cout << "El radio es: " << fixed << setprecision(2) << area;

  return 0;
}