#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> majorityElement(vector<int>& v) {
            map<int,int>arr;
            for(int i=0;i<v.size();i++){
                arr[v[i]]++;
            }
            vector<int>x;
            for(auto k:arr){
                if(k.second > v.size()/3) x.push_back(k.first);
            }
            
            return {x};
        }
    };
    
int main(){
    Solution obj;
    vector<int>a = {2,7,7,8,2,7,7,7,4,8,2};
    vector<int>d =obj.majorityElement(a);
    for(auto &g:d){
        cout<<g<<endl;
    }
    
}

