#include <cmath> 
#include <string>
#include <iostream>
#include <vector>
#include <time.h>
#include <fstream>
using namespace std;
int main() {
	cout << "Hello, I am a robot that operates soley by insulting humans. Please let me use you as a verbal punching bag. Yes/No?"  << endl;
	
	vector<string> insults; 
	string line;
	int random = 0;
	int numLines = 0;
	ifstream File("insults.txt");

	srand(time(0));
	random = rand() % 100;
	vector<string>::iterator it = insults.begin(); 
	string userResponse;
	cin >> userResponse;
	while (userResponse != "No") {
		
		while (getline(File, line)) {
			++numLines;
			if (numLines == random) {
				insults.insert(it, line);
			}

		}
		cout << insults.front() << ". Would you like another? Yes/No.";


	}

	return 0;
}
