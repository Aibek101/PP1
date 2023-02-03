#include <iostream> //@a.assylkhanov
#include <set>

using namespace std;

int main()
{
    int m, x;
    cin >> m;
    set<int> a;

    for(int i = 0; i < m; i++){
        cin >> x;
        a.insert(x);
    }

    cout << a.size() << endl;

    return 0;
}