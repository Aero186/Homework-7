#include <iostream>
using namespace std;

int time(int seconds){
  int hours, mins, secs;
  secs = seconds;
  cout << "The time in seconds is: " << secs << endl;
  mins = (seconds / 60);  
  cout << "The time in minutes is: " << mins << endl;
  hours = (seconds / 3600);
  cout << "The time in hours is: " << hours << endl;
  return;
}

int main (){
  int seconds;
  cout << "Input a time in seconds: ";
  cin >> seconds; 

  time(seconds);
}
