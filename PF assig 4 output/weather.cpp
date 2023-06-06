#include<iostream>
using namespace std;
const short months = 12;	//the constant size used for all of the arrays
char MONTHS[months][10] = { "January", "February", "March", "April", "May",
			    "June", "July", "August", "September", "October",
			    "November", "December" } ; //months of the year

struct Weather_data
{
	float total_rainfall;
	float high_temp;
	float low_temp;
	float avg_temp;
	string month;
};
void setAverage(Weather_data [], int);
double arrayAverage(Weather_data [], string);
void max_min_temp(Weather_data [], short&, short&);
void getData(Weather_data []);
void lastBits(Weather_data []);
int main()
{
	Weather_data array[months];

	getData(array);		//stores and shows the data to the user

	//shows the average rainfall, average temperature,
	//highest temperature, and lowest temperature of the year
	lastBits(array);

	return 0;
	
}
void 	setAverage(Weather_data array[],int i )
{
	array[i].avg_temp=(array[i].high_temp+array[i].low_temp)/2;
}
 double arrayAverage(Weather_data array [], string choice)
{
	double average = 0;		//stores the average
	//the choice for average temperature
	if(choice == "temp")
	{
	
		//standard loop that sums all the elements in the array
		for(int i = 0; i < months; i++)
			average += array[i].avg_temp;

		//divides by the months to get the average
		return (average / months);
	}

	//the choice for average rainfall
	if(choice == "rain")
	{
		//standard loop that sums all the elements in the array
		for(int i = 0; i < months; i++)
			average += array[i].total_rainfall;

		//divides by the months to get the average
		return (average / months);
	}
}

//Function that looks for the lowest and highest temperature in the 
//Weather array, the reference parameters are used in the lastBits function
void max_min_temp(Weather_data array [], short & max_pos, short & min_pos)
{
	//assumes the minimum and maximum are the first elements
	double min = array[0].low_temp, max = array[0].high_temp;
	min_pos = 0;
	max_pos = 0;
	
	//loop that determines the maximum and minimum temperatures in the array
	for(int i = 1; i < months; i++)
	{
		//changes the min to a smaller value and updates the position
		if(min > array[i].low_temp)
		{
			min = array[i].low_temp;
			min_pos = i;
		}
		
		//changes the max to a higher value and updates the position
		if(max < array[i].high_temp)
		{
			max = array[i].high_temp;
			max_pos = i;
		}
	}
}

//Starting function of the program
//Asks the user to input the highest and lowest temperatures
//for the respectives months
void getData(Weather_data array[])
{
	cout << "Let's do some weather statistics. " << endl;

	cout << "We'll do the total rainfall plus "<< endl;
	cout << "highest and lowest temperatures" << endl;
	cout << "according to months ranging from -100 to 140 degrees "<< endl;
	cout <<	"Fahrenheit." << endl;
	//loop that fills the array with the user data
	for(int i = 0; i < months; i++)
	{
		//the respective month
		cout << "From " <<  MONTHS[i] << ": " <<  endl;

		cout << "Total rainfall: \t";

		cin >> array[i].total_rainfall;

		//validation in case the user puts a negative value
		while(array[i].total_rainfall < 0)
		{
			cout << endl << "Please enter something that isn't negative. ";

			cout << "Total rainfall: \t";

			cin >> array[i].total_rainfall;
		}

		cout << "Highest temperature: \t";

		cin >> array[i].high_temp;
	
		//validation in case the user puts a temperature higher than 140
		//or less than -100 degrees Fahrenheit
		while((array[i].high_temp < -100) or (array[i].high_temp > 140))
		{
			cout << endl << "Input a temperature " << endl << "ranging from -100 to 140 degrees Fahrenheit. "<< endl;

			cout << "Highest temperature: \t";

			cin >> array[i].high_temp;
		}

		cout << "Lowest temperature: \t";

		cin >> array[i].low_temp;

		//validation in case the user puts a temperature higher than 140
		//or less than -100 degrees Fahrenheit or inputs a lowest temperature
		//that is higher than the highest temperature
		while((array[i].low_temp < -100) or (array[i].low_temp > 140)
			   or (array[i].low_temp > array[i].high_temp))
		{
			cout << "Either you need to input a temperature " << endl << "ranging from -100 to 140 degrees " << endl << "Fahrenheit or your lowest is bigger than the highest. " << endl;

			cout << "Lowest temperature: \t";

			cin >> array[i].low_temp;
		}

		//calcultes the avtemp from the structure Weather
		setAverage(array, i);

		cout << endl;
	}
}

//Function that shows the average rainfall, average temperature,
//highest temperature, and lowest temperature of the year
void lastBits(Weather_data array[])
{
	short max_pos, min_pos;		//the position for their respective roles

	max_min_temp(array, max_pos, min_pos);	//gets both positions

	cout << "Now to show the last bits of the year. " <<  endl;
	//Shows the last part of the data(the yearly data)
	cout << "Average rainfall: \t " << arrayAverage(array, "rain") << endl
		 << "Highest temperature: \t " << array[max_pos].high_temp << " (on " << MONTHS[max_pos] << ")" << endl;
	cout<< "Lowest temperature: \t " << array[min_pos].low_temp << " (on " << MONTHS[min_pos] << ")" << endl << "Average temperature: \t " << arrayAverage(array, "temp") << endl;
}
