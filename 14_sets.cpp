/*
1 - Print and store value in sorted order
2 - Unique element stored 
3- uses RBT data structure for implementations
4- TC IS O(log(n))
*/

/*
#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
  cout<<s.size()<<endl;
  for(auto value : s){
     cout<< value << endl;
  }
}

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("abc");
    s.insert("qdf");
    s.insert("efg");
    auto it = s.find("abc");
     if(it!=s.end()){
        cout<<(*it)<<endl;;
     }
     else{
        cout<<"No Value Found";
     }
    print(s);  
}

*/

// ques -> Given N stings,print unique string in lexographical order

#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string> s;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        string S;
        cin>>S;
        s.insert(S);
    }
    for(auto &value:s){
        cout<<value<<endl;
    }
}