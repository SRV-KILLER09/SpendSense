#ifndef BUDGET_H
#define BUDGET_H

class Budget
{
public:
    double monthlyBudget;
    double totalSpent;

    void setBudget();
    void addExpense();
    void displayBudget();
    void resetBudget();
};

#endif