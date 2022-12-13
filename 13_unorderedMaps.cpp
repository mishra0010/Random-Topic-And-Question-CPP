/*
1- Not stored values in sorted order
2- tc of insertion and access in O(1)


*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
   unordered_map<int,string> m;
   m[1] = "abc";
   m[5] = "cdc";  // o(log(n)) 
   m[3] = "acd";
   m.insert({2,"asc"}); 
//    auto it = m.find(3);
//    auto it = m.find(7);
//    if(it== m.end()){
//     cout<<"No value"<<endl;
//    }
//    else{
//     cout<<(*it).first<<" "<<(*it).second<<endl;
//    }
   m.erase(3);
   m[2] = "duplicate";
   for(auto &value:m){
    cout<<value.first<<" "<<value.second<<endl;
   }
}

*/


// question given n string and q query in each query sting is given print freq of that string

#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> um;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        string s;
        cin>>s;
        um[s]++;
    }
    int q;
    cin>>q;
    while (q--)
    {
        string s ;
        cin>>s;
        cout<<um[s] <<endl;
    }
    
}