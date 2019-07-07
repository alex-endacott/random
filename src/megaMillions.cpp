#include "../include/megaMillions.hpp"

void megaMillions::run()
{
  unsigned int num;
  bool hasBeenUsed = false;

  cout << setw(17) << left;
  cout << "Numbers";
  cout << "MegaBall\n";

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

  num = rand() % MAX_MEGA_BALL + MIN_NUM;
  cout << "  " << num;
}
