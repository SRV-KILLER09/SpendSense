#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
#include "Transaction.h"

using namespace std;

class FileManager
{
public:
    void saveData(Transaction &t, string filename);
    void loadData(Transaction &t, string filename);
};

#endif
