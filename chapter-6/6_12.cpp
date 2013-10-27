/**
 * 6_12.cpp - (Parking Charges)
 *
 * A parking garage charges a $2.00 minimum fee to park for up to 
 * three hours. The garage charges an additional $0.50 per hour for 
 * each hour or part thereof in excess of three hours. The maximum 
 * charge for any given 24-hour period is $10.00. Assume that no car 
 * parks for longer than 24 hours at a time. Write a program that 
 * calculates and prints the parking charges for each of three 
 * customers who parked their cars in this garage yesterday. You 
 * should enter the hours parked for each customer. Your program 
 * should print the results in a neat tabular format and should 
 * calculate and print the total of yesterday’s receipts. The program 
 * should use the function calculateCharges to determine the charge 
 * for each customer.
 */

#include <iostream>
#include <iomanip>
#include <math.h>  

using namespace std;



/**
 * @return the charges owed.
 */

float calculateCharges(float hours)
{
    float total_charge = 2.0;

    if(hours > 3){
        total_charge += (ceil(hours) - 3) * 0.5;
    }

    if(total_charge > 10.00){
        total_charge = 10.00;
    }

    return total_charge;
}

/**
 * Print the report in tabular format.
 */

void printReport(float car1, float car2, float car3)
{
    float car1_charges = calculateCharges(car1);
    float car2_charges = calculateCharges(car2);
    float car3_charges = calculateCharges(car3);
  
    cout << fixed
         << setprecision(2)
         << setfill('0');

    cout << "Car\tHours\tCharge" << endl
         << "1\t" << car1 << "\t$" << car1_charges << endl
         << "1\t" << car2 << "\t$" << car2_charges << endl
         << "1\t" << car3 << "\t$" << car3_charges << endl
         << "TOTAL\t" << car1 + car2 + car3 << "\t$"
         << car1_charges + car2_charges + car3_charges << endl;
}

int main()
{
    float car1, car2, car3;

    cout << "PARKINGMETER.app" << endl
         << "----------------" << endl
         << "Car #1:\t";
    cin >> car1;
    cout << "Car #2:\t";
    cin >> car2;
    cout << "Car #3:\t";
    cin >> car3;

    printReport(car1, car2, car3);

    return 0;
}