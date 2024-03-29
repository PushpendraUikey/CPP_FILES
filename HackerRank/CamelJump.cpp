// Author Pushpendra for the first code and for the second one
// which is optimized, author is the GPT

/*
#include<iostream>
#include<cmath>

using namespace std;

bool checkMeet(long, long, long, long);

int main(){
    long x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if(checkMeet(x1,v1,x2,v2)){
        cout << "YES"<< endl;
    }
    else {
        cout << "NO" << endl;
    }
}

bool checkMeet(long a, long b, long c, long d){
    for(int i{0}; ; i++){
        if((a + b*i)==(c + d*i)){
            return true;
        }
        else if((a+b*i)>(c+d*i) && (b>d)) return false;
        else if((a+b*i)<(c+d*i) && (b<d)) return false;
    }
    return false;
}
*/

#include <iostream>

using namespace std;

bool checkMeet(long x1, long v1, long x2, long v2) {
    // If the speeds are the same, they will only meet if they start at the same point
    if (v1 == v2)
        return x1 == x2;
    
    // If the first kangaroo is behind and slower or ahead and faster, they will never meet
    if ((x1 < x2 && v1 < v2) || (x1 > x2 && v1 > v2))
        return false;
    
    // Check if the difference in starting points is divisible by the difference in speeds
    return ((x2 - x1) % (v1 - v2)) == 0;
}

int main() {
    long x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    if (checkMeet(x1, v1, x2, v2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
