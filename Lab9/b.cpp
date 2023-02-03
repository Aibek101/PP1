#include <iostream> //@a.assylkhanov
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<int> b;

    for(int i = 0; i < a; i++){
        int x;
        cin >> x;

        b.push_back(x);
    }

    vector<int> even;
    vector<int> odd;

    for(int i = 0; i < b.size(); i++){
        if(b[i]%2 == 0){
            even.push_back(b[i]);
        }
        else{
            odd.push_back(b[i]);
        }
    }

    sort(even.begin(), even.end());
    reverse(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    for(int i = 0; i < even.size(); i++){
        cout << even[i] << " ";
    }
    for(int i = 0; i < odd.size(); i++){
        cout << odd[i] << " ";
    }

    return 0;
}