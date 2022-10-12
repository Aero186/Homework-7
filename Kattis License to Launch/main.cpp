//Samuel Peel
//CSCI 130
//10-12-22
#include <iostream>
using namespace std;

void fillArray(int list[], int listSize){
  cout << "Enter " << listSize << " integers: "; // <-- comment out for use in kattis

  int index;

  for(index = 0; index < listSize; index++)
    cin >> list[index];
    

  return;
}

int main() {
  int n, i;
    n = 5;
    i = 0;
  int list[n]; 
  int mini;

  fillArray(list, n);
  
  for ( i ; i < n; i++){
  if ( list[mini] > list[i] )
      mini = i;
  }
    cout << mini;
}
