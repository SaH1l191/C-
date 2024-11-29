#include <bits/stdc++.h>
// // string,sstream,vector,algorithm,limits,math.h,stack,set,unordered_map,climits,string,numeric,<cctype> (string toupper,lower)
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
// int n;cin>>n;vi a(n); rep(i,0,n)cin>>a[i];

// int binaryExponentiation(int a , int b){
//     if(b==0) return 1;
//     int tmp =  binaryExponentiation(a,b/2);
//     tmp *=tmp;
//     if(b%2!=0){
//         tmp*=a;
//     }
//     return tmp ;
// }

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
// ll findOdd(ll x){
//     if(x%2==0){
//         return x/2;
//     }else{
//         return (x+1)/2;
//     }
// }
// int gcd(int a, int b)
// {
//     // a >b
//     if (b == 0)
//     {
//         return a;
//     }
//     // O(min(a,b))
//     return gcd(b, a % b);
// }

// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };
// bool isPrime(int n){if(n<=1)return false;rep(i,2,sqrt(n)+1){if(n%i==0){return false;}}return true;}
// bool isOdd(int n ){return n%2!=0;}
// bool isEven(int n ){return n%2==0;}

 // vector<int>a = {13,46,24,52,20,9};
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



void solve(){

}






int main()
{
    fastio;
    ll tt = 1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
}