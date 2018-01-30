#include <iostream>
#include "doctorType.h"
#include "patientType.h"
#include "dateType.h"
#include "billType.h"

using namespace std;

int main()
{
   doctorType doctor("Charles", "Barringer", "Pediatrist");
   cout << "__________________________________" << endl;
   cout << "__        Doctor Details        __" << endl;
   cout << "__________________________________" << endl;
   cout << "__ Dr. Name: " << doctor.getfName() << " " << doctor.getlName() << endl;
   cout << "__ Specialty: " << doctor.getSpec() << endl;
   cout << "__________________________________" << endl;
   cout << endl;
  
   dateType dtBth(06, 27, 1979);
   dateType admtDt(1, 10, 2017);
   dateType DcDt(1, 14, 2017);
  
   patientType patient("Maria","Ivanchenko", 15438, 37, dtBth, admtDt, DcDt, doctor);
   cout << "__________________________________" << endl;
   cout << "__       Patient Details        __" << endl;
   cout << "__________________________________" << endl;
   cout << "__ Patient Name: " << patient.getfName() << " " << patient.getlName() << endl;
   cout << "__ Patient ID: " << patient.getPtID() << endl;
   cout << "__ Age: " << patient.getAge() << endl;
   cout << "__ Date Of Birth: ";
   patient.getDoB().printDate();
   cout << endl;
   cout << "__________________________________" << endl;
   cout << endl;

   cout << "__________________________________" << endl;
   cout << "__        Visit Details         __" << endl;
   cout << "__________________________________" << endl;
   cout << "__ Date of Admission: ";
   patient.getAdmtDt().printDate();
   cout << "\n__ Date of Discharge: ";
   patient.getDcDt().printDate();
   cout << "\n__ Doctor Name: "<< patient.getPcNm() << endl;
   cout << "__________________________________" << endl;
   cout << endl;

   billType patientBill(15438, 150, 780, 565);

   cout << "__________________________________" << endl;
   cout << "__       Billing Details        __" << endl;
   cout << "__________________________________" << endl;
   cout << "__ Medicine Cost: " << patientBill.getMedChg() << endl;
   cout << "__ Doctor Fee: " << patientBill.getDrF() << endl;
   cout << "__ Room Charges: " << patientBill.getRmChg() << endl;
   cout << "__ Total pay: " << patientBill.getMedChg() + patientBill.getDrF() + patientBill.getRmChg() << endl;
   cout << "__________________________________" << endl;
  
   system("pause");
   return 0;
}