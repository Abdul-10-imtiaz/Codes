#include<iostream>
using namespace std;

class student{
	private:
		string name;
		int SAP;
		string phone;
		string date_of_birth;
		
	public: 
	    void getstudent(int s_SAP,string s_name,string s_phone, string s_date_of_birth)
	    {
	    	name=s_name;
	    	SAP=s_SAP;
	    	phone=s_phone;
	    	date_of_birth=s_date_of_birth;
	    	
		}
    student(){  //constructor
 	
 }	    
	~student(){ //destructore
		
	}    
	    
	    void input()
		{
	    
	    cout<<"enter the name of studet :";
	    cin>>name;
	    cout<<"enter the SAP ID of studet :";
	    cin>>SAP;
	    cout<<"enter the phone number of studet :";
	    cin>>phone;
	    cout<<"enter the date of birth of studet :";
	    cin>>date_of_birth;
	   }
	    void showdata(){
	    	
	    	cout<<name<<endl;
	    	cout<<SAP<<endl;
	    	cout<<phone<<endl;
	    	cout<<date_of_birth<<endl;
		}
	    
};

int main(){
	
	student stu1;
	stu1.input();
	stu1.showdata();
	return 0;
}
