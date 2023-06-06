#include<iostream>
using namespace std;

class date
{
	private:
		int day;
		int month;
		int year;
		public:
			void setday(int temp_day,int temp_month,int temp_year)
			{
				day=temp_day;
				month=temp_month;
				year=temp_year;
			}
			void getdate()
			{
			
			cout<<"\n enter the day =";
			cin>>day;
			cout<<"\n enter the month =";
			cin>>month;
			cout<<"\n enter the year =";
			cin>>year;
		    }
			
			void showdate()
			{
			cout<<day<<"/"<<month<<"/"<<year;
            }
};
      int main()
   {
   	date date1;
   	date1.getdate();
   	date1.showdate();
   	return 0;
   }      














