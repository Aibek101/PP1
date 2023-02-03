#include <iostream> //@a.assylkhanov
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, x, y;
    cin >> a;
    vector<pair<int, int>> n;

    for(int i = 0; i < a; i++){
        cin >> x;
        cin >> y;

        n.push_back(make_pair(x, y));
    }

    sort(n.begin(), n.end());

    for(int i = 0; i < a; i++){
        cout << n[i].first << " " << n[i].second << endl;
    }

    return 0;
}