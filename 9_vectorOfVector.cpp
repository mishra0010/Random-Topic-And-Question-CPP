/*
Isme hamne vector of vector ki baat ki hai jo ki similar hai array of vector
ke but isme no of vectrs bhi dynamic in nature hai 
--- sizeOfVector() - > dynamic nature
yaha hamne temp vector use kia hai kyuki vector ki row unknown hai or uske 
baad hamne ise main vector me daal dia to y vector of vector ban gya....
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
    vector <vector<int>> v;
    for(int i=0;i<N;i++){
     int sizeOfVector;
     cin>>sizeOfVector;
      vector<int> temp;
     for(int j=0;j<sizeOfVector;j++){
       int x;
       cin>>x;
       temp.push_back(x);
     }
     v.push_back(temp);
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        printVector(v[i]);
    }
     
  


}