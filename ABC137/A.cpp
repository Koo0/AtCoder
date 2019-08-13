#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>
#include <utility>
#include <sstream>
#include <numeric>
#include <iterator>


using namespace std;

int main(int argc, const char * argv[]) {
    float A,B;
    cin >> A >> B;
    float answer;
    answer = max(A+B,A-B);
    answer = max(answer,A*B);
    cout << answer;
}