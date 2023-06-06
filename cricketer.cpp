#include<iostream>
#include<string>
using namespace std;
class cricketer{
	private:
		string name;
		string DOB;
		int shirtno;
		int odi_rating;
		int test_rating;
		int t20_rating;
		int start_year;
		
	public:
	cricketer():name(0),DOB("\n"),shirtno("\n"),odi_rating("\n"),test_rating("\n"),t20_rating("\n"),start_year("\n"){
	}
	cricketer(string name,string DOB,int shirtno,int odi_rating,int test_rating,int t20_rating,int start_year){
	}
	
	//functions
	int calculateAge(){
		int birth=stoi(DOB);
		int a=2023-DOB;
		return a;
	}
	int calculateExperience(){
		int Exp=2023-start_year;
		return Exp;
	}
	void changeodi_rating(int D){
		odi_rating=D;
		cout<<"ODI_rating"<<odi_rating<<endl;
	}
	void changeTest_rating(int t){
		test_rating=t;
		cout<<"Test_rating"<<test_rating<<endl;
	}
	void changet20_rating(int b){
		t20_rating=b;
		cout<<"t20_rating"<<t20_rating<<endl;
	}
	
	~cricketer(){
	}
	
};

//BOWLWR
class bowler:public cricketer{
	private:
		string type;
		int total_wickets;
		int matches_played;
	public:
	    bowler():type("\0"),total_wickets(0),matches_played(0){
		}
		bowler(string btype,int bwickets,int bmatches_played,string n,int snumber,string dob,int syear,int arate,int trate,int t20 rate):cricketer(n,snumbers.dob,arate,trate,,t20rate,syear),
		type(btype),total_wickets(bwickets),matches_played(bmatches_played){
		}
		int calculatebowleravg(){
			int avg=total_wickets/matches_played;
			return avg;
		}
		void updatematches(int c){
			matchesplayed=matchesplayed+c;
			cout<<"total matches"<<matches_playes<<endl;
		}
		void updateswickets(int t){
			total_wickets=total-wickets+t;
			cout<<"total wickets"<<total_wickets<<endl;		
		}
		~Bowler(){
		}
		
};

//Batsman

class batsman:public cricketer{
	private:
		string type;
		int total_runs;
		int best_scorer;
		int matches_played;
	public:
		batsman():type("\0"),total_runs(0),best_scorer(0),matches_played(0){
		}
		batsman(string ctype,int cruns,int cbest_scorer,int cmatches_played,string_aname,string_aDOB,int_ashirtno,int_aodi_rating,int_atest_rating,int_at20_rating,int_astart_year),type(ctype),best_scorer(cbest_scorer),total_runs(cruns),matches_played(cmatches_played){
		}
		int calculatebatavg(){
			int avg=total_runs/matches_played;
			return avg;
		}
		void updatematches(int t){
			matches_played=matches_played+t;
			cout<<"total matches"<<matches_played<<endl;
		}
		void updateruns(int t){
			total_runs=total_runs+t;
			cout<<"total runs"<<total_runs<<endl;
		}
		~batsman(){
		}
}; 
//All rounder

class Allrounder:public bowler,public batsman{
	Allrounder(){
	}
	~Allrounder(){
	}
};
int main(){
	cricketer cric1;
	cric1.
}
