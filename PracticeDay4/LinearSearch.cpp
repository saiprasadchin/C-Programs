#include<iostream>
using namespace std;
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
}
int main() 
{ 
    int array[] = { 23, 64, 81, 17, 5 }; 
    int sizeOfArray = sizeof(array) / sizeof(array[0]); 
    int number = 81; 
  
    int index = search(array, sizeOfArray, number); 
    if (index == -1) 
        cout << "\nElement is not present in the array\n"; 
    else
        cout << "\nElement found at position : " << index; 
  
    return 0; 
}