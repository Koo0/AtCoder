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
    int n ,breakSize;
    int ans = 1;
    int prepre = 1;
    cin >> n >> breakSize;
    int pre = 1;
    int breakPoint;

    for(int i = 1; i < n-1; i++) //フィボナッチ数列
    {
        ans = pre + prepre;
        prepre = pre;
        pre = ans;
    }

    /*for(int i = 0; i<breakSize; i++)
    {
        cin >> breakPoint;
        if(breakPoint  2)
        {
            ans = ans - 1;
        }
        if (breakPoint == n-1)
        {
            ans = ans -1;
        }
    }*/

    ans = ans%1000000007;
    cout << ans;
}