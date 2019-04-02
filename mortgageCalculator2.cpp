// Lab 5
// Programmer: Rayona Young
// Editor(s) used: PyCharm CE
// Compiler(s) used: LLVM-GCC
//

#include <iomanip>
#include <iostream>
using namespace std;
#include <cmath>

int main ()
{

// input values

//code block to read mortgage amount as int from keyboard
int p;   // mortgage amount
cout << "What's the amount borrowed? ";
cin >> p;
cin.ignore(1000,10);

//code block to read annual interest rate as double from keyboard
double annualInterest;  // annual interest rate
cout << "What's the annual interest rate? ";
cin >> annualInterest;
cin.ignore(1000,10);

int years = 30;  //payback period in years


// output (calculated) values

double r = annualInterest/12/100;  // monthly interest rate as a decimal
int n = years * 12;  // payback period in months
double m = (p * pow((1+ r), n) * r)/(pow((1+r),n) - 1); // monthly mortgage payment

// echoing input values (unformatted)

cout << "Amount borrowed (user input) = $" << p <<endl;
cout << "Annual interest rate (user input) = " << annualInterest << "%" << endl;
cout << "Payback period (programmer input) = " << years << " Years" <<endl;

//formatting output

cout.setf(ios::fixed|ios::showpoint);
cout << setprecision(2);
cout << "Monthly payment (output) = $" << m <<endl;

}