#include <iostream>

using namespace std;

int main()
{
	int note;
	
	school:
	cout << "What is your note (0-100)? ";
	cin >> note;
	
	cout << "Your note (0-100): " << note << endl;
	
	if (note < 100 && note > 84)
		cout << "Your note (0-5)  : " << 5;
	else if (note <= 84 && note >= 70)
		cout << "Your note (0-5)  : " << 4;
	else if (note <= 69 && note >= 59)
		cout << "Your note (0-5)  : " << 3;
	else if (note < 59 && note >= 49)
		cout << "Your note (0-5)  : " << 2;
	else if (note < 49 && note >= 0)
		cout << "Your note (0-5)  : " << 1;
	else 
		{ 
		cout <<	"Invalid note. Try again.\n"; 
		goto school; 
		}
	
	return (0);
}
