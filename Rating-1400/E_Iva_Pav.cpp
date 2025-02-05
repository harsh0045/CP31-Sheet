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
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
#define cn(x) cin>>x;
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;

class SegmentTree {
public:
    vector<int> seg;
    int n;

    // Constructor to build the segment tree
    SegmentTree(vector<int>& arr) {
        n = arr.size();
        seg.resize(4 * n);
        build(0, 0, n - 1, arr);
    }

    // Function to build the segment tree
    void build(int idx, int low, int high, vector<int>& arr) {
        if (low == high) {
            // Leaf node
            seg[idx] = arr[low];
            return;
        }
        int mid = (low + high) / 2;
        build(2 * idx + 1, low, mid, arr);  // Build the left child
        build(2 * idx + 2, mid + 1, high, arr);  // Build the right child

        // Internal node will store the AND of its children
        seg[idx] = seg[2 * idx + 1] & seg[2 * idx + 2];
    }

    // Function to query the AND in a range [l, r]
    int query(int idx, int low, int high, int l, int r) {
        if (low > r || high < l) {
            // No overlap
            return INT_MAX;  // Return a neutral value for AND
        }
        if (low >= l && high <= r) {
            // Complete overlap
            return seg[idx];
        }
        // Partial overlap
        int mid = (low + high) / 2;
        int left = query(2 * idx + 1, low, mid, l, r);
        int right = query(2 * idx + 2, mid + 1, high, l, r);
        return left & right;
    }
};

int check(int l,int high, int k,SegmentTree &obj){
    
    int start=l;
    int end=high;
    int ans=-2;
    while(start<=end){
      int mid=start+(end-start)/2;
      if((obj.query(0,0,high,l,mid))>=k){
        ans=mid;
        start=mid+1;
      }else{
        end=mid-1;
      }
    }
    return ans+1;
}
void Harsh(){
    int n;
    cin>>n;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
       cin>>temp[i];
    }
    SegmentTree obj=SegmentTree(temp);
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
       int l,k;
       cin>>l>>k;
       cout<<check(l-1,n-1,k,obj)<<" ";
    }
    cout<<endl;
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