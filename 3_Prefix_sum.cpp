// /*
// Ias method me ham array me stored elements ka prefix sum nikalte hain
// after inputing array values by using 
// pf[i] = pf[i-1] + arr[i];

// */

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5+7;
// int prefixsum[N];
// int main(){
//     int n;
//     cout<<" Enter no of elements";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements";

//     for(int i=1;i<=n;i++){
//         cin>>arr[i];
//         prefixsum[i] = prefixsum[i-1] + arr[i];
//     }
//     int q;
//     cout<<"Enter query no"<<endl;
//     cin>>q;
//     while(q--){
//         int l,r,sum=0;
//         cout<<"Enter l and r values"<<endl;
//         cin>>l>>r;
//     //     for(int i=l;i<=r;i++){
//     //         sum += arr[i];
//     //     }
//     //     cout<<sum<<endl;
   
//      cout<<prefixsum[r] - prefixsum[l-1]<<endl;
//       }
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int arr[n][n];
    cout<<" Enter the elements"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    int q;
    cout<<"Enter queries"<<endl;
    cin>>q;
    while(q--){
        int a,b,c,d,sum=0;
        cout<<"Enter the values of a , b , c, d"<<endl;
        cin>>a>>b>>c>>d;
        for(int i=a;i<=c;i++){
            for(int j=b;j<=d;j++){
                sum = sum + arr[i][j];
            }
        }
        cout<<sum<<endl;
    }
    
}