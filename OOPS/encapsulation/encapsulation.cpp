
// -------- Encapsulation  means->synonyms-> information hiding or data hiding-------

// wrapping up the datamembers and functions inside a single entity(class)

// -------------------real-life example  -------------------

// Consider a real-life example of encapsulation, in a company, there are different sections like the accounts section, 
// finance section, sales section, etc. Now,

// The finance section handles all the financial transactions and keeps records of all the data related to finance.
// Similarly, the sales section handles all the sales-related activities and keeps records of all the sales.
// Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month.

// In this case, he is not allowed to directly access the data of the sales section.
// He will first have to contact some other officer in the sales section and then request him to give the particular data.



// fully encapsulated class-> when all datamembers are private then fully encapsulated achieved. so these datamembers are not accessed by other class .

//  advantages -> 1. data hiding -> security increase
//                  2. if we want , we can make class " Read Only"  -> with the help of getter function 
//                  3. code reuseability
//                  4. encapsulation helps in Unit testing



#include <iostream>
using namespace std;

class encapsulation{

    public:
   int age;
   string name;
   string location;


   int details(int a){
    return age=a;
   }

};

int main(){

 encapsulation obj;
 cout<<obj.details(34);

    return 0;
}

