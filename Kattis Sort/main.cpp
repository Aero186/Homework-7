//Samuel Peel
// CSCI 130
// 10-12-22
#include <iostream>
using namespace std;

int main() {
  int N, C;
    cin >> N;
    cin >> C;
  int index;
  //cin N >> C >> endl;
  int list[N];

  cout << "Enter " << N << " integers that are less than " << C << ": "; // <-- comment out for use in kattis
  
  for(index = 0; index < N; index++)
    cin >> list[index];


int BiggestIndex, loc, temp;
  
//increment throught the main array
  for (index = 0; index < N; index++){
    BiggestIndex = index;
    
//incrememnt through each comparison
    for ( loc = index + 1; loc < N; loc++)
      if ( list[loc] > list[BiggestIndex] ){
        BiggestIndex = loc; // location of new smallest index
    }
    
    // make the swap
    temp = list[BiggestIndex];
    list[BiggestIndex] = list[index];
    list[index] = temp;
  }

  for (index = 0; index < N; index++)
    cout << list[index] << " ";

  cout << endl;
}