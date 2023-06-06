#include<iostream>
using namespace std;
struct  customer
{
	string  Name;
	string  Address;
	string City, State; 
	int ZIP=0;
	int Tel_Num=0;
	float Account_Balance=0;
	string	Date_of_Last_Payment;
};
void input_info(customer arr[], int j);
void display_info(customer arr[], int j);
void edit_info(customer arr[], int j, string name);
int main()
{
	int op;
	customer x[2];
	menu:
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "                                   MENU                                  " << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "Enter 1 to input the data of the customer" << endl;
	cout << "Enter 2 to edit data of the customer" << endl;
	cout << "Enter 3 to display the data of customer " << endl;
	cin >> op;
	cout << "-------------------------------------------------------------------------" << endl;
	if (op == 1)
	{
		input_info(x, 2);
		int back;
		cout << "                                Enter 0 to go back to the menu:";
		cin >> back;
		if (back == 0)
		{
			goto menu;
		}
	}
	if (op == 2)
	{
		string a;
		cout << "Enter any name of the customer:";
		cin >> a;
		edit_info(x, 2, a);
		int back;
		cout << "                                Enter 0 to go back to the menu:";
		cin >> back;
		if (back == 0)
		{
			goto menu;
		}
	}
	if (op == 3)
	{
		display_info(x, 2);
		int back;
		cout << "                                Enter 0 to go back to the menu:";
		cin >> back;
		if (back == 0)
		{
			goto menu;
		}
	}
}
void input_info(customer arr[], int j)
{
	for (int i = 0; i < j; i++)
	{
		cout << "Enter the name of the customer " << i + 1 << ":";
		cin >> arr[i].Name;
		cout << "Enter the address of the customer " << i + 1 << ":";
		cin >> arr[i].Address;
		cout << "Enter the name of city in which the customer lives " << i + 1 << ":";
		cin >> arr[i].City;
		cout << "Enter the name of state in which the customer lives " << i + 1 << ":";
		cin >> arr[i].State;
		cout << "Enter the ZIP code " << i + 1 << ":";
		cin >> arr[i].ZIP;
		cout << "Enter the Telephone number of the customer " << i + 1 << ":";
		cin >> arr[i].Tel_Num;
		cout << "Enter the account balance of the customer " << i + 1 << ":";
		cin >> arr[i].Account_Balance;
		cout << "Enter the date of last payment of the customer " << i + 1 << ":";
		cin >> arr[i].Date_of_Last_Payment;
		cout << "-------------------------------------------------------------------------" << endl;
	}
}
void edit_info(customer arr[],int j, string name)
{
	for (int i = 0; i < j; i++)
	{
		if (arr[i].Name == name)
		{
			cout << "Enter the address of the customer:";
			cin >> arr[i].Address;
			cout << "Enter the name of city in which the customer lives:";
			cin >> arr[i].City;
			cout << "Enter the name of state in which the customer lives:";
			cin >> arr[i].State;
			cout << "Enter the ZIP code:";
			cin >> arr[i].ZIP;
			cout << "Enter the Telephone number of the customer:";
			cin >> arr[i].Tel_Num;
			cout << "Enter the account balance of the customer:";
			cin >> arr[i].Account_Balance;
			cout << "Enter the date of last payment of the customer:";
			cin >> arr[i].Date_of_Last_Payment;
		}
	}
}
void display_info(customer arr[], int j)
{
	for (int i = 0; i < j; i++)
	{
		cout << "-------------------------------------------------------------------------" << endl;
		cout << "                   INFORMATION OF " << i + 1 <<" CUSTOMER  "<< endl;
		cout << "-------------------------------------------------------------------------" << endl;
		cout << "NAME:" << arr[i].Name << endl;
		cout << "ADSRESS:" << arr[i].Address << endl;
		cout << "CITY:" << arr[i].City << endl;
		cout << "STATE:" << arr[i].State << endl;
		cout << "ZIP CODE" << arr[i].ZIP << endl;
		cout << "TELEPHONE NUMBER:" << arr[i].Tel_Num << endl;
		cout << "ACCOUNT BALANCE:" << arr[i].Account_Balance << endl;
		cout << "DATE OF LAST PAYMENT:" << arr[i].Date_of_Last_Payment << endl;
	}
}
