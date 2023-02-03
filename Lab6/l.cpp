#include <iostream> //@a.assylkhanov

using namespace std;

int availability(string s,int n){
    int count = 0;
    
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            count++;

            if(count == n){
                return count;
            }

            i++;

            while(count != n && s[i] >= '0' && s[i] <= '9'){
                count++;
                i++;

                if(i == s.size()){
                return count;
                }
            }
            if(count == n){
                return count;
            }
            else{
                count = 0;
            }
        }
    }

    return count;
}

int main()
{
    string a;
    int b;
    cin >> a;
    cin >> b;
    int count = 0;

    if(availability(a,b) == b){
        cout << "Valid" << endl;

        return 0;
    }
    if(availability(a,b) != b){
        cout << "Not valid" << endl;

        return 0;
    }
}