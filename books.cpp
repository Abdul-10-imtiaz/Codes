#include<iostream>
using namespace std;

class publication{
	private:
	  string title;
	  float price;
    public:
	  publication():title("\0"),price(0){
	}	
	publication(string title ,float price ){
	}
	void get_data(){
		cout<<"the title of book is :"<<title;
		cin>>title;
		cout<<"the price of the book is:"<<price;
		cin>>price;
	}
	
};
class book{
	private:
	  int page;
	  float page_count;
	public:
		book():page("\0"),page_count(0){
		}
		book(int page,float page_count){
		}
	
};

class audio tape{
	
	
};
int main(){
}
