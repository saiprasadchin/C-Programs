#include<iostream>

using namespace std;

int repeatedTwice(int number)
    {
        int digitOne= number % 10;
        number = number/10;
        int digitTwo = number%10;
        if ( digitOne == digitTwo )
        {
            return 1;   
        } else {
            return 0;
        }
    }

int main()
{
    int start,end;
    cout << "\nEnter start number :\n";
    cin >> start;
    cout << "\nEnter end number :\n";
    cin >> end;
    int index=0;
    int array[20];
    for(int i = start; i <= end; i++){
        if( repeatedTwice(i) == 1 )
        {
            array[index++] = i; 
        }
    }
    array[index++] = '\0';
    
    for(int i = 0;array[i] != '\0';i++){
        cout <<array[i] <<endl;
    }

    return 0;
}