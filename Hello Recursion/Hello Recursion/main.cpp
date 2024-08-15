#include <iostream>
#include <vector>
using namespace std;

int helloRec(int n, vector<int>& v, int i = 0)
{
    if (i >= n)
    {
        return 0;
    }
    return v[i] + helloRec(n, v, i + 1);
}

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << "Case " << j + 1 << ": " << helloRec(n, v) << endl;
    }
    return 0;
}
