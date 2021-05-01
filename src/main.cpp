#include "shark.h"
#include "prompt.h"
#include <iostream>
using namespace std;

int main() 
{
	// Print logo
	shark logo;
	logo.printShark();

	// Start prompt menu
	prompt menu;
	menu.startPrompt();
	
	return 0;
}
