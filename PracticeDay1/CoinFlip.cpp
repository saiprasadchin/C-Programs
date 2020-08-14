#include <iostream>
#include <time.h>
using namespace std;
int main() {
	int head = 0;
	int tail = 1;
	srand(time(NULL));
	int coinValue = (rand() % 2);
	
	if (coinValue == head){
		cout << "Head's it is." << endl;
	} else {
		cout << "Tail's it is." << endl;
	}
}