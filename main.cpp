#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <cassert>
#include <cmath>
#include <algorithm>
#include <queue>
#include <random>
#include <numeric>
#include <unordered_map>
#include <iomanip>
#include <fstream>
#include <complex>
#include <array>
#include <string>
#include <bitset>

#define all(a) a.begin(), a.end()
#define int long long
#define HelloWorldVoid void
#define HelloWorldStruct struct
#define HelloWorldString string
#define HelloWorldCout cout


using namespace std;
using ll = long long;

const int INF = 1e18;
const int Ts = 4e6 + 16;
const int MOD = 998244353;
const char HelloWorldnl = '\n';

void fib(int n) {
    int pred2 = 0, pred1 = 1;
    if (n >= 2) cout << "0 1 ";
    else if (n == 1) cout << "0";
    for (int i = 3; i <= n; i++) {
        cout << pred2 + pred1 << ' ';
        int temp = pred1;
        pred1 = pred2 + pred1;
        pred2 = temp;
    }
    cout << HelloWorldnl;
}

HelloWorldStruct MyHelloWorldStruct {
    HelloWorldString HelloWorld;

    MyHelloWorldStruct() {
        HelloWorld = "Hello World!";
    }
};

HelloWorldVoid HelloWorld() {
    MyHelloWorldStruct HelloWorld = MyHelloWorldStruct();
    HelloWorldCout << HelloWorld.HelloWorld << HelloWorldnl;
    int n; cin >> n;
    fib(n);
}


signed main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout << fixed << setprecision(9);

#ifdef LOCAL
    ifstream in("input.txt", ios::binary);
    cin.rdbuf(in.rdbuf());
    ofstream out("output.txt", ios::binary);
    cout.rdbuf(out.rdbuf());
#endif
    ll t = 1;
//    cin >> t;
    while (t--)
        HelloWorld();
    return 0;
}