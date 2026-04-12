#include <bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LL long long
#define all(a) a.begin(),a.end()

int main() {
    FastRead;

    cout << "========================================\n";
    cout << "  CP STRING HANDLING AND MANIPULATION   \n";
    cout << "========================================\n\n";

    // use to_string to convert from number to string
    int num = 50;
    string s = "hey " + to_string(num) + " no";
    cout << "String + Number: " << s << endl;

    // Number to string
    string myNum = "12345";
    int str2int = stoi(myNum);
    LL str2LL = stoll(myNum);
    cout << "Numbers to String: " << str2int << " | " << str2LL << endl;

    // Substringing index starts from 0 (Sakib starts from 7th idx and is 5 char long)
    string s2 = "Sadman Sakib";
    string substr1 = s2.substr(7, 5);
    cout << "Substr of (Sadman Sakib) with (7,5): " << substr1 << endl;

    // Reading string lines
    string s3;
    getline(cin, s3);

    int n; string strRead;
    cin >> n;
    cin.ignore(); // If you read a integer before getline then it leaves a '\n'
    getline(cin, strRead);

    // Sorting string
    string s4 = "cbad";
    sort(all(s4)); // s4 becomes "abcd"
    reverse(all(s4)); // s4 becomes "dcba"

    // Finding substrings
    string s5 = "Raeden was HERE!";
    size_t position = s5.find("HERE");
    if (position != string::npos) {
        cout << "Position of 'HERE': " << position << endl;
    }

    // Find out how many times a certain character appears
    string s6 = "This is to test how many times 'a' appears, lets aaaaaahhhhh.";
    int countAs = count(all(s6), 'a');
    cout << "Number of 'a's: " << countAs << endl;

    // Changing letter case
    char myChar = 'a';
    myChar = toupper(myChar); // becomes "A"
    myChar = tolower(myChar); // becomes "a"

    // Looping through words in a large sentence ignoring space

    string sentence = "This is a very long sentence just to say that Raeden was here did that.";
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        cout << "Word from sentence: " << word << endl;
    }

    // Easy erase & insert
    string s7 = "RAEDENWASHERE";
    s7.erase(6, 3); // Remove "WAS", 3 is the number of letters u want to erase after
    s7.insert(6, " WAS "); // Becomes "RAEDEN WAS HERE'
    cout << "Insert & Erase result: " << s7 << endl;

    // Permutation generator
    string s8 = "abc";
    do {
        cout << "Permutation of 'abc': " << s8 << endl;
    } while (next_permutation(all(s8)));

    return 0;
}