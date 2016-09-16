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
	if (choice == 1)
	{
		cout << " Mission Parameters ";
		cout << "foodGrown-PerDay:";
		cin >> foodGrown_PerDay;
		cout << "cleanup_PerPersonPerDay ";
		cin >> cleanup_PerPersonPerDay;
		cout << "foodCount";
		cin >> foodCount;
		cout << "Missing Lenght in days";
		cin >> missionLength;
		cout << "people on mission";
		cin >> peopleCount;
		cout << "team name";
		cin >> teamName;
		// Test code
		cout << "foodGrown_PerDay: " << foodGrown_PerDay << endl;
		cout << "cleanup_PerPersonPerDay: " << cleanup_PerPersonPerDay << endl;
		cout << "foodCount: " << foodCount << endl;
		cout << "missionLength: " << missionLength << endl;
		cout << "peopleCount: " << peopleCount << endl;
		cout << "teamName: " << teamName << endl;
	}
	else if (choice == 2)
		cout << " Run Simulation ";

	else
		
		done = true;

	return 0;
}
