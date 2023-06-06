#include<iostream>
using namespace std;

class Garments{
	private:
		char name [20];
	public:
	        get_name (){
	     	virtual calculate_Price()=0;
		 }	
};
class upper:public Garments{

	     virtual get_collar_size()=0;{
		 int collar_size;	
	}
};

class lower:public Garments{
	
	     virtual get_waist()=0;{
	     	int waist;
	     }
};
class shirt:upper{
    
	 claculate_price();
	get_collar_size();
};

class pajama:lower{
	 claculate_price();
	get_waist();
};
class trouser:lower{
	claculate_price();
	get_waist();
	
};
