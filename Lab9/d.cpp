#include <iostream> //@a.assylkhanov
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    vector<int> c;
    int count = 0;

    for(int i = 0; i < a; i++){
        int x;
        cin >> x;

        c.push_back(x);
    }
    for(int i = 0; i < c.size(); i++){
        if(c[i] == b){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}