#include "../include/FileManager.h"
#include <fstream>
#include <iostream>

using namespace std;

void FileManager::saveData(Transaction &t, string filename)
{
    ofstream file(filename);

    if(!file)
    {
        cout << "Unable to open file.\n";
        return;
    }

    file << t.income << endl;
    file << t.expense << endl;

    file.close();

    cout << "Data Saved Successfully!\n";
}

void FileManager::loadData(Transaction &t, string filename)
{
    ifstream file(filename);

    if(!file)
    {
        cout << "File not found.\n";
        return;
    }

    file >> t.income;
    file >> t.expense;

    file.close();

    cout << "Data Loaded Successfully!\n";
}
