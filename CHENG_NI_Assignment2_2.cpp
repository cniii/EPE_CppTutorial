//ChengNi_Assignment2
//Question #2

#include <iostream> 
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    ///////////////////////////////////////////////////////////////////////
    //Question #2
    int numbers[6]; //initialize an array with six entries
    int * p; //initialize a pointer p that is going to point at the int type
    
    //pre: numbers = [0, 0, 0, 0, 0, 0]  => why is not like this?
    p = numbers;    //p is now pointing to numbers(the first entry)
    *p  = 1;    // set numbers[0] to 1
    //post: numbers = [1, 0, 0, 0, 0, 0] => doesn't agree with the output though :(
    
    
    //pre:numbers = [1, 0, 0, 0, 0, 0]
    p++;    //p increments and points to number2[1]
    *p = 4;     //deeferencel numbers[1] = 4
    
    p = &numbers[2];    //p is now pointing to numbers[2]
    *p = numbers[0];    //set p(numbers[2]) to the value of numbers[0]
    
    p = numbers + *p;   //p is now pointing to numbers[0 + 1]
    *p = 4;     //set numbers[1] to 4
    
    p = numbers + 1;    // p is now pointing to numbers[1]
    *(p+4) = 5;     //set the value at location numbers[5] = 5;
    
    cout<< "Numbers : " << numbers[0]
                        << " "<<numbers[1]
                        << " "<<numbers[2]
                        << " "<<numbers[3]
                        << " "<<numbers[4]
                        << " "<<numbers[5]<< endl;
    //Output:
    //Numbers : 1 4 1 0 1606416160 5   => why did I get this "1606416160" ?????

        return 0;
    
}

