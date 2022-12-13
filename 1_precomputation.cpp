/*      PRE COMP OF FACT EFFECTIVELY

In this method ham phle se hi sabka factorail calc
karke rkkhenge or jarurat padne par use krlenge 
with the help of a large no than n and a long long array

*/

#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
const int N = 1e5+7;
int fact[N];
int main(){
        fact[0]=1,fact[1] =1;
        for(int i=2;i<=N;i++){
            fact[i] = (fact[i-1] * i) % M;
        }

    int t;
    cout<<"enter no of test cases"<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the numbers"<<endl;
        cin>>n;
        
        cout<<fact[n]<<endl;
    }
}