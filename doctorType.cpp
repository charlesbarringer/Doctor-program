#include "doctorType.h"

doctorType::doctorType(string First, string Last ,string pDrSpec)
{
   setName(First,Last);
   Spec = pDrSpec;
}

void doctorType::setSpec(string pDrSpec)
{
   Spec = pDrSpec;
}

string doctorType::getSpec()
{
   return Spec;
}