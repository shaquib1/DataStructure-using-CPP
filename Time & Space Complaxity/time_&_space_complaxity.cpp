
// Time complaxity - it is the amount of the time taken by an algorithm to run 
//                  --> as a function of length of the input

//why-> 
// for making batter program
// comparission of algorithm

// for measuring time complaxity: 
//                               1> Big O notation - for upper bound - wrost case - means highest time taken by an algorithm - means time complaxity will not go above this
//                               2> theta notation - for average-case time complaxity
//                               3> omega notaion - for lower bound - best case - means that lowest time taken by an algoritm - means time complaxity will not go bellow this


// Example of time complaxities are :
//                                   Constant time -> O(1) - for Ex - we printing 1 to 10 time Hello which code is for(int i=0; i<10; i++) here we have fixed value/time/ here i<0 which is constant so its time complaxity is constant O(1)
//                                   Linear time -> (n) - for Ex - we printing n time something so its code is for(int i=0; i<n; i++) here we have variable value to printing / i<n which is variable or linear so its time complaxity is linear O(n)
//                                   Logarithmic time -> O(logn) - for Ex Binary search time complaxity is logarithmic which is O(logn)
//                                   Quadratic time -> O(n^2) - for EX we use two loop inside one inside like for(int i=0; i<n; i++){
//                                                                                                                 for(int i=1; i<N; i++){cout<<"Hello this is quadratic for loop";}                                    
//                                                                                                                }
//                                   Cube time -> O(n^3) - for Ex - if we use two loops inside a loop like for(int i=0; i<n; i++){
 //                                                                                                             for(int i=1; i<N; i++){
 //                                                                                                              for(int i=j; i<M; i++){
 //                                                                                                                cout<<"Hello this is Cube root time complaxity ";
 //                                                                                                          }
 //                                                                                                      }
 //                                                                                                  }


// time complaxity in increasing order :-
//                                     O(1)< O(logn)<O(n)<O(nlogn)<O(n^2)<O(n^3)<O(2^n)<O(n!)
// 


// finding the time complaxtiy of Big O notation : 
// Rule : ignore the constant and lower degree 
// some ex - 
// f(n) = 2n^2+3n -> in this 2 and 3 are constant and n is lower degree so we ignore it 
//               time complaxity -> O(n^2)

// f(n) = 5n^4+3n^2 -> here 5 and 3 are constant and n^2 is lower degree so we ignore it 
//               so its time complaxity -> O(n^4)

// f() = 5n^2+logn -> time complaxity -> n^2


// ************* TLE -  time limit exceed**************  
// when you see in a problem is 10^8 it means that 10^8 operation per second 
// now in most of the modern machine can perform 10^8 operation per second 



// time complaxity and constrant which you in all problem given in below of the problem: 
// 
//
//
//
