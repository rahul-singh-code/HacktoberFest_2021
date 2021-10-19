/*
A rotation (or circular shift) is an operation similar to shift except that the bits that fall off at one end are put back to the other end. 
In left rotation, the bits that fall off at left end are put back at right end. 
In right rotation, the bits that fall off at right end are put back at left end.

*/

#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
typedef long double ld;
typedef pair < ll, ll > iii; 
const ll mod = 1e9 + 7;

int rot_left(int n, unsigned int d) {

  return (n << d) | (n >> (32 - d)); //32 bit number
}

int ror_right(int n, unsigned int d) {

  return (n >> d) | (n << (32 - d)); //32 bit number
}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n = 16;
  int d = 2;
  cout << "Left Rotation of " << n <<
    " by " << d << " is ";
  cout << rot_left(n, d);
  cout << "\nRight Rotation of " << n <<
    " by " << d << " is ";
  cout << ror_right(n, d);
  getchar();
}
