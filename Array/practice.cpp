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

    int arr[10]={1,2,3,4,5,6,6,7,8,9};
    int n=10;
    map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }

      for(int i=0;i<n;i++){
           // if(mp[arr[i]]==1)return arr[i];
            cout<<mp[arr[i]]<<" ";
        }


    // cout<<"ans is:"<<19/3;

    return 0;
}



// Now practice of oops concept