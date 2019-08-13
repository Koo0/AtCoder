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

int main(int argc, const char * argv[]) 
{
    float K,X;
    cin >> K >> X;
    if(K == 1)
    {
        cout << X << " ";
    }
    else
    {
        for(int i=0; i<(K-1)*2+1; i++)
        {
            if(-1000000 <= X -K-i && X-K-i <=1000000)
            {
                cout << X-(K-1)+i << " ";
            }
        }
    }
}
