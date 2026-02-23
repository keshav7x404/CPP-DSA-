#include <iostream>
#include <string>

using namespace std;

int convert2Decimal(string n) {
    int len = n.length();
    int p2 = 1; // Represents powers of 2 (1, 2, 4, 8...)
    int num = 0; // The resulting decimal number

    // Loop from the end of the string (rightmost bit) to the start
    for (int i = len - 1; i >= 0; i--) {
        // If the character is '1', add the current power of 2 to num
        if (n[i] == '1') {
            num = num + p2;
        }
        // Multiply power of 2 by 2 for the next position
        p2 = p2 * 2;
    }

    return num;
}

int main() {
    string binary;
    cout << "Enter a binary string: ";
    cin >> binary;

    int result = convert2Decimal(binary);
    cout << "Decimal value: " << result << endl;

    return 0;
}
