#include <iostream>
using namespace std;


int main(){
    int arr[]={45,5,1,45,1,};

int check=0;

    for(int i=0; i<arr.size();i++){

check=check^arr[i];


    }
    cout<<check;
    
};