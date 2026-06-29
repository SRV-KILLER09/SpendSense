#include "../include/Analytics.h"
#include <iostream>

using namespace std;

void Analytics::showSummary(Transaction &t)
{
    cout << "\n----- Analytics -----" << endl;
    cout << "Total Income  : " << t.income << endl;
    cout << "Total Expense : " << t.expense << endl;
    cout << "Balance       : " << t.income - t.expense << endl;
}
