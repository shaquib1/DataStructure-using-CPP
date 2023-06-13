
// this is 2d array example

#include <iostream>
using namespace std;

int main()
{

   // initialization of 2d array

    //int arr[3][4];

   // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    int arr[3][4]={{1,2,3,34} , {4,5,6,43} , {7,8,9,44}};
/*
    // taking input from user -> row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }



    // taking input from user -> coloume wise input
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j][i];
        }
    }*/


    // for printing array

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}