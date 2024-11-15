#include<iostream>
using namespace std;


int main(){

   cout<<"in this code we revere the array:"<<endl;

    int arr[5];

    cout<<"enter the elements of the array:"<<endl;
     for(int i=0; i<5; i++){
        cin>>arr[i];
     }

     cout<<"the reverse array is:"<<endl;
     for(int i=5; i>=0; i--){

        cout<<arr[i]<<" ";
     }

    return 0;
}