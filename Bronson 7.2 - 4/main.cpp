//Samuel Peel
//CSCI 130
//10-12-22
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int resistance[5] = {16, 27, 39, 56, 81};
  double current[5];
  double power[5];

  cout << "Input 5 values (seperated by a space) for current: ";
    int index;
    for(index = 0; index < 5; index++){
    cin >> current[index];}

  cout << "Resistance values are: " << endl;
    for (index = 0; index < 5; index++){
    cout << resistance[index] << " ";
    cout << endl; }
  
  cout << "Current values are: " << endl;
   for (index = 0; index < 5; index++){
    cout << current[index] << " ";
    cout << endl; }

  cout << "Power values are: " << endl;
    for(index = 0; index < 5; index++){
      power[index] = ( resistance[index] * pow( current[index], 2 ) );
    cout << power[index] << " ";
    cout << endl; }
}