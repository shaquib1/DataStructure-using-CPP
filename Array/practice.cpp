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

    int arr[10]={1,2,3,4,5,6,6,3,8,9};
    int n=10;
    unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }

      for(auto i:mp){
           // if(mp[arr[i]]==1)return arr[i];
            cout<<i.second<<" ";
        }


    // cout<<"ans is:"<<19/3;


    // string s="shb";
    // cout<<"size of s:"<<sizeof(s);

    // cout<<"ans is:"<<15/2;


    return 0;
}



// Now practice of oops concept