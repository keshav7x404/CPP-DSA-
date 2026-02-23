#include <iostream>
#include <string>
#include <algorithm> // Required for reverse()

using namespace std;

string convert2Binary(int n) {
    // If the input is 0, handle it as a special case
    if (n == 0) return "0";

    string res = "";
    
    // Original loop logic from image
    while (n != 1) {
        if (n % 2 == 1) 
            res += '1';
        else 
            res += '0';
        n = n / 2;
    }
    
    // FIX: Add the final '1' since the loop stops at n = 1
    res += '1';
    
    // Reverse the string to get the correct order
    reverse(res.begin(), res.end());
    
    return res;
}

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;
    
    cout << "Binary representation: " << convert2Binary(number) << endl;
    
    return 0;
}
