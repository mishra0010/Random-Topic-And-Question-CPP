#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int > v = {2,3,4,5,6};
    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();it++){
       cout<<(*it)<<endl;
    }
    vector<pair<int,int>> v_p {{2,3} ,{3,4}, {4,5} };
    vector<pair<int,int>>:: iterator itp;
    for(itp=v_p.begin();itp!=v_p.end();itp++){
        cout<<(*itp).first << " "<<(*itp).second <<endl;;
    }

}