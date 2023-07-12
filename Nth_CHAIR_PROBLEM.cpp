#include <bits/stdc++.h>
using namespace std;

int countDistinctWays (long long nStairs)
{
    if (nStairs < 0)
    {
        return 0;
    }
    if (nStairs == 0)
    {
        return 1;
    }

    int ans = countDistinctWays (nStairs - 1) + countDistinctWays (nStairs - 2);
    return ans;
}

int main()
{
    int nStairs ;
    cin>>nStairs;
    cout<<countDistinctWays(nStairs);
}
