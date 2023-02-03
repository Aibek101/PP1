#include <iostream> //@a.assylkhanov

using namespace std;

long long rec(long long ans){
    int n;
    cin >> n;
    ans += n;

    if(!n){
        return ans;
    }

    return rec(ans);
}

int main()
{
    cout << rec(0);
    
    return 0;
}