
//******** encapsulation  means->synonyms-> information hiding or data hiding*****//

// wrapping up the datamembers and functions inside a single entity(class)

// fully encapsulated class-> when all datamembers are private then fully encapsulated achieved. so these datamembers are not accessed by other class .

/* advantages -> 1. data hiding -> security increase
                 2. if we want , we can make class " Read Only"  -> with the help of getter function 
                 3. code reuseability
                 4. encapsulation helps in Unit testing
*/


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

