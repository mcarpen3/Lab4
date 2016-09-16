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
	while (done == false)
	{
	int choice;
	cout << "\n\n---------------------------\n"
		<< "MARS COLONY MAIN MENU\n"
		<< "\n"
		<< "1. Set Mission Parameters\n"
		<< "2. Run Simulation\n"
		<< "3. Quit\n"
		<< "----------------------------\n"
		<< "\nChoice >> ";

	cin >> choice;
	
		if (choice == 1)
		{
			cout << " \nInput Mission Parameters \n";
			cout << "\nfoodGrown-PerDay?: ";
			cin >> foodGrown_PerDay;
			cout << "\ncleanup_PerPersonPerDay?: ";
			cin >> cleanup_PerPersonPerDay;
			cout << "\nfoodCount?: ";
			cin >> foodCount;
			cout << "\nMission Length in days?: ";
			cin >> missionLength;
			cout << "\npeople on mission?: ";
			cin >> peopleCount;
			cout << "\nteam name?: ";
			cin >> teamName;
			// Output the user input values into a menu
			cout << "\nA. Food grown - per day................ " << foodGrown_PerDay << endl;
			cout << "B. Cleanup - per person - per day...... " << cleanup_PerPersonPerDay << endl;
			cout << "C. Starting units of food.............. " << foodCount << endl;
			cout << "D. Mission length in days.............. " << missionLength << endl;
			cout << "E. People on mission................... " << peopleCount << endl;
			cout << "F. Team name........................... " << teamName << endl;
		}
		else if (choice == 2)
		{
			
			int day = 1;
			int oxygenCount = 100;
			int wasteCount = 0;
			bool missionSuccess = true;
			cout << "\nRunning Simulation...\n";
			while ((day <= missionLength) && (missionSuccess == true))
			{
				cout << "\nDay " << day << " of " << missionLength << ": \n\n"
					<< foodGrown_PerDay << " units of food grown\n"
					<< foodConsumed_PerPersonPerDay << " units of food consumed\n"
					<< wasteCreated_PerPersonPerDay << " units of waste created\n"
					<< cleanup_PerPersonPerDay << " units of cleanup created\n"
					<< oxygenCreated_PerDay << " units of oxygen created\n"
					<< oxygenUsed_PerPersonPerDay << " units of oxygen used\n";
				foodCount = foodCount + foodGrown_PerDay;
				foodCount = foodCount - foodConsumed_PerPersonPerDay * peopleCount;
				wasteCount = wasteCount + wasteCreated_PerPersonPerDay * peopleCount;
				wasteCount = wasteCount - cleanup_PerPersonPerDay * peopleCount;
				oxygenCount = oxygenCount + oxygenCreated_PerDay;
				oxygenCount = oxygenCount - oxygenUsed_PerPersonPerDay * peopleCount;
				cout << "\nAMOUNT OF SUPPLIES TODAY\n"
					<< "-------------------------";
				cout << "\nFood count: " << foodCount;
				cout << "\nWaste count: " << wasteCount;
				cout << "\nOxygen count :" << oxygenCount;
				cout << "\nEnter anything to go to the next day: ";
				int temp;
				cin >> temp;


				if ((foodCount <= 0)|| (wasteCount > 20)|| (oxygenCount < 0))
				{
					cout << "\n\nMISSION FAILED!!\n\n";
					missionSuccess = false;
				}
				else if (day == missionLength)
				{
					cout << "\n\nMISSION SUCCESS!!\n\n";
					missionSuccess = false;
				}
				
				day++;



			}
		}



		else

			done = true;
	}
	return 0;
}
