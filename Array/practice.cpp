#include <iostream>
using namespace std;


int main(){
    
     string s = "shaquib";
     sort(s.begin() , s.end());

     for(int i=0; i<s.size(); i++){
       cout<<s[i]<<" ";
     }

    return 0;
}