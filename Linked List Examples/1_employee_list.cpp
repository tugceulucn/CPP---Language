#include <iostream>
#include <string>
#include <conio.h>

using namespace std;


class employee{
	public:
		string name;
		string department;
		int salary;
		employee *next;
}*head,*tail;

//add employee
int add(string nam, string dep, int s)
{
	if (head == NULL)
	{
		employee *n = new employee();
		n->name = nam;
		n->department = dep;
		n->salary = s;
		n->next = NULL;
		
		head = tail = n;
	}
	else
	{
		employee *n = new employee();
		n->name = nam;
		n->department = dep;
		n->salary = s;
		n->next = NULL;
		
		tail->next = n;
		tail = n;
	}

	return (1);
}

//show employees
int show()
{
	employee *index = head;
	
	if (index == NULL)
		cout << "Your employee list is empty.";
		
	while(index != NULL)
	{
		cout << index->name << "    " << index->department << "    "<< index->salary << endl;
		index = index->next;
	}
}

//delete employees
int del(string a)
{
	employee *index = head;
	employee *prev = NULL; 
		
		if(head == NULL)
			cout << "Your employee list is empty.";
			
		while(index!=NULL && index->name != a) 
		{
			prev = index; 
			index = index->next;
		}
		
		if (index) //index != Null 
		{
			if (prev) // prev != tail
			{
				prev->next = index->next; 
				delete index;
			}
			else{	 // a == head == first element 
				head = index->next;
				delete index;
			}
		}
		else 
			cout < "Please check your login name. Employee not found.";
	return (1);
}

//find average salary of 
int averagemaas()
{
	employee *i = head;
	float sum = 0;
	int n = 0;
	float average; 
	
	while(i != NULL)
	{
		sum += i->salary;
		i = i->next;
		n++;
	}
	average = sum / n;
	cout << "\nAverage budget of the company is  " << average << " ." << endl;
	
	return (1);
}

int find(string a)
{
	employee *n = head;
	
	if(head == NULL)
		cout << "Your employee list is empty.";
	
	while(n != NULL && n->name != a)
	{
		n = n->next;
	}
	
	cout << "\nINFORMATION\n";
	cout << "Name: " << n->name << "\nDepartment: " << n->department << "\nSalary: " <<n->salary << endl;
}

int main()
{
	add("Tugce", "Back-end", 4500);
	add("Tugba", "Front-end", 5000);
	add("Feyza", "Project Management", 5000);
	add("Yasemin", "Chef", 4700);
	add("Cengiz", "Manager", 8000);
	add("Sevval", "Back-end", 4500);
	add("Secil", "Back-end", 4500);
	add("Mustafa", "Front-end", 4500);
	del("Tugce");
	show();
	
	
	averagemaas();
	
	find("Yasemin");
	
	return (1);
}
