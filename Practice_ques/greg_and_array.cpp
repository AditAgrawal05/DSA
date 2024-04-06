#include <iostream>
using namespace std;

int main() 
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n+1];
    for(int i = 1;i<=n;i++){
      cin>>arr[i];
  
    }
    int l[m+1],r[m+1],d[m+1];
    for(int i =1;i<=m;i++){
      cin>>l[i]>>r[i]>>d[i];
    }
    for(int i =1;i<=k;i++){
      int x,y;
      cin>>x>>y;
      for(int j = x;j<=y;j++){
        for(int c = l[j];c<=r[j];c++){
          arr[c] = arr[c]+d[j];
         
        }
      }
    }
    for(int i =1;i<=n;i++){
      cout<<arr[i]<<" ";
    }
}