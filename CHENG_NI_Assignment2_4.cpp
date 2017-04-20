//ChengNi_Assignment2
//Question #4

#include <iostream> 
#include <cmath>
#include <vector>
using namespace std;

///////////////////////////////////////////////////////////////////////////
//Q4
//a function that checks if the given integer is a palindrome numeber
bool isPalindrome(int n) {
    string s = to_string(n);
    long back = s.length() - 1;
    long front = 0;
    while (front < back){
        if (s.at(front) != s.at(back)) {
            return false;
        }
        front++;
        back--;
    }
    return true;
}

int main(int argc, const char * argv[]) {
    //Question #4
    //This algorithm solve the question 4 of the Proejct Euler
    int target = 0;
    int a, b;
    for (int i = 100; i <= 999; i++) {
        for (int j = i; j <= 999; j++) {
            int product = i * j;
            if (isPalindrome(product) && product > target) {
                target = product;
                a = i;
                b = j;
            }
        }
    }
    cout<<"The largest palindrome made from the product of two 3-digit numbers is: " <<target<<endl;
    return 0;
    
}

