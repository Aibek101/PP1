#include <iostream> //@a.assylkhanov
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    vector<int> a;

    for(int i = 0; i < n; i++){
        cin >> x;
        a.push_back(x);
    }
    
    sort(a.begin(), a.end());
    int k;
    int count = 0;
    cin >> k;
    reverse(a.begin(), a.end());

    for(int i = 0; i < k; i++){
        count = count+a[i];
    }

    cout << count << endl;
    
    return 0;
}