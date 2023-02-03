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
    
    cout << a[a.size()-1]-a[0] << endl;
    
    return 0;
}