// Lab 8.4
// Programmer: Rayona Young
// Editor(s) used: PyCharm CE
// Compiler(s) used: LLVM-GCC
//
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

string actualPass = "P@ssw0rd";
int result = 0;

int passCheck() //function to validate user inputted password against predefined password
{
    while(true)
    {
        string passInput;
        cout << "Enter the password: ";
        getline(cin, passInput);

        if (passInput == actualPass) break;
        cout << "INVALID" << endl;
        result += 1;

        if (result == 3) break;  //give user 3 tries to enter correct password

     } //while

     return result;

} //passCheck

int main ()
{
    while (true)
    {
        passCheck();

        if (result == 3) break; //exit the program after 3 failed password attempts

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
        break;
    } //while

} //main