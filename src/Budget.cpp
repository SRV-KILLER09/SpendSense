#include "../include/Budget.h"
#include <iostream>

using namespace std;

void Budget::setBudget()
{
    cout << "Enter Monthly Budget: ";
    cin >> monthlyBudget;

    totalSpent = 0;

    cout << "\nBudget Set Successfully!\n";
}

void Budget::addExpense()
{
    double expense;

    cout << "Enter Expense Amount: ";
    cin >> expense;

    if(expense > 0)
    {
        totalSpent += expense;
        cout << "\nExpense Added Successfully!\n";
    }
    else
    {
        cout << "\nInvalid Expense Amount!\n";
    }
}

void Budget::displayBudget()
{
    cout << "\n========== Budget Report ==========";
    cout << "\nMonthly Budget : " << monthlyBudget;
    cout << "\nTotal Spent    : " << totalSpent;
    cout << "\nRemaining      : " << monthlyBudget - totalSpent;

    if(totalSpent > monthlyBudget)
    {
        cout << "\nStatus         : Budget Exceeded!";
    }
    else if(totalSpent >= (monthlyBudget * 0.8))
    {
        cout << "\nStatus         : Warning! Budget Almost Exhausted.";
    }
    else
    {
        cout << "\nStatus         : Budget Under Control.";
    }

    cout << "\n===================================\n";
}

void Budget::resetBudget()
{
    monthlyBudget = 0;
    totalSpent = 0;

    cout << "\nBudget Reset Successfully!\n";
}