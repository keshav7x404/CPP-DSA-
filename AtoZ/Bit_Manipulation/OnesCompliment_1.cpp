
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

// Step 1: Convert Decimal to Binary String
string decToBin(int n) {
    if (n == 0) return "0";
    string s = "";
    while (n > 0) {
        s += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

// Step 2: Flip bits to get 1's Complement String
string getOnesComplementString(string bin) {
    for (char &c : bin) {
        c = (c == '0' ? '1' : '0');
    }
    return bin;
}

// Step 3: Convert Binary String back to Decimal Integer
int binToDec(string bin) {
    int num = 0;
    int p2 = 1;
    for (int i = bin.length() - 1; i >= 0; i--) {
        if (bin[i] == '1') num += p2;
        p2 *= 2;
    }
    return num;
}

int main() {
    int input = 13;
    
    // Process
    string binary = decToBin(input); // "1101"
    string onesCompStr = getOnesComplementString(binary); // "0010"
    int onesCompDec = binToDec(onesCompStr); // 2
    
    // Output
    cout << "1's Complement (Binary): " << onesCompStr << endl; // Displays 0010
    cout << "1's Complement (Decimal): " << onesCompDec << endl; // Displays 2
    
    return 0;
}







// #include <iostream>
// #include <cmath>

// using namespace std;

// int getSignificantOnesComplement(int n) {
//     if (n == 0) return 1;

//     // Step 1: Find how many bits are needed for 'n'
//     // For 13 (1101), this is 4 bits
//     int numBits = floor(log2(n)) + 1;

//     // Step 2: Create a mask of all 1s for those bits
//     // (1 << 4) is 16; 16 - 1 is 15 (binary 1111)
//     unsigned int mask = (1U << numBits) - 1;

//     // Step 3: XOR with the mask to flip only those 4 bits
//     // 1101 ^ 1111 = 0010
//     return n ^ mask;
// }

// int main() {
//     int num = 13;
//     cout << "1's complement of " << num << " is: " << getSignificantOnesComplement(num) << endl;
//     return 0;
// }
