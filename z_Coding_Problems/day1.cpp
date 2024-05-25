// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//    int arr[8] = {3 , 4 , 23, 54, 34 , 75 , 34 , 24};

//    int s = sizeof(arr)/sizeof(arr[0]);

//    cout<<"size of array is "<<s;
  
//    cout<<"reverse array"<<endl;

//   for(int i=s-1; i>=0; i--){
//     cout<<arr[i]<<" ";
//   }
   


//     return 0;
// }


#include <iostream>
using namespace std;

int main(){

  
   int num; 
   int ans=0;
   cout<<"Enter the number:"<<endl;
   cin>>num;

    for(int i=1; i<=10; i++){
      ans=ans+num*i;

    }
 

  cout<<"ans is:"<<ans<<endl;
    return 0; 
}