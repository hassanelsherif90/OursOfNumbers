#include <iostream>
#include <string>

using namespace std;

float ReadPosativeNumber(string Message) {
	float Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while ( Number <= 0);
	return Number;
}

float HoursToDay(float Hours) {
	return (float) Hours / 24;
}
float DaysToWeeks(float Days) {
	return (float) Days / 7;
}

float HoursToWeeks(float Hours) {
	return (float)Hours / 24 / 7;
}

int main() {

	float HoursNumber = ReadPosativeNumber("Please Enter Of Hours ");
	float DaysNumbers = HoursToDay(HoursNumber);
	float WeeksNumbers = DaysToWeeks(DaysNumbers);

	cout << endl;

	cout << "Total Hours " << HoursNumber << endl;
	cout << "Total Days " << DaysNumbers << endl;
	cout << "Total Weeks " << WeeksNumbers << endl;


	return 0;
}