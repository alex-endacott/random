#ifndef RANDSTRING_H
#define RANDSTRING_H

#include "randBase.hpp"

class randString : public randBase
{
  private:
    char character;
  
  public:
    randString() : randBase(33, 126){srand(time(0));}

    void run();
};

#endif //RANDSTRING_H