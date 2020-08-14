#include <iostream>
using namespace std;
int main() {
	int num;
	string numWord;
	cout << "Enter the number : ";
	cin >> num;
	switch (num) {
		case 1 : 
			numWord = "One";
			break;
		case 2 : 
			numWord = "Two";
			break;
		case 3 : 
			numWord = "Three";
			break;
		case 4 : 
			numWord = "Four";
			break;
		case 5 : 
			numWord = "Five";
			break;
		case 6 : 
			numWord = "Six";
			break;
		case 7 : 
			numWord = "Seven";
			break;	
		case 8 : 
			numWord = "Eight";
			break;	
		case 9 : 
			numWord = "Nine";
			break;	
		default :
			cout << "Invalid input" << endl;
			break;
	}
	cout << numWord << endl;
	return 0;
}
