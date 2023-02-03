#include <iostream> //@a.assylkhanov

using namespace std;

int main() {
    string s;
	cin >> s;
	int ans = 0;

	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            ++ ans;
        }
	}
	cout << ans;
    
	return 0;
}