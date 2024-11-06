#include<iostream>
#include<vector>
using namespace std;
vector<int> findsubarraysum(vector<int> &arr,int k){
    int N = arr.size();
    vector<int> ans(N-k+1);
    int windowstart = 0, windowsum = 0;
    for(int windowend = 0; windowend<N; windowend++){
        windowsum += arr[windowend];
        if(windowend >= (k-1)){
            ans[windowstart] = windowsum;
            windowsum -= arr[windowstart];
            windowstart += 1;
        }
    }
    return ans;
}
