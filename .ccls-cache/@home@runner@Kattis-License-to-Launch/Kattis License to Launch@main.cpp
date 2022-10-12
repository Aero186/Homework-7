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
  int listA[n]; 

  fillArray(listA, n);
  
}