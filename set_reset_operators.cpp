//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

int main() {
    int bit_to_be_set;
    int bit_to_be_reset;
    int a=80;
    int set;
    int reset;
    
    cout<<"Enter bit to set: ";
    cin>>bit_to_be_set;
    cout<<"Enter bit to reset: ";
    cin>>bit_to_be_reset;
    set = a | (1<<3);
    reset = a &(~(1<<4));
    cout<<"SET OUTPUT: "<<set<<"\n";
    cout<<"RESET OUTPUT: "<<reset;

    return 0;
}
