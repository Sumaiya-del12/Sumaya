#include <iostream>

#include <fstream>

#include <string>

using namespace std;

bool isIdentifier(const string&s) {

    if (s.empty())

        return false;

    string keywords[] = {"int", "float", "double", "char", "bool", "void", "if", "else", "for", "while"};

    for (int i = 0; i <10; i++) {

        if (s == keywords[i])

            return false;

    }

    if (!((s[0] >= 'A' && s[0] <= 'Z') ||(s[0] >= 'a' && s[0] <= 'z') ||(s[0] == '_')))

        {

         return false;

        }

    for (int i = 1; i < s.length(); i++) {

        if (!((s[i] >= 'A' && s[i] <= 'Z') ||(s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= '0' && s[i] <= '9') ||(s[i] == '_')))

        {

            return false;}

            }

       return true;

}

int main() {

    ifstream file("sample.txt");

    if (!file) {

        cout << "Could not open sample.txt" << endl;

        return 1;

}

    string word;

    cout << "Checking identifiers"<<endl;

    while (file >> word) {

        if (isIdentifier(word))

            cout << word <<" - " << "Identifier"<<endl;

        else

            cout << word <<"  - "<< "Not an Identifier"<<endl;

    }

  file.close();

  return 0;

}

