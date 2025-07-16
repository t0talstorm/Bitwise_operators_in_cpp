// Name - Aditya Ishan Sinha 
// PRN - 24070123006
// Batch - EnTC - A1 
// Expt - 4B
#include <iostream>
using namespace std;

int main() {
    int set , num;
    cout << "Please enter the num to : ";
    cin >> num;
    cout << "Please enter the bit to be set : ";
    cin >> set;
    
    int set_bit = num ^ (1<<(set-1));

    cout<<"The number with bit set is " << set_bit;
    
    return 0;
}
/*
============OUTPUT==========
Please enter the num to : 22
Please enter the bit to be set : 2
The number with bit set is 20

=== Code Execution Successful ===

Please enter the num to : 125
Please enter the bit to be set : 5
The number with bit set is 109

=== Code Execution Successful ===
*/
