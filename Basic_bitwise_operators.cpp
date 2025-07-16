// Name - Aditya Ishan Sinha 
// PRN - 24070123006
// Batch - EnTC - A1 
// Expt - 4A

#include <iostream>
using namespace std;
int main() {
    int a = 7; // 0111
    int b = 8; // 1000
    
    //BITWISE OPERATORS 
    int bitwise_AND = a & b;
    int bitwise_OR = a | b;
    int bitwise_XOR = a ^ b;
    int bitwise_NOT = ~b;
    int bitwise_LSHIFT = b << 2;
    int bitwise_RSHIFT = a >> 1;
    
    
    cout<<"AND : " << bitwise_AND <<endl;
    cout<<"OR : " << bitwise_OR <<endl;
    cout<<"XOR : " << bitwise_XOR <<endl;
    cout<<"NOT : " << bitwise_NOT <<endl;
    cout<<"L-shift : " << bitwise_LSHIFT << endl;
    cout<<"R-shift : " << bitwise_RSHIFT << endl;

    
    cout <<"";
    return 0;
}
/*
OUTPUT:

AND : 0
OR : 15
XOR : 15
NOT : -9
L-shift : 32
R-shift : 3


=== Code Execution Successful ===
*/
