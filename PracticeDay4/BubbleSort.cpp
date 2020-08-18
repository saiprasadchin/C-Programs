#include<iostream>
using namespace std;
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
void bubbleSort(int array[], int n) 
{ 
   int i, j; 
   bool swapped; 
   for (i = 0; i < n-1; i++) 
   { 
     swapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (array[j] > array[j+1]) 
        { 
           swap(&array[j], &array[j+1]); 
           swapped = true; 
        } 
     }  
     if (swapped == false) 
        break; 
   } 
} 
void printArray(int array[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << array[i] <<" ";
} 
int main() 
{ 
    int array[] = {50, 34, 25, 12, 22, 11, 80}; 
    int n = sizeof(array)/sizeof(array[0]); 
    bubbleSort(array, n); 
    printf("Sorted array : \n"); 
    printArray(array, n); 
    return 0; 
} 