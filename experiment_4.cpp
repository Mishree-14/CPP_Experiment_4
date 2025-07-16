// Mishree Kalaria
// 24070123052
//BATCH:A2

#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 2;
  
    int bitwise_and=a&b;
    int bitwise_or=a|b;
    int bitwise_xor=a^b;
    int bitwise_nor=~a;
    int bitwise_left_shift=a<<2;
    int bitwise_right_shift=b>>1;

    
    cout<<"AND: "<<bitwise_and<<"\n";
    cout<<"OR: "<<bitwise_or<<"\n";
    cout<<"XOR: "<<bitwise_xor<<"\n";
    cout<<"NOT: "<<bitwise_nor<<"\n";
    cout<<"LEFT_SHIFT: "<<bitwise_left_shift<<"\n";
    cout<<"RIGHT_SHIFT: "<<bitwise_right_shift<<"\n";

    return 0;
}
