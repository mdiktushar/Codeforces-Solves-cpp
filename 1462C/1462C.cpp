#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while (t--)
    {
        int x;cin >> x;
        vector<int> V;

        int sum = 0, F = 9;

        while(sum < x && F > 0)
        {
            int temp = min(x-sum, F);
            V.push_back(temp);
            sum += F;
            F--;
        }
        if(sum < x)
        {
            cout << -1 << "\n";
        }
        else
        {
            reverse(V.begin(), V.end());
            for (int i : V) {
                cout << i;
            }
            cout << "\n";
        }
    }
}
