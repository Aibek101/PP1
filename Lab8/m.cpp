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

    int count = 0;
    set<int>::iterator b;

    for(b = a.begin(); b != a.end(); b++){
        count = count+*b;
    }

    cout << count << endl;

    return 0;
}