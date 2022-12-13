/*
map store value in sorted order
no duplicate element stored in map it overrites old index value with new one
insertion and access in map is o(log(n)) but when we have to ins or access n values then it is O(nlog(n))
disadv :- if key is also string then the insertion time will be s.size() * O(log(n))
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
   map<int,string> m;
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

// question 
/* given N strings , print unique strings in lexographical order with their
frequency

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        string S;
        cin>>S;
        m[S]++;
    }
    for(auto &value:m){
        cout<<value.first<<" "<<value.second<<endl;
    }
}