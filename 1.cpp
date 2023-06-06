/*Explanation:- Student Management System is a basic C++ program for education establishments to manage student data and manage many other student-related data needs in a school. In this Student Management System project, the user can create, display, Modify.

Also Check:- Geeksforgeeks solution for School, Basic, Easy, Medium, Hard in C++.

Extreme Recommended:- Like our Facebook Page or Join our Facebook Group and Google plus Community for up-to-date for a new post or if you have any Query you can ask there with lots of coders also suggest to your Friends to join and like our page, so we can help our community, and don't forget to Subscribe. Enter your Email and click to subscribe.

Tip:- If you have any query feel free to share with me, and if you like my work please share, comments and subscribe for our new and latest post related to programming this will help you update all about new post this Article.

Solution:-*/

#include<iostream>
#include<string>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main();
void show_data(int searchkey);     //function used to show data to end-user.
void get_data(int i);           //function used to obtain data from end-user.
void search_student(int searchkey);
void add_student();      //This function is used to add record of new student.
void edit_student(int idnumber);   //function is used to edit existing record.   
void fullscreen();
int ts;

struct student    //Structure student is made to store student attributes.
{ 
  int rollno; 
  string name;
  string fname;
  string cell;
  string dob;
  string address;
};

student rec[50];  //This is basic array of defined structure to sore data.
int main()
{
  system("Cls");
  system("color B1");
  int choice;   //int variable used to determine which operation user want to do.
  int idnumber;   //int variable used to record ID number whih user want to edit.
  int searchkey;  //int variable to store student roll_no by which user can search.
  
  cout<<"Enter The Total Number of Student(s)- Max 50: ";
  cin>>ts;

 while(ts--)
 {
  cout<<"\n\t\tWhat do you want to do?"<<endl;
  cout<<"\t\t----------------------"<<endl;
  cout<<"\t\t1-Add student"<<endl;
  cout<<"\t\t2-Edit student"<<endl;
  cout<<"\t\t3-Search student"<<endl;
  cout<<"\t\t4-Quit Program"<<endl;
  cout<<"\t\t----------------------"<<endl;
  cout<<"Enter your choice: ";

  cin>>choice;
  switch(choice)
 {
   case 1:         //If user presses 1 then student adding module would be displayed.
    add_student();
    break;
   case 2:         //If there are no records in array then it will ask the user to input records first.
    if(rec[0].rollno==0)
   {
     cout<<"Please Add sudents first."<<endl;
     system("pause");
    main();
   }
    else         //If records are present in array then it will show table.
   { 
     cout<<endl;
     cout<<"--------------------------------------------------------------------------------"<<endl;
     cout<<"---------------------------Student record Table---------------------------------"<<endl;
     cout<<"--------------------------------------------------------------------------------"<<endl; 
     cout<<"ID   "<<"Roll   "<<"Name      "<<"Father\tCell no.      "<<"DOB          "<<"Address\n\n";
     cout<<"--------------------------------------------------------------------------------"<<endl; 

     for(int i=0;i<=ts;i++)
    {
      show_data(i);     //funtion is called with index value to show data.
     }

     cout<<"--------------------------------------------------------------------------------"<<endl;
     cout<<"Which ID number your want to edit: ";
   
     cin>>idnumber;            //Asking the user at which ID he wants to make a change.
       
    if(idnumber>ts || idnumber<0)  //Validating the ID number.
    {      
          cout<<"\nInvalid ID Number."<<endl;
       }
       else
    {
          edit_student(idnumber);    //Passing ID number to Edit Function.
       }
   }
   break;
   
  case 3:
    if(rec[0].rollno==0)     //If no record exist then ask the user o enter records first.
   {   
     cout<<"Please Add students first."<<endl;
     system("pause");
     main();         //Return to main so user can input new record.
    }
    else
   {
     cout<<"Enter roll_no of student you want to search: ";
     cin>>searchkey;     //roll_no as the search key can be entered by user.
     search_student(searchkey);}
     break;
   case 4:
    return 0;        //Terminating the records.
    break;
   default:         //Default value for ivalid Input. 
    cout<<"Invalid number."<<endl;
    system("pause");
  main();
  }
 }
  return 0;
}

  
void get_data(int i)        //Function for receiving data from user and populatiing the variables with values.
{   
  cout<<"Enter student roll number in  format(1XXX): ";
  cin>>rec[i].rollno;
  cout<<"Enter student name: ";
  cin>>rec[i].name;
  cout<<"Enter student's Father name: ";
  cin>>rec[i].fname;
  cout<<"Enter student's cell phone number: ";
  cin>>rec[i].cell;
  cout<<"Enter student's Date of Birth(dd/mm/yyyy): ";
  cin>>rec[i].dob;
  cout<<"Enter student's Address: ";
  cin>>rec[i].address;
}

void show_data(int searchkey)      //Function for showing data on the screen.
{    
  int i=searchkey;
  cout<<i<<"    ";
  cout<<rec[i].rollno<<"   ";
  cout<<rec[i].name<<"     ";
  cout<<rec[i].fname<<"\t";
  cout<<rec[i].cell<<"   ";
  cout<<rec[i].dob<<"   ";
  cout<<rec[i].address<<"\n\n";
}

void search_student(int searchkey)
{
  for(int i=0;i<=ts;i++)       //Loop thrugh complete array.
 { 
   if(rec[i].rollno==searchkey)    //If roll number matches to search term.
  {   
    cout<<"ID   "<<"Roll   "<<"Name      "<<"Father\tCell no.      "<<"DOB          "<<"Address\n\n";
    show_data(i);       //A function is used inside another function.
   }
  } 
}

void add_student()         //This function is used to add record of new student.
{    
  for(int i=0;i<=ts;i++)
 {
    get_data(i);          //Loop was processed 5 times to get input for 5 students.
  }
  system("CLS");
  cout<<endl;
  cout<<"--------------------------------------------------------------------------------"<<endl;
  cout<<"---------------------------Student record Table---------------------------------"<<endl;
  cout<<"--------------------------------------------------------------------------------"<<endl;
  cout<<"ID   "<<"Roll   "<<"Name      "<<"Father\tCell no.      "<<"DOB          "<<"Address\n\n";
  cout<<"--------------------------------------------------------------------------------"<<endl;

  for(int i=0;i<=ts;i++)
 {
    show_data(i);        //Loop was processed for 5 times to show obtained records.
  }
  cout<<"--------------------------------------------------------------------------------"<<endl;
  cout<<"---------------------------------FINISH-----------------------------------------"<<endl;
  cout<<"--------------------------------------------------------------------------------"<<endl;
  system("pause");

  main();          //Return to main function to again show menu.
}

void edit_student(int idnumber)     //function is used to edit existing record.
{  
  for(int i=0;i<=ts;i++)       //Loop is started.
 {  
   if(idnumber==i)       //Through loop every value is compared with search term.
  {         
    cout<<"\nExisted information about this record.\n\n";
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"ID   "<<"Roll   "<<"Name      "<<"Father\tCell no.      "<<"DOB          "<<"Address\n\n";
    cout<<"--------------------------------------------------------------------------------"<<endl;
    show_data(i);       //Load information for existing record.
    cout<<"\n\nEnter new data for above shown record.\n\n";
    get_data(i);         //Inputing data for that specific record.
    cout<<"\n\nRecord updated successfully."<<endl;
    system("pause");
    main();           //Return to main function.
   }
  }
}
