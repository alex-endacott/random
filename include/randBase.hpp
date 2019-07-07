#ifndef RANDBASE_H
#define RANDBASE_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>

using std::time;
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::left;
using std::vector;

class randBase
{
  protected:
    int min, max;
    vector<int> used;

  public:
    randBase(){};
    randBase(int min, int max);
    
    bool alreadyUsed(int num);
    void addToUsed(int num);

    virtual void run() = 0;
};

#endif //RANDBASE_H