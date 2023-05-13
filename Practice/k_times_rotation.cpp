#include<bits/stdc++.h>
using namespace std;
 

void RightRotate(int a[], int n, int k)
{
     
  
    for(int i = 0; i < n; i++)
    {
       if(i < k)
       {
            
           // Printing rightmost
           // kth elements
           cout << a[n + i - k] << " ";
       }
       else
       {
            
           // Prints array after
           // 'k' elements
           cout << (a[i - k]) << " ";
       }
    }
    cout << "\n";
}
     

int main()
{
    int Array[] = { 1, 2, 3, 4, 5 };
    int N = sizeof(Array) / sizeof(Array[0]);
    int K = 3;
     
    RightRotate(Array, N, K);
}