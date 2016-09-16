#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int foodConsumed_PerPersonPerDay = 2;
	const int oxygenCreated_PerDay = 5;
	const int wasteCreated_PerPersonPerDay = 3;
	const int oxygenUsed_PerPersonPerDay = 2;
	bool done = false;
	int foodGrown_PerDay;
	int cleanup_PerPersonPerDay;
	int foodCount;
	int wasteCount;
	int oxygenCount;
	int peopleCount;
	int missionLength;
	string teamName;

	int choice;
	cout << "---------------------------\n"
		<< "MARS COLONY MAIN MENU\n"
		<< "\n"
		<< "1. Set Mission Parameters\n"
		<< "2. Run Simulation\n"
		<< "3. Quit\n"
		<< "----------------------------\n"
		<< "Choice >>";

	cin >> choice;
	
	if (choice == 3)
		done = true;
	return 0;
}
