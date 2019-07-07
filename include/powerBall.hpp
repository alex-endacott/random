#ifndef POWERBALL_H
#define POWERBALL_H

#include "randBase.hpp"

class powerBall : public randBase
{
  private:
    int used[4];
    const unsigned int MIN_NUM = 1,
                       MAX_NUM = 69,
                       MAX_POWER_BALL = 26;

  public:
    powerBall() : randBase(){srand(time(0));}

    void run();
};

#endif //POWERBALL_H
