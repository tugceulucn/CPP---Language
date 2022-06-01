#include <iostream>
#include <cmath>

using namespace std;

void BodyMassIndex()
{
	int kg;
	float r, m;
	
	cout << "Your Weight (kg): ";
	cin >> kg;
	cout <<"Your height (m): ";
	cin >> m;
	
	r =  kg / (pow(m,2));
	cout << "Your body mass index is " << r << endl;
	
	if (r < 18.5)
		cout << "You are weak.";
	else if (r >= 18.5 && r <= 24.9)
		cout << "You are normal.";
	else if (r >= 25 && r <= 29.9)
		cout << "You are overweight.";
	else if (r >= 30 && r <= 34.9)
		cout << "You are 1st degree obese.";
	else if (r >= 35 && r <= 39.9)
		cout << "You are 2nd degree obese.";
	else 
		cout << "You are 3rd degree obese.";	
}

/*
int	main()
{
	BodyMassIndex();
}
*/
