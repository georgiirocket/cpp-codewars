#include <iostream>
#include <set>
using namespace std;


bool isIsogram(const string& str) {
    if(str.length() == 0) {
        return true;
    }

    bool isFlag = true;
    set<char> ch = {};

    for(int i = 0; i < str.size(); i++) {
        int initSetSize = ch.size();

        ch.insert(tolower(str[i]));

        if(initSetSize == ch.size()) {
            isFlag = false;

            break;
        }
    }

    return isFlag;
};

int main() {
    cout << isIsogram("") << endl;

    return 0;
}