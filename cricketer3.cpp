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
	cricketer():name("\0"),DOB("\0"),shirtno(0),odi_rating(0),test_rating(0),t20_rating(0),start_year(0){
	}
	cricketer(string name,string DOB,int shirtno,int odi_rating,int test_rating,int t20_rating,int start_year){
	}
	
	//functions
	int calculateAge(){
		int birth=stoi(DOB);
		int a=2023-birth;
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
	bowler(string type,int totalWicket,int matchplayed,string name,string dateOFBirth,int shirt,int ODI,int test,int t20,int startingYear):cricketer(name,dateOFBirth,shirt,ODI,test,t20,startingYear){
		
	}
		int calculatebowleravg(){
			int avg=total_wickets/matches_played;
			return avg;
		}
		void updatematches(int c){
			matches_played=matches_played+c;
			cout<<"total matches"<<matches_played<<endl;
		}
		void updateswickets(int t){
			total_wickets=total_wickets+t;
			cout<<"total wickets"<<total_wickets<<endl;		
		}
		~bowler(){
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
		batsman(string ctype,int cruns,int cbest_scorer,int cmatches_played,string name,string DOB,int ashirtno,int aodi_rating,int atest_rating,int at20_rating,int astart_year):type(ctype),best_scorer(cbest_scorer),total_runs(cruns),matches_played(cmatches_played){
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

}
