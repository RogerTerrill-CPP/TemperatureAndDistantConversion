#include <iostream>
using namespace std;

//Prototyes for each function
int getTempInF(int& tempF);
int getDistInMiles(int& miles);
double convertFtoC(int celcius);
double convertMilesToMeters(int meters);
void displayResults(int tempInF, double tempInC, int distInMiles, double distInMeters);

int main()
{
	int tempF, miles;
	double celcius, meters;
	getTempInF(tempF);
	getDistInMiles(miles);
	celcius = convertFtoC(tempF);
	meters = convertMilesToMeters(miles);
	displayResults(tempF, celcius, miles, meters);

	return 0;
}


/*******************************************************
Name            :   getTempInF(int& tempF)
Arguments       :   none
Returns         :   tempF
Precondition    :   int& tempF must be declared
Postcondition   :   Will change the value of tempF to inputed value
					and returned to main function
*******************************************************/
int getTempInF(int& tempF)
{
	//Ask the user to enter a value for fahrenheit
	cout << "Please enter an integer for degrees in Faranheit: ";

	//User inputs an integer for tempF
	cin >> tempF;

	//Return value inputed
	return tempF;
}


/*******************************************************
Name            :   getDistInMiles(int& miles)
Arguments       :   none
Returns         :   miles
Precondition    :   int& miles must be declared
Postcondition   :   Will change the value of miles to inputed value
					and returned to main function
*******************************************************/
int getDistInMiles(int& miles)
{
	//Ask the user to enter a value for miles
	cout << "Please enter an integer for distance in miles: ";

	//User inputs an integer for miles
	cin >> miles;

	//Return value inputed
	return miles;
}


/*******************************************************
Name            :   convertFtoC(int tempF)
Arguments       :   celcius
Returns         :   celcius
Precondition    :   int& tempF must be declared and passed a value
Postcondition   :   Will calculate the value of celcius and returned to main function
and returned to main function
*******************************************************/
double convertFtoC(int tempF)
{
	//Calculate to celcius
	double celcius = (5.0 / 9) * (tempF - 32);

	//Return the value of celcius
	return celcius;
}

/*******************************************************
Name            :   convertMilesToMeters(int miles)
Arguments       :   miles
Returns         :   miles
Precondition    :   int miles must be declared and passed a value
Postcondition   :   Will calculate the value of meters and returned to main function
and returned to main function
*******************************************************/
double convertMilesToMeters(int miles)
{
	//Calculate to celcius
	double meters = miles * 1609.34;

	//Return the value of celcius
	return meters;
}

/*******************************************************
Name            :   displayResults(int tempInF, double tempInC, int distInMiles, double distInMeters)
Arguments       :   none
Returns         :	none
Precondition    :   int miles, tempInC, distInMiles and distInMeters
					must be declared and passed a value
Postcondition   :   Will display the original values as well as the converted values
*******************************************************/
void displayResults(int tempInF, double tempInC, int distInMiles, double distInMeters)
{
	//Displays the inputed data as well as converted values
	cout << "The temperature in fahrenheit you entered is: " << tempInF << endl;
	cout << "The temperature converted to celcius is: " << tempInC << endl;
	cout << "The distance in miles you entered is: " << distInMiles << endl;
	cout << "The distance converted into meters is: " << distInMeters << endl;
}
/*
Name			:	homework4
Arguements		:	int tempF, miles, tempInF, distInMiles
					double celcius, meters, tempInC, distInMeters
Return			:	celcius, meters
Definition		:	A function that converts fahrenheit to celcius and miles to meters
*/
