// Doesn't seem to work 

#include <iostream>
#include <string>

using namespace std;

int main() {
    string initial_str, final_str;
    int num_operation;
    
    // Input
    cin >> initial_str >> final_str >> num_operation;
    
    // Strip leading and trailing whitespaces
    initial_str.erase(0, initial_str.find_first_not_of(" \t\n\r\f\v"));
    initial_str.erase(initial_str.find_last_not_of(" \t\n\r\f\v") + 1);
    final_str.erase(0, final_str.find_first_not_of(" \t\n\r\f\v"));
    final_str.erase(final_str.find_last_not_of(" \t\n\r\f\v") + 1);
    
    int num = 0;
    while (num < min(initial_str.length(), final_str.length()) && num_operation >= 0) {
        if (initial_str[num] != final_str[num]) {
            initial_str.erase(num);
            num_operation -= (initial_str.length() - num);
            break;
        }
        num++;
    }
    
    if (num_operation >= 0) {
        initial_str += final_str.substr(num);
        num_operation -= (final_str.length() - num);
    }
    
    if (num_operation == 0 && initial_str == final_str) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
