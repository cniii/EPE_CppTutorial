//ChengNi_Assignment2
//Question #3

#include <iostream> 
#include <cmath>
#include <vector>
using namespace std;

///////////////////////////////////////////////////////////////////////////
//Q3
//a data structure that stores the enery and three momentum of a given particle
struct FourVector {
    float energy;
    float momentum1;
    float momentum2;
    float momentum3;
};

//a function that takes in a four vector and returns the invariant 
//mass of a particle as a float
//*******a physics probelm:(******
//not quite sure about the definition of the invariant mass and its expression
float getInvariantMass(FourVector p){
    float InvariantMass;
    InvariantMass = sqrt(pow(p.energy, 2) - (pow(p.momentum1, 2) + pow(p.momentum2, 2) + pow(p.momentum3, 2)));
    return InvariantMass;
}

//a function that takes in two four vectors and return the sum of the two four vectors
FourVector getSumFourVector(FourVector v1, FourVector v2) {
    FourVector sum;
    sum.energy = v1.energy + v2.energy;
    sum.momentum1 = v1.momentum1 + v2.momentum1;
    sum.momentum2 = v1.momentum2 + v2.momentum2;
    sum.momentum3 = v1.momentum3 + v2.momentum3;
    return sum;
}

int main(int argc, const char * argv[]) {
    
    //Question #3
    FourVector p1; // initiate a four vector structure
    return 0;
    
}

