#ifndef MEGAMILLIONS_H
#define MEGAMILLIONS_H

#include "randBase.hpp"

class megaMillions : public randBase
{
  private:
    int used[4];
    const unsigned int MIN_NUM = 1,
                       MAX_NUM = 70,
                       MAX_MEGA_BALL = 25;

  public:
    megaMillions() : randBase(){srand(time(0));}

    void run();
};

#endif //MEGAMILLIONS_H
