#include<iostream>
using namespace std;

class student{
	private:
	 char name;
	 int marks;
	 int section;
	
	public:
		void setstudent (char temp_name,int temp_marks,int temp_section)
		
		{
			name=temp_name;
			marks=temp_marks;
			section=temp_section;
		}
		void getstudent()
		{
			cout<<"\n enter the name =";
			cin>>name;
			cout<<"\n enter the marks =";
			cin>>marks;
			cout<<"\n enter the section =";
			cin>>section;
		}
		
		void showstudent()
		{
			cout<<name<<"\n"<<marks<<"\n"<<section;
			
		}
};

 int main()
 {
 	student student1;
 	student1.getstudent();
 	student1.showstudent();
 	return 0;
 }
