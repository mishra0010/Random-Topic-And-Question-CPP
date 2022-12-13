/*     HASHING TECHNIQUE TO CALC COUNT EFFECTIVELY
 Isme hamko ye karna y ki har element of array ka count phle se nikal k rkhna hai by hsh[arr[i]]++;

*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];
int main(){
    int n;
    cout<<"input number of elements of array ";
    cin>>n;
    int arr[n];
    cout<<"Input elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hsh[arr[i]]++;
    }
    int q;
    cout<<"Input query ";
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;

        /*
       int count =0;
        for(int i=0;i<n;i++){
            if(arr[i] == x){  // Alternative way but mehnga sala
                count++;
            }
        }
        cout<<count<<endl;  */

    cout<<hsh[x]<<endl;
    }
    
}