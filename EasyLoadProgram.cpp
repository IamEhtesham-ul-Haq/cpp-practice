#include<iostream>
using namespace std;
int main()
{
	string phonenumber;
	int choice, amount;
	cout<<"Please enter your number";
	cin>>phonenumber;
	
	cout<<"Please select your network\nPress 1 for Jazz\nPress 2 for Zong\nPress 3 for Telenor";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"Please enter your easyload amount (min 100)";
			cin>>amount;
			if(amount>=100)
			{
				cout<<"Easyload sent!";
			}
			else
			{
				cout<<"Minimum amount should be 100";
			}
			break;
		case 2:
			cout<<"Please enter your easyload amount (min 50)";
			cin>>amount;
			if(amount>=50)
			{
				cout<<"Easyload sent!";
			}
			else
			{
				cout<<"Minimum amount should be 50";
			}
			break;
		case 3:
			cout<<"Please enter your easyload amount (min 30)";
			cin>>amount;
			if(amount>=30)
			{
				cout<<"Easyload sent!";
			}
			else
			{
				cout<<"Minimum amount should be 30";
			}
			break;
		default:
			cout<<"Not valid choice";
	}
}
