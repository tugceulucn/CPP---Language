#include <iostream>

using namespace std;

class	Maximum{
	public:
		void get_input()
		{	
			cout << "Pls enter 3 integer value: ";
			for (i = 0; i < 3; i++)
				cin >> a[i];
			hesapla(a);
		}	
		void hesapla(int a[])
		{
			max = a[0];
			for (i=1; i<3; i++)
			{
				if (a[i] > max)
					max = a[i];
			}
			
			cout << "Maximum Value: " << max;
		}
		
	private:
			int a[3], i, max;
};

int main()
{
 Maximum g;
 g.get_input();
}
 
