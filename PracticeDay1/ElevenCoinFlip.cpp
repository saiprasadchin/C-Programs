#include <iostream>
#include <time.h>
using namespace std;
int main() {
	int head = 0;
	int headCounter = 0;
	int tail = 1;
	int tailCounter = 0;
	bool endKey = true;
	srand(time(NULL));
	while (endKey) {
		int coinValue = (rand() % 2);
		if (coinValue == head){
			cout << "Head's it is." << endl;
			if (headCounter == 11)
				endKey = false;
			headCounter++;
		} else {
			cout << "Tail's it is." << endl;
			if ( tailCounter == 11 ) 
				endKey = false;
			tailCounter++;
		}
	}
	cout << "Times coin flipped heads:" << headCounter - 1 << endl;
	cout << "Times coin flipped tails:" << tailCounter - 	1 << endl;
	
}