#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    FastRead;

    cout << "========================================\n";
    cout << "         CP VARIABLE CONVERSIONS        \n";
    cout << "========================================\n\n";

    cout << R"(1. STRINGS TO NUMBERS
                - string to int:        stoi("123")      -> 123
                - string to long long:  stoll("123456")  -> 123456  <-- USE THIS FOR LARGE CP NUMBERS!
                - string to double:     stod("3.14")     -> 3.14

                2. NUMBERS TO STRINGS
                - int to string:        to_string(123)   -> "123"
                - long long to string:  to_string(123LL) -> "123"
                - double to string:     to_string(3.14)  -> "3.140000"

                3. CHARACTERS AND INTEGERS (The ASCII Math Trick)
                - char digit to int:    '7' - '0'        -> 7       <-- O(1) instant conversion
                - int digit to char:    7 + '0'          -> '7'
                - char letter to idx:   'c' - 'a'        -> 2       <-- Maps 'a'-'z' to 0-25 arrays
                - idx to char letter:   2 + 'a'          -> 'c'

                4. CHARACTER CASE CONVERSIONS
                - to lowercase:         (char)tolower('A') -> 'a'
                - to uppercase:         (char)toupper('a') -> 'A'
                - ASCII math toggle:    'A' + 32           -> 'a'   <-- Distance between cases is 32
                - ASCII math toggle:    'a' - 32           -> 'A'

                5. DECIMALS AND INTEGERS (Casting & Rounding)
                - double to int (chop): (int)3.99        -> 3       <-- Truncates, does NOT round!
                - round to nearest:     round(3.5)       -> 4.0
                - round up (ceiling):   ceil(3.1)        -> 4.0
                - round down (floor):   floor(3.9)       -> 3.0

                6. THE INTEGER DIVISION TRAP
                - Int division:         5 / 2            -> 2       <-- Chops the decimal instantly
                - Force float math:     5 * 1.0 / 2      -> 2.5     <-- Multiply by 1.0 FIRST
                - Type casting:         (double)5 / 2    -> 2.5     <-- Explicit cast
                )";

    cout << "\n========================================\n";
    cout << "       BEWARE OF INTEGER OVERFLOW!      \n";
    cout << "========================================\n";


    cout << "\n========================================\n";
    cout << "          TRIMMING DOWN DECIMALS         \n";
    cout << "========================================\n";

    double pi = 3.1415926535;
    double exact = 5.0;

    cout << fixed << setprecision(3);

    // Everything printed after that line will have exactly 3 decimals
    cout << pi << "\n";      // Outputs: 3.142 (Notice it automatically rounded up!)
    cout << exact << "\n";   // Outputs: 5.000 (Pads with zeros)

    double num = 3.1415926535;

    // ==========================================
    // METHOD 1: Rounding to the nearest 3 decimals
    // (If the 4th decimal is 5+, it rounds up)
    // ==========================================
    // Step 1: Multiply by 1000 (Shifts decimal 3 spots right) -> 3141.59...
    // Step 2: Use round() to lock it to nearest whole number -> 3142.0
    // Step 3: Divide by 1000.0 to shift decimal back -> 3.142

    double roundedNum = round(num * 1000.0) / 1000.0;
    cout << "Rounded: " << roundedNum << "\n"; // Outputs: 3.142

    // ==========================================
    // METHOD 2: Truncating (Chopping) at 3 decimals
    // (Ignores the 4th decimal completely)
    // ==========================================
    // We do the exact same thing, but use floor() instead of round()

    double choppedNum = floor(num * 1000.0) / 1000.0;
    cout << "Chopped: " << choppedNum << "\n"; // Outputs: 3.141

    return 0;

}