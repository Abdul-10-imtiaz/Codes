#include<iostream>
using namespace std;
struct moviedata
{
	string title;
	string Director;
	int year;
	string time;
	int production_cost;
	string first_yr_revenues;
	};
   void	displayinfo(moviedata);
	int main()
	{
		moviedata a,b;
		a.Director= "hennery";
		a.time= "2 hours";
		a.title= "Godzilla";
		a.year= 2018;
		a.production_cost=100000000;
		a.first_yr_revenues="3 million";
		
		b.Director= "Andrew";
		b.time= "2 hours";
		b.title= "Avengers";
		b.year=2020;
		b.production_cost=1000000000;
		b.first_yr_revenues="4 million";
		
		displayinfo(a);
		displayinfo(b);
	
	}
	void displayinfo(moviedata M)
	{
		cout << "\n\n       Move information\n"
	     << "-----------------------------------\n";
	cout << "Title:                 " << M.title << endl;
	cout << "Director:              " << M.Director << endl;
	cout << "Year Released:         " << M.year << endl;
	cout << "Runing Time (minutes): " << M.time << endl;
	cout<<"Production Cost:        " << M.production_cost<<endl;
	cout<<"First Year Revenues     " << M.first_yr_revenues<<endl; 

	}
