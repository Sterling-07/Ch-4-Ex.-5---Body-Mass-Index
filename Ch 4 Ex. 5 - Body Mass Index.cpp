/* File Name: Chapter 4 - Body Mass Index
* Programmer: Philip Rodgers
* Date: September 2025
* Requirements: Create a program that calculates and displays a person't body mass index and determines whether they are optimal weight, underweight, or overweight. 
*/

#include <iostream>
using namespace std;

int main()
{
	//Create your necessary variables
	double weight, height, BMI;

	//Prompt the user to enter their weight and height
	cout << "Enter your weight in pounds: \n";
	cin >> weight; 
	cout << "Enter you height in inches: \n";
	cin >> height;

	//Create the BMI variable in order to calculate the BMI
	BMI = (weight * 703) / pow(height, 2);

	//Display the user's BMI
	cout << "Your BMI is equal to " << BMI << "\n";
	
	//Determine and display whether the user is optimal weight, overweight, or underweight based off their BMI
	if (BMI >= 18.5 && BMI <= 25)
		{
			cout << "You are optimal weight";
		}
	if (BMI > 25)
		{
			cout << "You are overweight";
		}
	if (BMI < 18.5)
		{
			cout << "You are underweight";
		}
}

