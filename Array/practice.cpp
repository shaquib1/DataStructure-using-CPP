#include<bits/stdc++.h>
using namespace std;


int main(){
    
    //  string s = "shaquib";
    //  sort(s.begin() , s.end());

    //  for(int i=0; i<s.size(); i++){
    //    cout<<s[i]<<" ";
    //  }


    //  string s= "34bab986s";
    //  sort(s.begin() , s.end());

    //  cout<<"string is:"<<s;


    // int s=0;
    // int b=12;

    // int c=s/b;

    // cout<<"ans is:"<<c;

    int arr[10]={2,54,343,43,554,2,54,43,33,23};
    int n=10;
    map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }

      for(int i=0;i<n;i++){
           // if(mp[arr[i]]==1)return arr[i];
            cout<<mp[arr[i]]<<" ";
        }


    return 0;
}