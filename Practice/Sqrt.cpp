#include <iostream>
using namespace std;


long long int tempsqrt(int n){

    int s=0;
    int e=n;
   long long int m=(s+e)/2;
   long long int ans=-1;

    while(s<=e){

      long long  int square=m*m;
        if(square==n)
        return m;

        if(square<n){
            ans=m;
            s=m+1;
        }else{
            e=m-1;
        }
        m=(s+e)/2;

    }
    return ans;

}


double morebatter(int n, int prescision,int temsol){
    double factor=1;
    double ans=temsol;

    for(int i=0; i<prescision; i++){
        factor=factor/10;
    
        for(double j=ans; j*j<n; j=j+factor ){
            ans=j;
        }
    }
 
   return ans;

}

int main(){

  
  int n;
  cout<<"enter the number : ";
  cin>>n;

  int tempsol=tempsqrt(n);
  cout<<"sqrt is : "<<morebatter(n,3,tempsol)<<endl;
  return 0;


}