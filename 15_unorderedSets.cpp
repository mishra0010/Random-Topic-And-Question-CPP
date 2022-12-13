/*
1- Print and store value in unsorted way

*/
/*
#include<bits/stdc++.h>
using namespace std;
void print(unordered_set<string> &us){
  cout<<us.size()<<endl;
  for(auto value : us){
     cout<< value << endl;
  }
}

int main(){
    unordered_set<string> us;
    // us.insert("abc");
    us.insert("abc");
    us.insert("qdf");
    us.insert("efg");
    // auto it = us.find("abc");
    //  if(it!=us.end()){
    //     cout<<(*it)<<endl;;
    //  }
    //  else{
    //     cout<<"No Value Found";
    //  }
    print(us);  
}
*/
// question given n string and q query in each query sting is given print yes if they are present in the set

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
    int q;
    cin>>q;
    while (q--)
    {
        string S;
        cin>>S;
        if(s.find(S)==s.end()){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    
}