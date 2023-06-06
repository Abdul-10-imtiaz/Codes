#include<iostream>
using namespace std;

class teacher {
	
	private:
	char name;
	int salary;
	int age;
	
	public:
		void setteacher (char temp_name,int temp_salary,int temp_age)
		
		{
			name=temp_name;
			salary=temp_salary;
			age=temp_age;
		}
		void getteacher()
		{
			cout<<"\n enter the name =";
			cin>>name;
			cout<<"\n enter the salary =";
			cin>>salary;
			cout<<"\n enter the age =";
			cin>>age;
		}
		
		void showteacher()
		{
			cout<<name<<"\n";
			cout<<salary<<"\n";
			cout<<age<<"\n";
			
		}
};
 int main(){
 
 teacher teacher1;
 teacher1.getteacher();
 teacher1.showteacher();
 return 0;
}
