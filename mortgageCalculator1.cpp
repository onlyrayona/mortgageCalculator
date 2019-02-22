// Lab 4
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

int p = 250000;  // mortgage amount
double annualInterest = 10;  // annual interest rate
int years = 30;  //payback period in years


// output (calculated) values

double r = annualInterest/12/100;  // monthly interest rate as a decimal
int n = years * 12;  // payback period in months
double m = (p * pow((1+ r), n) * r)/(pow((1+r),n) - 1); // monthly mortgage payment

// echoing input values (unformatted)

cout << "Amount borrowed (programmer input) = $" << p <<endl;
cout << "Annual interest rate (programmer input) = " << annualInterest << "%" << endl;
cout << "Payback period (programmer input) = " << years << " Years" <<endl;

//formatting output

cout.setf(ios::fixed|ios::showpoint);
cout << setprecision(2);
cout << "Monthly payment (calculated output) = $" << m <<endl;

}