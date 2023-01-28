/* prompt: write a function that can convert a 4 digit hexadecimal number
(using lowercase letters for a through f) to its decimal counterpart. The user
will not type in 0x part of the hexadecimal number, just the number itself, as in 
003f or a5b1. Can handle the output as I think best. Hand in a full program with
a main function, that can be compiled and run. Conversion should happen in another 
function */

// formula for converting 4 digit hexadecimals to decimals is to take the first
// number in the hexadecimal and to multiply it by 16^0, second number 16^1, third
// 16^2, fourth 16^3. 1 = 1, 2 = 2... a = 10... f = 16

#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int convert(int x,int i){
    int r = 3 - i;
    int multiplier = 0;
    multiplier = pow(16, r);
    int sum = x * multiplier;
    return sum;
}

int main(){
    string s = "xxxx";
    cout << "Enter a four digit hexadecimal: ";
    cin >> s;
    int x = 0;
    int total = 0;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] < 97){
            x = s[i] - 48;
        }else{
            x = s[i] - 87;
        }
        int t = convert(x, i);
        total = total + t;
    }    
    cout << total << '\n';
}

// CITE: https://www.geeksforgeeks.org/power-function-cc/
// DESC: power function in C++ for my multiplier
