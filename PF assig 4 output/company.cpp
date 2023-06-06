#include<iostream>
#include<string>
using namespace std;
struct company
{
	string division_name;
	int first_quater_sales;
	int second_quater_sales;
	int third_quater_sales;
	int fourth_quater_sales;
	int total_annuel_sales;
	int average_quarterly_sales;
};
void calcost(company &);
void displayinfo(company);
int main()
{
	company A,B,C,D;
    A.division_name="east";
	A.first_quater_sales=1550;
	A.second_quater_sales=3100;
	A.third_quater_sales=3200;
	A.fourth_quater_sales=7300;	

    B.division_name="west";
	B.first_quater_sales=1100;
	B.second_quater_sales=4100;
	B.third_quater_sales=1300;
	B.fourth_quater_sales=1300;	
   
    C.division_name="north";
	C.first_quater_sales=1400;
	C.second_quater_sales=9100;
	C.third_quater_sales=1800;
	C.fourth_quater_sales=7300;	
	
    D.division_name="south";
	D.first_quater_sales=1600;
	D.second_quater_sales=3100;
	D.third_quater_sales=1200;
	D.fourth_quater_sales=5300;	
    
    calcost(A);
    calcost(B);
    calcost(C);
    calcost(D);
    
    displayinfo(A);
    displayinfo(B);
    displayinfo(C);
    displayinfo(D);
    return 0;
}
void calcost(company &M)
{
	M.total_annuel_sales=M.first_quater_sales+M.second_quater_sales+M.third_quater_sales+M.fourth_quater_sales;
	M.average_quarterly_sales=M.total_annuel_sales/4;
	
}
void displayinfo(company D)
{
	cout << "\n           Sales Data\n";
	cout << "---------------------------------------\n";
    //cout << fixed << showpoint << setprecision(2);
	cout << "Division :          " << D.division_name << endl;
	cout << "Total Sales :       $" << D.total_annuel_sales << endl;
	cout << "Quarterly average : $" << D.average_quarterly_sales << endl;
}

