#include <iostream>

using namespace std;
void palindrom(int number)
{
    int reminder, sum, temp;
    temp = number;
	sum = 0;
	while(temp > 0)
	{
		reminder = temp % 10;
		sum = sum * 10 + reminder;
		temp = temp / 10;
	}    
    cout << "Given number: " << number << endl;
    cout << "Reversed number: " << sum << endl;
	if(number == sum)
        cout << "Given number is Palindrome." << endl;
    else
        cout << "Given number is not a Palindrome." << endl;
}
int main()
{
    int number;
    cout << "Enter the Number: \n";
    cin >> number;
	palindrom(number);
}