/*

Dekho ia sprogram me ham array of vectors ki baat kar rai hai jiska matlab
ye hota hai ki collection of vectors to hai par unka number dynamic nhi hai 
--- sizeOfVector is fixed in nature


*/
#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int N;
    cin>>N;
    vector <int> v[N];
    for(int i=0;i<N;i++){
     int sizeOfVector;
     cin>>sizeOfVector;
     for(int j=0;j<sizeOfVector;j++){
       int x;
       cin>>x;
       v[i].push_back(x);
     }
    }
    cout<<endl;
    for(int i=0;i<N;i++){
        printVector(v[i]);
    }
     
  


}