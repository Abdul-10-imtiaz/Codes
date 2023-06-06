#include<iostream>
using namespace std;
struct monthly_budget
{
	float housing, utlities, household_expenses, transpotation, food, medical, insurance, entertainment,
		clothing,miscellaneous;
};
void input(monthly_budget a);
void report(monthly_budget x, monthly_budget y);
int main()
{
	monthly_budget a;
	monthly_budget x{};
	a.housing = 5.00;
	a.utlities = 150;
	a.household_expenses = 65.0;
	a.transpotation = 50.0;
	a.food = 250.0;
	a.medical = 30.0;
	a.insurance = 100.0;
	a.entertainment = 150.0;
	a.clothing = 75.0;
	a.miscellaneous = 50.0;

	input(x);
	report(x, a);
}
void input(monthly_budget a)
{
	cout << "Enter the monthly housing expense:";
	cin >> a.housing;
	cout << "Enter the monthly utlities expense:";
	cin >> a.utlities;
	cout << "Enter the monthly household expenses expense:";
	cin >> a.household_expenses;
	cout << "Enter the monthly transpotation expense:";
	cin >> a.transpotation;
	cout << "Enter the monthly food expense:";
	cin >> a.food;
	cout << "Enter the monthly medical expense:";
	cin >> a.medical;
	cout << "Enter the monthly insurance expense:";
	cin >> a.insurance;
	cout << "Enter the monthly entertainment expense:";
	cin >> a.entertainment;
	cout << "Enter the monthly clothing expense:";
	cin >> a.clothing;
	cout << "Enter the monthly miscellaneous expense:";
	cin >> a.miscellaneous;
}
void report(monthly_budget x,monthly_budget y)
{
	float z;
	z = y.housing - x.housing;
	if (y.housing > x.housing)
	{
		cout << "OVER BUDGET FOR HOUSING" << endl;
		cout << z << endl;
	}
	else
	{
		cout << "UNDER AMOUNT" << endl;
		cout << z << endl;
	}
	z = y.utlities - x.utlities;
	if (y.utlities > x.utlities)
	{
		cout << "OVER BUDGET FOR UTLITIES" << endl;
		cout << z << endl;
	}
	else
	{
		cout << "UNDER AMOUNT" << endl;
		cout << z << endl;
	}
	z = y.household_expenses - x.household_expenses;
	if (y.household_expenses > x.household_expenses)
	{
		cout << "OVER BUDGET FOR HOUSEHOLD EXPENSE" << endl;
		cout << z << endl;
	}
	else
	{
		cout << "UNDER AMOUNT" << endl;
		cout << z << endl;
	}
	z = y.transpotation - x.transpotation;
	if (y.transpotation > x.transpotation)
	{
		cout << "OVER BUDGET FOR TRANSPOTATION" << endl;
		cout << z << endl;
	}
	else
	{
		cout << "UNDER AMOUNT" << endl;
		cout << z << endl;
	}
	z = y.medical - x.medical;
	if (y.medical > x.medical)
	{
		cout << "OVER BUDGET FOR MEDICAL" << endl;
		cout << z << endl;
	}
	else
	{
		cout << "UNDER AMOUNT" << endl;
		cout << z << endl;
	}
	z = y.food - x.food;
	if (y.food > x.food)
	{
		cout << "OVER BUDGET FOR FOOD" << endl;
		cout << z << endl;
	}
	else
	{
		cout << "UNDER AMOUNT" << endl;
		cout << z << endl;
	}
	z = y.insurance - x.insurance;
	if (y.insurance > x.insurance)
	{
		cout << "OVER BUDGET FOR INSURANCE" << endl;
		cout << z << endl;
	}
	else
	{
		cout << "UNDER AMOUNT" << endl;
	}
	z = y.entertainment - x.entertainment;
	if (y.entertainment > x.entertainment)
	{
		cout << "OVER BUDGET FOR ENTERTAINMENT" << endl;
		cout << z << endl;
	}
	else
	{
		cout << "UNDER AMOUNT" << endl;
		cout << z << endl;
	}
	z = y.clothing - x.clothing;
	if (y.clothing > x.clothing)
	{
		cout << "OVER BUDGET FOR CLOTHING" << endl;
		cout << z << endl;
	}
	else
	{
		cout << "UNDER AMOUNT" << endl;
		cout << z << endl;
	}
	z = y.miscellaneous - x.miscellaneous;
	if (y.miscellaneous > x.miscellaneous)
	{
		cout << "OVER BUDGET FOR MISCELLANEOUS" << endl;
		cout << z << endl;
	}
	else
	{
		cout << "UNDER AMOUNT" << endl;
		cout << z << endl;
	}	
}
