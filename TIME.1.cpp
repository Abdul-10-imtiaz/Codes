#include<iostream>
#include <chrono>
#include <iomanip>
using namespace std;

class Time {
private:
	int hour;
	int min;
	int sec;
	char mode;
public:
	Time() // :hour("\0"), min("\0"), sec("\0"), mode("\0") 
	{
		hour = 11;
		min = 42;
		sec = 51;
		mode = 'PM';
	}
	Time(int hours1, int min1, int sec1, char mode1) 
	{
		hour = hours1;
		min = min1;
		sec = sec1;
		mode = mode1;
	}
	Time(Time& t)
	{
		hour = t.hour;
		min = t.min;
		sec = t.sec;
		mode = t.mode;
	}
	void setHour(int h1) {
		hour = h1;
	}
void setMinutes(int m1) {
		min = m1;
	}
	void setSeconds(int s1) {
		sec = s1;
	}
	void setMode(char d1) {
			mode = d1;
	}
	int gethours() 
	{
		return hour;
	}
	int	getMinutes() {
		return min;
	}
	int getSecondes() {
		return sec;
	}
	char getMode() {
		return mode;
	}

		void displayTime() {
			cout << "The Time is:" << gethours() << "::" << getMinutes() << "::" << getSecondes() << "::" << getMode();
		}
		double convetToseconds() {
			return hour * 3600 + min * 60 + sec;

		}
		double convertToMinutes() {
			return hour * 60 + min + sec/ 60;

		}
double convertToHours() {
			return hour + min / 60.0 + sec/ 3600.0;

		}
		double print24HourFormat() {
			cout<< "Time in 24-hour format: ";
			cout<< setfill('0') << setw(2) << hour << ":";
			cout<< setfill('0') << setw(2) << min << ":";
			cout<< setfill('0') << setw(2) << sec << endl;
		}

		void incrementseconds(int) {
			sec += sec;
			if (sec > 59) {
				min += sec / 60;
				sec %= 60;
				if (min > 59) {
					hour += min / 60;
					min %= 60;
					if (hour > 12) {
						hour %= 12;
						
					}
				}
			}
		}

		void incrementMinutes(int)
		{
		
			min += min;
			if (min > 59) {
				hour += min/ 60;
				min %= 60;
				if (hour > 12) {
                    hour %= 12;
					
				}
			}
		}

	};
	int main() {
		Time t1();
		t1.
		
	}
