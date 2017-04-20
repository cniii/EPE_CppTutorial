//CHENG_NI_Assignment2
//Question #1


#include <iostream> 
#include <cmath>
#include <vector>
using namespace std;

//Function in Q1
int addition (int& a, int b)
{
    //a is a pointer - by reference
    //b is a type integer - by value
    int r;  //initialize a local variable r
    a = a+5; // a = 9 (the value at that location changed)
    b *= a; // b = 54 (b is a local variable)
    r=(a+b)/2 - 7; // r = 24 *** this is INT type
    return r;
}

int main(int argc, const char * argv[]) {
    //Question #1
    
    int v1=4;
    int v2=6;
    int z=9;
    cout << "Before func is v1="<<v1
    <<" v2="<<v2
    <<" z="<<z<<endl;
    z = addition(v1,v2);
    //call the function addition(x, y)
    //reasoning in the function above
    
    //post condition:
    //v1 = 9; v2 =6; z = 24
    
    cout << "After func is v1="<<v1
    <<" v2="<<v2
    <<" z="<<z<<endl;
    
    
       return 0;
    
}

