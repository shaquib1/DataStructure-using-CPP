// two types of copies are produced by the constructor
// 1> shallow copy  2> Deep copy

//->The default copy constructor can only produce the shallow copy


// shallow copy example

#include <iostream>
using namespace std;

// class Demo {
 
//  private:
//  int l;
//  int b;
//  int h;

//  public:

//  void dimention(int length, int breadth, int height){
//     l=length;
//     b=breadth;
//     h=height;
//  }

//  void print(){
//     cout<<"lenght is :"<<l<<endl;
//     cout<<"Breadth is:"<<b<<endl;
//     cout<<"height is:"<<h<<endl;
//  }
// };


// int main(){

//    Demo b1;
  
//    b1.dimention(12 , 32 , 23);
//    b1.print();

//    cout<<"output of 2nd object:"<<endl;

//    Demo b2(b1);

//    b2.print();


//     return 0;
// }






// example of deep copy constructor

class Test{

    private:
    int l;
    int* b;
    int h;

    public:

    Test(){
        b = new int;
    }


    void setdata(int len, int brea, int heig){
        l=len;
        *b= brea;
        h= heig;
    }

    Test(Test &t){
        l=t.l;
        b = new int;
        *b=*(t.b);
        h=t.h;
    }

    
    void print_data(){
        cout<<"length is = "<<l<<endl;
        cout<<"breadth is = "<<*b<<endl;
        cout<<"height is = "<<h<<endl;
    }

};


int main(){

Test t1;
t1.setdata(33 , 54 , 23);
t1.print_data();

cout<<"2nd object output:"<<endl;
Test t2(t1);
t2.print_data();

    return 0;
}