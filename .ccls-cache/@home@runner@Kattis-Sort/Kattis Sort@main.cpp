//Samuel Peel
// CSCI 130
// 10-12-22
#include <iostream>
using namespace std;

// C++ program for insertion sort

#include <bits/stdc++.h>

// Function to sort an array using
// insertion sort
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1],
		// that are greater than key, to one
		// position ahead of their
		// current position
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// This is code is contributed by rathbhupendra


int main() {
  int N, C;
    cin >> N;
    cin >> C;
  int index;

  int list[N];

  cout << "Enter " << N << " integers that are less than " << C << ": "; // <-- comment out for use in kattis
  
  for(index = 0; index < N; index++){
    cin >> list[index];
    }

  insertionSort(list, N);
  printArray(list, N);
}