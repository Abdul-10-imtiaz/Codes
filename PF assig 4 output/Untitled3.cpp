#include<iostream>
using namespace std;
struct speaker
{
	string name;
	string tel_num;
	string speaking_topic;
	int fee_requied ;
};
void input_info(speaker arr[], int j);
void edit_info(speaker arr[], int j, string n);
void display_info(speaker arr[], int j);
void display_updated_info(speaker arr[], int j);
void search_info(speaker arr[], int j, string name);
int main()
{
	int op;
	speaker x[2];
menu:
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "                                   MENU                                  " << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "Enter 1 to input the data of the speaker" << endl;
	cout << "Enter 2 to display data of the speaker" << endl;
	cout << "Enter 3 to edit the data of speaker " << endl;
	cout << "Enter 4 to display updated data of the speaker" << endl;
	cout << "Enter 5 to search the data of speaker " << endl;
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
		display_info(x, 2);
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
		string a;
		cout << "Enter name of the speaker you want to edit the data:";
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
	if (op == 4)
	{
		display_updated_info(x, 2);
		int back;
		cout << "                                Enter 0 to go back to the menu:";
		cin >> back;
		if (back == 0)
		{
			goto menu;
		}
	}
	if (op == 5)
	{
		string a;
		cout << "Enter name of the speaker by which you want to search: ";
		cin >> a;
		search_info(x, 2, a);
		int back;
		cout << "                                Enter 0 to go back to the menu:";
		cin >> back;
		if (back == 0)
		{
			goto menu;
		}
	}
}
void input_info(speaker arr[], int j)
{
	for (int i = 0; i < j; i++)
	{
		cout << "-------------------------------------------------------------------------" << endl;
		cout << "                   INFORMATION OF " << i + 1 << " SPEAKER" << endl;
		cout << "-------------------------------------------------------------------------" << endl;
		cout << "Enter the name of the speaker:";
		cin >> arr[i].name;
		cout << "Enter tha telephone number of the speaker:";
		cin >> arr[i].tel_num;
		cout << "Enter the topic of the speach:";
		cin >> arr[i].speaking_topic;
		cout << "Enter the fee requied for the speaker:";
		cin >> arr[i].fee_requied;
	}
}
void edit_info(speaker arr[], int j, string n)
{
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "                   UPDATE INFORMATION OF SPEAKER" << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	for (int i = 0; i < j; i++)
	{
		if (arr[i].name == n)
		{
			cout << "Enter tha telephone number of the speaker:";
			cin >> arr[i].tel_num;
			cout << "Enter the topic of the speach:";
			cin >> arr[i].speaking_topic;
			cout << "Enter the fee requied for the speaker:";
			cin >> arr[i].fee_requied;
		}
	}
}
void display_info(speaker arr[], int j)
{
	for (int i = 0; i < j; i++)
	{
		cout << "-------------------------------------------------------------------------" << endl;
		cout << "                   INFORMATION OF " << i + 1 << " SPEAKER" << endl;
		cout << "-------------------------------------------------------------------------" << endl;
		cout << "NAME:" << arr[i].name << endl;
		cout << "TELEPHONE NUMBER:" << arr[i].tel_num << endl;
		cout << "SPEAKING TOPIC:" << arr[i].speaking_topic << endl;
		cout << "FEE REQUIED:" << arr[i].fee_requied << endl;
	}
}
void display_updated_info(speaker arr[], int j)
{
	for (int i = 0; i < j; i++)
	{
		cout << "-------------------------------------------------------------------------" << endl;
		cout << "                  UPDATED INFORMATION OF " << i + 1 << " SPEAKER" << endl;
		cout << "-------------------------------------------------------------------------" << endl;
		cout << "NAME:" << arr[i].name << endl;
		cout << "TELEPHONE NUMBER:" << arr[i].tel_num << endl;
		cout << "SPEAKING TOPIC:" << arr[i].speaking_topic << endl;
		cout << "FEE REQUIED:" << arr[i].fee_requied << endl;
	}
}
void search_info(speaker arr[], int j, string name)
{
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "                SEARCHED INFORMATION OF CUSTOMER  " << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	for (int i = 0; i < j; i++)
	{
		if (name == arr[i].name)
		{
			cout << "NAME:" << arr[i].name << endl;
			cout << "TELEPHONE NUMBER:" << arr[i].tel_num << endl;
			cout << "SPEAKING TOPIC:" << arr[i].speaking_topic << endl;
			cout << "FEE REQUIED:" << arr[i].fee_requied << endl;
		}
	}
}

