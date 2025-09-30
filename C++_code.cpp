//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while(l <= r){
            int mid = (l+r)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                l = mid + 1;

            }
            else{
                r = mid - 1;
            }	
        }
        return -1;
        
    }
};

int main()
{
    int n = 6;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }
    int data;
    cout<< "Enter target: ";    
    cin>> data;
    Solution obj;
    cout<< obj.search(arr, data) << endl;
    return 0;
}