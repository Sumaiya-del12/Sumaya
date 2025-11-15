#include <iostream>
using namespace std;

void checkNumeric() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    bool numeric = true;
    for (char c : input) {
        if (c < '0' || c > '9') {
            numeric = false;
            break;
        }
    }

    cout << (numeric ? "Numeric Constant" : "Not Numeric") << endl;
}

void checkOperator() {
    string input;
    cout << "Enter a character: ";
    cin >> input;

    string ops = "+-*/%=";
    if (input.length() == 1 && ops.find(input[0]) != string::npos)
        cout << "Operator" << endl;
    else
        cout << "Not Operator" << endl;
}

void checkComment() {
    string input;
    cout << "Enter comment line: ";
    cin.ignore();
    getline(cin, input);

    if (input.substr(0, 2) == "//")
        cout << "Single-line comment" << endl;
    else if (input.substr(0, 2) == "/*" && input.substr(input.size() - 2) == "*/")
        cout << "Multi-line comment" << endl;
    else
        cout << "Not a comment" << endl;
}

void checkIdentifier() {
    string s;
    cout << "Enter identifier: ";
    cin >> s;

    if (!((s[0] >= 'A' && s[0] <= 'Z') || (s[0] >= 'a' && s[0] <= 'z') || s[0] == '_')) {
        cout << "Not Identifier" << endl;
        return;
    }

    for (int i = 1; i < s.size(); i++) {
        char c = s[i];
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '_')) {
            cout << "Not Identifier" << endl;
            return;
        }
    }
    cout << "Identifier" << endl;
}

void findAverage() {
    int arr[] = {15, 7, 99, 42, 3};
    int n = 5;
    int sum = 0;

    for (int i = 0; i < n; i++) sum += arr[i];
    cout << "Average: " << (float)sum / n << endl;
}

void findMinMax() {
    int arr[] = {15, 7, 99, 42, 3};
    int n = 5, min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    cout << "Min = " << min << ", Max = " << max << endl;
}

void concatName() {
    string first, last;
    cout << "Enter first name: ";
    cin >> first;
    cout << "Enter last name: ";
    cin >> last;
    cout << "Full name: " << first + " " + last << endl;
}

int main() {
    cout << "===== CD LAB 1 SIMPLE VERSION =====" << endl;

    cout << "\n1. Numeric Check:" << endl;
    checkNumeric();

    cout << "\n2. Operator Check:" << endl;
    checkOperator();

    cout << "\n3. Comment Check:" << endl;
    checkComment();

    cout << "\n4. Identifier Check:" << endl;
    checkIdentifier();

    cout << "\n5. Average of Array:" << endl;
    findAverage();

    cout << "\n6. Min and Max of Array:" << endl;
    findMinMax();

    cout << "\n7. Concatenate Name:" << endl;
    concatName();

    cout << "===================================" << endl;
    return 0;
}
