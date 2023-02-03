#include <iostream> //@a.assylkhanov
#include <queue>

using namespace std;

int main()
{
    string a;
    cin >> a;
    queue<char> b;

    for(int i = 0; i < a.size(); i++){
        b.push((a[i]));
    }
    while(!b.empty()){
        if(b.front() == '1' && b.size() == 1){
            b.pop();
            cout << 1 << endl;
        }
        if(b.front() == '0'){
            cout << 0;
            b.pop();
        }
        else if(b.front() == '1'){
            b.pop();
            if(b.front() == '0'){
                b.pop();
                cout << 10;
            }
            else{
                b.pop();
            }
        }
    }

    return 0;
}