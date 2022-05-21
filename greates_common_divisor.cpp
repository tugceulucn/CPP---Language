#include <iostream>

using namespace std;

int main(){
	
	int a, b, i, gcd;
	cout<<"Enter 2 number: ";
	cin >> a >> b;
	
	
	for(i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    cout<<"Greatest common divisor: "<< gcd;
	return (0);
}
