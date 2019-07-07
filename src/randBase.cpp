#include"../include/randBase.hpp"

randBase::randBase(int min, int max)
{
  this->min = min;
  this->max = max;
}

bool randBase::alreadyUsed(int num)
{
  bool found = false;

  for(int i : this->used)
    if(i == num){found = true;}

  return found;
}

void randBase::addToUsed(int num)
{
  this->used.push_back(num);
}