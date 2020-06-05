#include <iostream>
using namespace std;

int main() {
  //Declare floating-pt variables.
  double ctemp, ftemp;

  // Prompt and input vlaue of ctemp (Celsius Temp).
  cout << "Input a Celsius temp and press ENTER: ";
  cin >> ctemp;

  // Calculate ftemp (Fahrenheit Temp) and output it.

  ftemp = (ctemp * 1.8) + 32;
  cout << "Fahrenheit temp is: " << ftemp;

  return 0;
}
