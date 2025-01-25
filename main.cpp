    #include <bits/stdc++.h>
// string,sstream,vector,algorithm,limits,math.h,stack,set,unordered_map,climits,string,numeric,<cctype> (string toupper,lower)
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl '\n'
#define rep(i, l, r) for (int i = l; i < r; i++)
#define vl vector<long long>
#define usi unordered_set<int>
#define umi unordered_map<int, int>
#define vii vector<pair<int,int>>
#define si stack<int>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vi vector<int>
#define all(v)  v.begin(), v.end()
#define allr(v) v.rbegin(),v.rend()
#define Size(container) ((container).size())
#define pb push_back
#define minpq priority_queue<int, vector<int>, greater<int>>
#define pq priority_queue<int>
#define M 1000000007
#define F first
#define S second
using namespace std;
using ll = long long;

template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}

template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

void solve() {
 int n;
    cin >> n;
    vector<int> a(n);
    cin >> a; //read vector
    cout << a; //output vector
    cout<<endl;

}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--)  solve();
    return 0;
}
