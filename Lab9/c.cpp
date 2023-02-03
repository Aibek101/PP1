#include <iostream> //@a.assylkhanov
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<int> b;
    int count = 0;

    for(int i = 0; i < a; i++){
        int x;
        cin >> x;

        b.push_back(x);
    }
    
    sort(b.begin(), b.end());

    for(int i = 0; i < b.size(); i++){
        if((b[i] == b[i+1]) && (i+1 != b.size()) && b[i] != -1){
            count++;

            for(int j = i+1; j < b.size(); j++){
                if(b[i+1] == b[j] || j == b.size()-1){
                    b[i+1] = -1;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}