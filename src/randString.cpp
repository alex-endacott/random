#include "../include/randString.hpp"

void randString::run()
{
  int choice;

  cout << endl << "Enter a number for the length of the string: ";
  cin >> choice;

  cout << endl << "Random string generated:" << endl << endl;

  for (int i = 0; i < choice; i++)
  {
    this->character = (rand() % (this->max - this->min + 1)) + this->min;

    cout << this->character;
  }
}