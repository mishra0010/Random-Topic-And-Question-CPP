/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<string> ms;
    ms.insert("abc");
    ms.insert("def");//   s.find() will return first values iterator
                     // incase of duplicacy. s.erase("abc") will delete all duplicates values from set and s.erase(it) will del the 1 value of duplicate element of set
    ms.insert("bcd");
    ms.insert("abc");
    for(auto value: ms){
        cout<<value<<endl;
    }
    ms.find("abc");
}
*/
// question : - chef k pass n candies h or k min h usko k min m max candi khani h jab wo koi bhi candy khaiga to uska by 2 ki int value hame wapas add krdeni h old wale ko replace krke
// 1       tc
// 5 3
// 2 1 7 4 2
// 14
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        multiset<long long> candi_bag;
        long long N,k;
        cin>>N>>k;
        for(int i=0;i<N;i++){
            int candies;
            cin>>candies;
            candi_bag.insert(candies);
        }
        long long maxi_candy_eaten_sum=0;
        for(int i=0;i<k;i++){
            auto biggest_candi_iter = (--candi_bag.end());
            long long biggest_candi_value = *biggest_candi_iter;
            maxi_candy_eaten_sum += biggest_candi_value;
            candi_bag.erase(biggest_candi_iter);
            candi_bag.insert(biggest_candi_value/2);
        }

        cout<<maxi_candy_eaten_sum<<endl;



    }
}
