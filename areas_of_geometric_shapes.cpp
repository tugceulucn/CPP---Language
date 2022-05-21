#include <iostream>
#include <cmath>

using namespace std;

void rectangle(void)
{
	int s, l, area;
	cout << "What is the short and long sides?";
	cin >> s >> l;
	area = s * l;
	cout <<"Reactangle area is " << area;
}

void triangle(void)
{
	int base, height, area;
	cout << "What is the base length?";
	cin >> base;
	cout << "What is the length of the height of the base?";
	cin >> height;
	area = (base * height)/2;
	cout <<"Triangle area is " << area;
}

void square(void)
{
	int side, area;
	cout << "What is the length of one side?";
	cin >> side;
	area = pow(side,2);
	cout <<"Square area is " << area;
}

void trapezoid()
{
	int lower, upper, height, area;
	cout << "What is the lower base length?";
	cin >> lower;
	cout << "What is the upper base length?";
	cin >> upper;
	cout << "What is the length of the height of the base?";
	cin >> height;
	area = (lower + upper)* height / 2;
	cout <<"Trapezoid area is " << area;
}

void parallelogram()
{
	int base, height, area;
	cout << "What is the base length?";
	cin >> base;
	cout << "What is the length of the height of the base?";
	cin >> height;
	area = (base * height);
	cout <<"Parallelogram area is " << area;
}

void circle()
{
	int r, pi, area;
	cout << "What is the radius length?";
	cin >> r;
	cout << "What is the pi?";
	cin >> pi;
	area = pow(r,2) * pi;
	cout <<"Circle area is " << area;
	
}

int	main()
{
	int c;
	cout << "What area do you want to calculate? Enter Number:\n1)Rectangle\n2)Triangle\n3)Square\n4)Trapezoid\n5)Parallelogram\n6)Circle\nYour Choise: ";
	cin >> c;	
	
	switch (c)
	{
		case 1: rectangle(); break;
		case 2: triangle(); break;
		case 3: square(); break;
		case 4: trapezoid(); break;
		case 5: parallelogram(); break;
		case 6: circle(); break;
		default: cout << "Sorry! Your choise is invalid."; break;
	}
	 
	
	
}



