#include <iostream>

using namespace std;

class reverse
{
	private:
		int num;
		int rev;
		
		
	public:
		int getNum()
		{
			cout << "Enter a number: ";
			cin >> num;
			return (num);	
		}
		
		int calculate()
		{
			getNum();
			rev = 0;
			while(num>0)
			{
				rev *= 10;
				rev += num % 10;
				num /= 10;
			}
			return rev;
		}
		
		void show()
		{
			cout << "Reverse Number: " << calculate();
		}		
};

int	main()
{
	reverse finito;
	finito.show();
	return (0);
}
