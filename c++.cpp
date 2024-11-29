#include <bits/stdc++.h>
// string,sstream,vector,algorithm,limits,math.h,stack,set,unordered_map,climits,string,numeric,<cctype> (string toupper,lower)
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl '\n'

// lp
#define rep(i, l, r) for (int i = l; i < r; i++)
// ds
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define usi unordered_set<int>
#define umi unordered_map<int, int>
#define si stack<int>
#define all(v)  v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()

#define pb push_back
using namespace std;

#define M 1000000007  // Modular constant

template <typename T>
void sortallRev(vector<T>& arr) {
    sort(arr.begin(), arr.end(), greater<T>());
}

template <typename T>
void sortall(vector<T>& arr) {
    sort(arr.begin(), arr.end());
}

template<typename T>
int binPow(T a, T b){
    T ans = 1;
    while(b){
        if(b & 1){
            ans = (ans * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}

template <typename T>
T gcd(T a, T b) {
    while (b != 0) {
        T temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

template <typename T>
T lcm(T a, T b) {
    return (a / gcd(a, b)) * b;
}
// lcm = (axb) / gcd(a,b)

template <typename T>
bool odd(T number) {
    return (number & 1) != 0;
}

template <typename T>
bool even(T number) {
    return (number & 1) == 0;
}

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}  // Fix: Use long double
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}  // Fix: Use unsigned long long

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

//use debug for above utilities - pair,vector,set,multiset,map
 

void solve() {
    // Your problem-solving code here
    // For example, using debug to check variables
    vi arr = {1, 4, 3, 9, 6,42,45,234,234,234};
    debug(arr);
}



//some other helpful functions

// struct Node {
//   public :
//   int val ;
//   Node *next ;

//   Node():val(),next(nullptr){}
//   Node(int v):val(v),next(nullptr){}
//   Node (int v,Node* nex):val(v),next(nex){}
// };

// void sieve(){
//     const int MAX = 1000000;
//    vector<bool>prime(MAX+1 ,true);
//     prime[0]=prime[1] = false ;
//     prime[2]=true;
//     for(int i=2;i*i<=MAX;++i){
//         if(prime[i]){

//             for(int j=i*i;j<=MAX;j+=i){
//                 prime[j] =false;
//             }
//         }
//     }
//     // rep(i,0,101){
//     //     if(prime[i]) cout<<i<<endl;
//     // }
// }

// void smallest_prime_factor(){
//     vector<int>spf(100,-1);
//     for(int i =2;i < 100;++i){
//         if(spf[i]==-1){
//             for(int j=i;j<100;j+=i){
//                 spf[j] = i;
//             }
//         }
//     }

//     int n = 12 ;
//     while(n>1){
//         cout<<spf[n]<<endl;n/=spf[n];
//     }
//     // nlogn
// }

 

// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };
// bool isPrime(int n){if(n<=1)return false;rep(i,2,sqrt(n)+1){if(n%i==0){return false;}}return true;}



int main() {
    //debug purposes
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    fastio;
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

//sorts 
// void mergeSort(vector<int>&a,int s, int e){
    
//         int mid = (s+e)/2;
//         vector<int>left(mid-s+1),right(e-mid);
//         int k= s;
//         int i = 0;
//         while(i<left.size()){
//             left[i++] = a[k++];
//         }
//         k= mid+1;int j = 0;
//         while(j<right.size()){
//             right[j++] = a[k++];
//         }
//         i=0;j=0; k =s;
//         while(i<left.size() && j<right.size()){
//             if(left[i]<=right[j]){
//                 a[k++] = left[i++];
//             }else{
//                 a[k++] = right[j++];
//             }
//         }
//         while(i<left.size()){
//             a[k++] = left[i++];
//         }
//         while(j<right.size()){
//             a[k++] = right[j++];
//         }
    
// }

// void merge(vector<int>&a,int s, int e){
//     if(s<e){
//         int mid = (s+e)/2;
//         merge(a,s,mid);
//         merge(a,mid+1,e);
//         mergeSort(a,s,e);
//     }
// }

// int quickSort(vector<int>&a,int s,int e){
//     int pivot = s,pivotElement =a[s];
//     int i =s ;int j =e ;
//     while(i<=j){
//         while(a[i]< a[pivot]){
//             i++;
//         }
//         while(a[j] >=a[pivot]){
//             j--;
//         }
//         if(i<=j){
//             swap(a[j],a[pivot]);
//         }
//     }
//     return pivot;
// }


// void quick(vector<int>&a,int s,int e){
//     if(s<e){
//         int p = quickSort(a,s,e);
//         quick(a,s,p-1);
//         quick(a,p+1,e);
//     }
// }

// selection sort 
    // take mins and swap them and shrink size 
    // for(int i=0;i<a.size()-1;i++){
    //     int mini = i;
    //     for(int j=i+1;j<a.size();j++){
    //         if(a[j]<a[mini]) mini= j;
    //     }
    //     swap(a[i],a[mini]);
    // }
    
    //bubble sort 
    //perform adjacent swaps only 
    // for(int i=0;i<a.size()-1;i++){
    //     for(int j=0;j<a.size()- i - 1;j++){
    //         if(a[j] > a[j + 1]) {
    //             swap(a[j], a[j + 1]);
    //         }
    //     }
    // } 
    // OR
    // for(int i=a.size()-1;i>=0;i--){
    //     for(int j=0;j<=i;j++){
    //         if(a[j] > a[j + 1]) {
    //             swap(a[j], a[j + 1]);
    //         }
    //     }
    // } 
    
    //insertion sort 
    // place every element to its correct position
    // for(int i=0;i<a.size();i++){
    //     int j = i ;
    //     while(j> 0 && a[j-1] > a[j]){
    //         swap(a[j-1],a[j]);   
    //         j--;  
    //     }
    // }
    
    // merge sort 
    // merge(a,0,a.size()-1);
    
    //quick sort 
    // quick(a,0,a.size()-1);
