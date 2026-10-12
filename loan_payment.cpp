
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double loan_amount;
    double annual_rate;
    double monthly_rate;
    double monthly_rate_percent;
    double monthly_payment;
    double amount_paid_back;
    double interest_paid;
    int number_of_payments;

    cout << "Enter loan amount: ";
    cin >> loan_amount;

    cout << "Enter annual interest rate (%): ";
    cin >> annual_rate;

    cout << "Enter number of monthly payments: ";
    cin >> number_of_payments;

    monthly_rate = annual_rate / 100 / 12;

    monthly_rate_percent = monthly_rate * 100;

    monthly_payment = loan_amount * 
    (monthly_rate * pow(1 + monthly_rate, number_of_payments)) /
    (pow(1 + monthly_rate, number_of_payments) - 1);

    amount_paid_back = monthly_payment * number_of_payments;

    interest_paid = amount_paid_back - loan_amount;

    cout << fixed << setprecision(2);

    cout << endl << "Loan Amount: $" << loan_amount << endl;
    cout << "Monthly Interest Rate: " << monthly_rate_percent << "%" << endl;
    cout << "Number of Payments: " << number_of_payments << endl;
    cout << "Monthly Payment: $" << monthly_payment << endl;
    cout << "Amount Paid Back: $" << amount_paid_back << endl;
    cout << "Interest Paid: $" << interest_paid << endl;

    return 0;
}
