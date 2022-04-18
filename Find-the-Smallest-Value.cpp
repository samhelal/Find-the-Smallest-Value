/*(Find the Smallest Value) Write an application that finds
the smallest of several integers. Assume that the first value
read specifies the number of values to input from the user.
(c++ how to program)*/
#include<iostream>
using namespace std ;

int main (){

    int number(0) , smallest(0) ;
    cout << " Enter number : ";
    cin >> number ;
    smallest = number ;
    cout << " Enter number : ";

    while ( cin >> number ) {
        

        if (number<=smallest){
            smallest = number ;
        }
        
        cout << " Enter number : ";
        
    }
    cout << " The smallest is : " << smallest << endl ;

}
