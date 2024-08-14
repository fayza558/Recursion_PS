#include <iostream>
#include<vector>
using namespace std;

void evenIndices(int n, vector<int>& v, int i = 0)
{
    if (i >= n)
    {
        return;
    }
    evenIndices(n, v, i + 1);
    if (i % 2 == 0)
    {
        cout << v[i] << " ";
    }

}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    evenIndices(n, v);

    return 0;
}

