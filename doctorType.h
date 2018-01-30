#ifndef doctorType_H
#define doctorType_H

#include<iostream>
#include<string>
#include "personType.h"
using namespace std;

//inherits from personType class
class doctorType : public personType
{
private :
   string Spec;
public:
  
   //public member function of doctor class
   doctorType(string First = "", string Last = "", string Spec = "");
   void setSpec(string Spec) ;
   string getSpec() ;
};

#endif doctorType_H