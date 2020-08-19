#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int leftSubArray[n1], rightSubArray[n2];

    for (i = 0; i < n1; i++)
        leftSubArray[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        rightSubArray[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (leftSubArray[i] <= rightSubArray[j]) {
            arr[k] = leftSubArray[i];
            i++;
        }
        else {
            arr[k] = rightSubArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftSubArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightSubArray[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right)
{
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << A[i] <<" ";
    cout << endl;
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    cout <<"\nGiven array is : ";
    printArray(arr, sizeOfArray);

    mergeSort(arr, 0, sizeOfArray - 1);

    cout <<"\nSorted array is : ";
    printArray(arr, sizeOfArray);
    return 0;
}
