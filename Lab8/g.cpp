#include <iostream> //@a.assylkhanov
#include <vector>
#include <cmath>

using namespace std;

int prime(int n)
{
    int a = 0;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            a++;   
        }   
    }
    return a;
}

int main()
{
    int m, x;
    cin >> m;
    vector<int> a;

    for(int i = 0; i < m; i++){
        cin >> x;
        a.push_back(x);
    }
    
    int k;
    int count = 0;
    cin >> k;

    for(int j = 0; j < m; j++){
        if(a[j] >= k and prime(a[j]) == 2){
            count++;
        }
    }

    cout << count;

    return 0;
}