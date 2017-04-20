//CHENG_NI_Assignment3
//Question #1  
//

#include <iostream>
#include <vector>
#include <stdlib.h> 
#include <cmath>
using namespace std;

//Question 1
//This function takes in a vector and manage its data.
//It takes user's input and either terminate or add a
//random number between 0 and 1 to the vector.
//It returns void
void manageVector(vector<float>& vec) {
    cout<< "Hey this is a vector manager. You can either terminate or add a random number between 0 and 1 to the vector"<<endl;
    bool cond = true;
    while(cond) {
        string input = "";
        cout<<"Enter ADD to add an entry to vector. Enter T to terminate. \n"<<endl;
        getline(cin, input);
        if (input == "T") {
            break;
        } else {
            float n = (float)rand() / RAND_MAX;;
            vec.push_back(n);
            for (int i = 0; i < vec.size(); i++) {
                    cout<<"Memory Location: "<< &vec.at(i) <<" Value stored: " <<vec.at(i) <<endl;
            }
        }

    }
}

int main(int argc, const char * argv[]) {
    //Questions #1 Vector and entries and more entries!
    vector<float> vec;
    
    //manageVector(vec);
    
    //The memory location will increment by 4 (4 bytes = 32 bits) for each time I add a new entry to the vector
    
        return 0;
    
}

