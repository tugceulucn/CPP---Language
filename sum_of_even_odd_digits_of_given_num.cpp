 #include <iostream>

using namespace std;

int main(){
	
//Write a C++ program that finds the sum of the even and odd digits of the given number.

int num, odd = 0, even = 0;
cout<<"Pls enter a number: ";
cin >> num;
 
while(num > 0){
	if (num % 2 == 0)
		even += num % 10;
	else
		odd += num % 10;	
	num = num / 10;	
}
cout<<"Sum of even numbers: "<< even << endl;
cout<<"Sum of odd numbers: "<<odd;
	return 0;
}
 
 
 

