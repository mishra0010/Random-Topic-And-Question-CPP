#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int > v = {2,3,4,5,6};

    // for(auto it=v.begin();it!=v.end();it++){
    //    cout<<(*it)<<endl;
    // }
    vector<pair<int,int>> v_p {{2,3} ,{3,4}, {4,5} };
    // for(auto itp=v_p.begin();itp!=v_p.end();itp++){
    //     cout<<(*itp).first << " "<<(*itp).second <<endl;
    // }
    for(auto value: v){
        cout<<value<<" ";
    }
    cout<<endl;
    for(auto &value:v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }

}