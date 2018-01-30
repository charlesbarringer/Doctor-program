#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
   cout << fName << " " << lName;
}

void personType::setName(string First, string Last)
{
   fName = First;
   lName = Last;
}

string personType::getfName() const
{
   return fName;
}

string personType::getlName() const
{
   return lName;
}

personType::personType(string First, string Last)
{
   fName = First;
   lName = Last;
}