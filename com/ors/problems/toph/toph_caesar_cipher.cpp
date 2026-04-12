// https://toph.co/p/caesar-cipher

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;


int main()
{
    string letters = "abcdefghijklmnopqrstuvwxyz";
    int shift = 0;
    string message, encrypted_msg = "";

    cin >> shift;
    cin.ignore();
    getline(cin, message);

    if(message.length() > 100) {
        message = message.substr(0, 100);
    }

    transform(message.begin(), message.end(), message.begin(), ::tolower);

    for(char c : message) {
        // Add any spaces first
        if(c == ' ') {
            encrypted_msg += ' ';
            continue;
        }

        // position of character in letters string
        int posOfChar = letters.find(c);

        // character is not a letter
        if(posOfChar == string::npos) {
            encrypted_msg += c;
            continue;
        }

        int cipher_char_idx = (posOfChar - shift + 26) % 26;

        char cipher_char = letters[cipher_char_idx];

        // add the char
        encrypted_msg += cipher_char;
    }

    cout << encrypted_msg;

    return 0;
}