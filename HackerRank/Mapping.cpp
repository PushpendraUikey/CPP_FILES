#include <iostream>
#include<cstring>
#include<unordered_set>
#include<vector>
#include<algorithm>
#include<map>
#include<sstream>

using namespace std;

int main(){
    map <string, int> friends;
    int n; cin >> n;
    for(int i{0}; i<n; i++){
        string line;
        getline(cin, line);
        istringstream iss(line);
        string friendName; int phone_num;
        iss >> friendName >> phone_num;
        friends[friendName] = phone_num;
    }
    vector<string> friend_1;

}
/*
string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

int main(){
    int n; cin >> n; cin.ignore(); //ignore newline character
    vector<string> friends(n); vector<string> phone_num(n);
    vector<string> dump1(n),dump2(n);
    for(int i{0}; i<n; i++){
        getline(cin, dump1[i]);
        dump2[i] = dump1[i];
        friends[i] = ltrim(dump1[i]);
        
        phone_num[i] = rtrim(dump2[i]);
        
    }
    
    vector<string> check_friends;
    string check_friend;

    while(getline(cin,check_friend)){
        check_friends.push_back(check_friend);
    }

    for(const auto& friend_1 : check_friends){
        bool check = false;
        for(int i{0}; i<n; i++){
            if(friends[i] == friend_1){
                check = true;
                cout << friends[i]<<"="<<phone_num[i] << endl;
            }
        }
        if(!check){cout << "Not found" << endl;}
    }
}
*/

