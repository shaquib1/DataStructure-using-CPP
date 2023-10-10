

// static funtion don't need object to access the function 
// static function has no this keyword because no object so no this keyword
// static function access only static data member it doesn't access the non-static data member either throw error



#include <iostream>
using namespace std;


class Account{

  public:
  int accno;
  string name;
  static float rateOfInterest;


  static float check(){

   return rateOfInterest;   // here note static function access only static data member

  }


};


float Account::rateOfInterest=8.93;

int main(){

 cout<<"rate of interest:"<<Account::check()<<endl;  

    return 0;
}