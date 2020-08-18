#include<iostream>
using namespace std;
int binarySearch(int arr[], int left, int right, int number) 
{ 
    if (right >= left) { 
        int mid = left + (right - left) / 2; 
  
        if (arr[mid] == number) 
            return mid; 

        if (arr[mid] > number) 
            return binarySearch(arr, left, mid - 1, number);  
        return binarySearch(arr, mid + 1, right, number); 
    } 
    return -1; 
}
int main() 
{ 
    int array[] = { 5, 17, 23, 64, 81 }; 
    int number = 17; 
    int sizeOfArray = sizeof(array) / sizeof(array[0]); 
    int index = binarySearch(array, 0, sizeOfArray - 1, number); 

    if (index == -1) 
        cout << "\nElement is not present in the array\n"; 
    else
        cout << "\nElement found at position : " << index; 

                
    return 0; 
} 