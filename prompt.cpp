#include <iostream>

using namespace std;

int main()
{

	char choice = '!';

	do {

		cout << "[1] Chose Interface" << endl;
		cout << "[2] Usage/Help" << endl;
		cout << "[3] About" << endl;
		cout << "[q] Quit" << endl;
		cout << " " << endl;
		
		cout << "=> ";
		cin >> choice;  // Wait here, don't keep looping

		switch (choice) {
  			case 'q':
    			exit(0);
    			break;
  			case '1':
    			cout << "\nInterface\n" << endl;
    			break;
  			case '2':
  				cout << "\nUsage/Help\n" << endl;
  				break;
  			case '3':
  				cout << "\nMako - Wireshark for terminal. Created by Kyle Timmermans | @KyleTimmermans\n" << endl;
  				break;
  			default:  // Otherwise no an option
  				cout << "\nChoice " << choice << " does not exist. Try Again\n" << endl;
  		}

	} while (choice != 'q'); // Check again


	return 0;
}
