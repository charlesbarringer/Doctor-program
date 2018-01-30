#ifndef personType_H
#define personType_H
#include <string>

using namespace std;

class personType
{
public:
   void print() const;

   void setName(string First, string Last);

   string getfName() const;

   string getlName() const;

   personType(string First = "", string Last = "");

protected:
   string fName;
   string lName;
};

#endif personType_H