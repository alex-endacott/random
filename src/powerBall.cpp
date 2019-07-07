#include "../include/powerBall.hpp"

void powerBall::run()
{
  unsigned int num;
  bool hasBeenUsed = false;

  cout << setw(17) << left;
  cout << "Numbers";
  cout << "PowerBall\n";

  for(int i = 0; i < 5; i++)
  {
    do {
      num = rand() % MAX_NUM + MIN_NUM;
      hasBeenUsed = alreadyUsed(num);
    } while(hasBeenUsed);

    cout << setw(3) << left;
    cout << num;
    addToUsed(num);
  }

  num = rand() % MAX_POWER_BALL + MIN_NUM;
  cout << "  " << num;
}
