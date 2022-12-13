/*
Ias code me phle hamne normally vector ku define kia usme input lia or 
output print karaya fir hamne ek naye vector me purane ko copy kia by using
refrence taaki agar ek me bhi change kare to wo dono me visible ho sake!!!
*/

#include<bits/stdc++.h>
using namespace std;
void PrintVector(vector<int> &v){
    cout<<v.size()<<endl;
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   v.push_back(8);
   cout <<endl;
}
int main(){
    vector<int>v1;
    v1.push_back(10);
    v1.push_back(2); 
    vector<int>&v2 = v1;
    v2.push_back(9);
    PrintVector(v1);
    PrintVector(v1);
    PrintVector(v2);
    // vector<int> v;
            //   vector<int> v(10,3);
            //   v.push_back(7);
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//     int x;

//     cin>>x;
            //    PrintVector(v);
    // v.push_back(x);
  
//    }
    
}