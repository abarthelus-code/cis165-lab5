
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double principal;
    double rate;
    double amount;
    double interest_earned;
    double interest_rate_percent;
    int times_compounded;

    cout << "Enter principal: ";
    cin >> principal;

    cout << "Enter annual interest rate (%): ";
    cin >> rate;

    cout << "Enter times compounded: ";
    cin >> times_compounded;

    interest_rate_percent = rate;
    rate = rate / 100;

    amount = principal * pow(1.0 + rate / times_compounded, times_compounded);

    interest_earned = amount - principal;

    cout << fixed << setprecision(2);

    cout << endl << setw(20) << "Interest Rate:" << interest_rate_percent << "%" << endl;
    cout << setw(20) << "Times Compounded:" << times_compounded << endl;
    cout << setw(20) << "Principal:" << "$" << principal << endl;
    cout << setw(20) << "Interest Earned:" << "$" << interest_earned << endl;
    cout << setw(20) << "Amount in Savings:" << "$" << amount << endl;

    return 0;
}
