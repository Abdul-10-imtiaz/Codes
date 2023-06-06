#include<iostream>
#include<string>
using namespace std;

//------------------------------------* Cricketer *-------------------------------------
class Cricketer{
	private:
		string name, dateOfBirth;
		int shirtNo, odiRating, testRating, t20Rating, startYear;
		
	public:
		//Default Constructor.
		Cricketer() : name("\0"), dateOfBirth("\0"), shirtNo(0), odiRating(0), testRating(0), t20Rating(0), startYear(0){
		}
		
		//Parameterized constructor.
		Cricketer(string n, int sNumber, string dob, int oRate, int tRate, int t20Rate, int sYear) : name(n), dateOfBirth(dob), shirtNo(sNumber), odiRating(oRate), testRating(tRate), t20Rating(t20Rate), startYear(sYear){
		}
		
		//Member Functions
		int calculateAge(){
			int birth = stoi(dateOfBirth);
			int a = 2023-birth;
			return a;
		}		
		int calculateExperience(){
			int exp = 2023-startYear;
			return exp;
		}
		void changeODIRating(int t){
			odiRating = t;
cout<<"ODI Rating: "<<odiRating<<endl;
		}
		void changeTestRating(int t){
			testRating = t;
			cout<<"Test Rating: "<<testRating<<endl;
		}
		void changeT20Rating(int t){
			t20Rating = t;
			cout<<"T20 Rating: "<<t20Rating<<endl;
		}
		
		~Cricketer(){
		}
};
//-------------------------------------*  Bowler *--------------------------------------
class Bowler: public Cricketer{
	private:
		string type;
		int totalWickets , matchesPlayed;
	
	public:
		Bowler() : type("\0"), totalWickets(0), matchesPlayed(0){
		}
		Bowler(string tempType, int tempWickets, int tempMatchesPlayed, string n, int sNumber, string dob, int oRate, int tRate, int t20Rate, int sYear):Cricketer(n, sNumber, dob, oRate, tRate, t20Rate, sYear), type(tempType), totalWickets(tempWickets), matchesPlayed(tempMatchesPlayed){
		}
		int calculateBowlAverage(){
			int avg = totalWickets/matchesPlayed;
			return avg;
		}
		void updateMatches(int t){
matchesPlayed = matchesPlayed + t;
			cout<<"Total Matches: "<<matchesPlayed<<endl;
		}
		void updateWickets(int t){
			totalWickets = totalWickets + t;
			cout<<"Total Wickets: "<<totalWickets<<endl;
		}
		~Bowler(){
		}
};
//------------------------------------*  Batsman  *-------------------------------------
class Batsman: public Cricketer{
	private:
		string type;
		int totalRuns , bestScore , matchesPlayed;
	public:
		Batsman() : type("\0"), totalRuns(0), bestScore(0), matchesPlayed(0){
		}
		Batsman (string tempType, int tempRuns, int tempBestScore, int tempMatchesPlayed, string tempName, int tempShirtNumber, string tempDob, int tempOdiRate, int tempTestRate, int tempT20Rate, int tempStartYear):Cricketer(tempName, tempShirtNumber, tempDob, tempOdiRate, tempTestRate, tempT20Rate, tempStartYear), type(tempType), bestScore(tempBestScore), totalRuns(tempRuns), matchesPlayed(tempMatchesPlayed){
		}
		
		int calculateBatAverage(){
			int avg = totalRuns/matchesPlayed;
			return avg;
}
		void  updateMatches(int t){
			matchesPlayed = matchesPlayed + t;
			cout<<"Total Matches: "<<matchesPlayed<<endl;
		}
		void  updateRuns(int t){
			totalRuns = totalRuns + t;
			cout<<"Total Runs: "<<totalRuns<<endl;
		}
		~Batsman(){
		}
};
//-----------------------------------* All Rounder *------------------------------------
class AllRounder: public Bowler, public Batsman{
	AllRounder(){
	}
	~AllRounder(){
	}
};
