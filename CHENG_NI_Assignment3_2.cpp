//CHENG_NI_Assignment3
//Question #2
//

#include <iostream>
#include <vector>
#include <stdlib.h> 
#include <cmath>
using namespace std;

//Q2
class FourVector{
public:
    float E, px, py, pz;
    
    //Class methods:
    //This function takes in a fourvector and three float numbers and set the energy,
    //px, py, pz of the four vector to those values.
    //It returns void.
    void SetFourVector(float E, float px, float py, float pz) {
        E = E;
        px = px;
        py = py;
        pz = pz;
    }
    
    //This function returns the invariant mass calculated from the four vector
    float Mass() {
        float InvariantMass;
        InvariantMass = sqrt(pow(E, 2) - (pow(px, 2) + pow(py, 2) + pow(pz, 2)));
        cout<< "Mass:"<<InvariantMass<<endl;
        return InvariantMass;
    }
    
    //This function returns a float that is the pseudorapdity of the fourvector
    float Eta () {
        float p = sqrt((pow(px, 2) + pow(py, 2) + pow(pz, 2)));
        float theta = acos(pz/p);
        float eta = -log(tan(theta/2));
        cout<< "pseudorapidity:"<<eta<<endl;
        return eta;

    }
    
    //This method takes an argument that is another fourvector and returns the
    //azimuthal angle between their momentum
    float DeltaPhi (FourVector other) {
        float p = sqrt((pow(px, 2) + pow(py, 2) + pow(pz, 2)));
        float theta = acos(pz/p);
        float pT = p*sin(theta);
        float deltaphi = acos(pT/px);
        cout<< "Azimuthal Angle:"<<deltaphi <<endl;
        return deltaphi;
    }
    
    //This method takes an argument that is another fourvector and calculate the
    //difference in the pseudorapidity
    float DeltaEta (FourVector other) {
        float deta = abs(Eta() - other.Eta());
        cout<< "Difference in the pseudorapidity:"<<deta<<endl;
        return abs(Eta() - other.Eta());
    }
    
};

int main(int argc, const char * argv[]) {
    //Q2
    //initialize two four vectors
    FourVector vec1, vec2;
    //call class methods
    vec1.SetFourVector(1, 2, 3, 4);
    vec2.SetFourVector(6, 7, 8, 9);
    vec1.Mass();
    vec1.Eta();
    vec1.DeltaPhi(vec2);
    vec1.DeltaEta(vec2);
        
    return 0;
}

