#include <iostream> //@a.assylkhanov
#include <vector>
#include <set>

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
   
    set<int> b;

    for(int i = 0; i < a.size(); i++){
        if(a[i]%2 != 0){
            b.insert(a[i]);
        }
    }

    set<int>::iterator c;

    for(c = b.begin(); c != b.end(); c++){
        cout << *c << " ";
    }

    return 0;
}