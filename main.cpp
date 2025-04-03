#include <iostream>
#include <set>
#include <cmath>
using namespace std;


bool isSquareNum(const int& number) {
    double sq = sqrt(number);

    return floor(sq) == sq;
};

int main() {
    cout << isSquareNum(-1) << endl;
    cout << isSquareNum(0) << endl;
    cout << isSquareNum(3) << endl;
    cout << isSquareNum(4) << endl;
    cout << isSquareNum(25) << endl;
    cout << isSquareNum(26) << endl;

    return 0;
}