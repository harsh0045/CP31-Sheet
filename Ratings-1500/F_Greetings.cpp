#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for(int i=n-1;i>=0;i--)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)
#define fr(n) for(ll i=0;i<n;i++)
#define nesfr(x,y) for(ll i=0;i<x;i++)for(ll j=0;j<y;j++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
#define cn(x) cin>>x;
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;

void merge(vector<ll>& arr, ll left, ll mid, ll right, ll &count) {
    ll n1 = mid - left + 1;
    ll n2 = right - mid;
 
    vector<ll> leftArr(n1), rightArr(n2);
 
    for (ll i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (ll j = 0; j < n2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }
 
    ll i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            count += n1 - i;
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}
 
void mergeSort(vector<ll>& arr, ll left, ll right, ll &count) {
    if (left < right) {
        ll mid = left + (right - left) / 2;
 
        mergeSort(arr, left, mid, count);
        mergeSort(arr, mid + 1, right, count);
        merge(arr, left, mid, right, count);
    }
}
void Harsh(){
    ll n;
    cin>>n;
 
    vector<pair<ll,ll>>a(n);
    for(int i=0;i<n;i++){
      cin>>a[i].first>>a[i].second;
    }
    sort(all(a));
    vector<ll>temp(n);
    for(int i=0;i<n;i++){
       temp[i]=a[i].second;
    }
    ll ans=0;
    mergeSort(temp,0,n-1,ans);
    cout<<ans<<endl;
}
int main()
{
    fast;
    int t=1;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}