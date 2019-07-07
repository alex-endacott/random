#include <iostream>
#include <cstdlib>
#include <ctime>

#include "include/randBase.hpp"
#include "include/randString.hpp"
#include "include/powerBall.hpp"
#include "include/megaMillions.hpp"

int main()
{
  char repeat;
  randBase *base;

  base = new megaMillions();

  do
  {
    int choice;
    cout << "\nChoose from the list:\n";
    cout << "1. A random string\n";
    cout << "2. PowerBall numbers\n";
    cout << "3. MegaMillions numbers\n";
    cin >> choice;

    switch(choice)
    {
      case 1:
        base = new randString();
        break;
      case 2:
        base = new powerBall();
        break;
      case 3:
        base = new megaMillions();
        break;
    }  

    base->run();
    
    cout << endl << endl << "Run program again? ";
    cin >> repeat;
   } while (repeat == 'y' || repeat == 'Y');
   
    return 0;
}

