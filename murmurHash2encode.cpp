#include<bits/stdc++.h>
using namespace std;

size_t _Hash_bytes(const char* buf, size_t len, size_t seed) {
 const size_t m = 0x5bd1e995;
 size_t hash = seed ^ len;
 while(len >= 4) { // Mix 4 bytes at a time into the hash.
 size_t k = *((const size_t*)buf);
 k *= m; k ^= k >> 24; k *= m;
 hash *= m; hash ^= k; //something like polynomial accumulation
 buf += 4;len-= 4;
 }
 size_t k;
 switch(len) { // Handle the last few bytes of the input array.
 case 3: k = buf[2]; hash ^= k << 16;
 case 2: k = buf[1]; hash ^= k << 8;
 case 1: k = buf[0]; hash ^= k; hash *= m;
 };
 hash ^= hash >> 13; hash *= m; hash ^= hash >> 15;//Do final mixes.
 return hash;
 }

 int main(){
    char name[] = "pushpendra";
    const char* buf = name;
    size_t len = 10;
    size_t seed = 12;
    size_t hash = _Hash_bytes(buf, len, seed);
    cout << "My murmur hash is : " << hash << endl;
 }