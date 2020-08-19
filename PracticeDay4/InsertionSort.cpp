#include<iostream>
using namespace std;

void insertionSort(int array[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

void printArray(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = { 16, 12, 30, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    cout <<"Sorted array : \n";
    printArray(arr, n);

    return 0; 
} 
