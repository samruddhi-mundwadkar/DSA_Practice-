#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        
        for(int i = 0 ; i<nums.size();i++){  //to visit element
            int count=0; 
            for(int j = 0; j< nums.size(); j++){ //to check the num is smaller than others one by one by using the loop 
                if(nums[j] < nums[i]){
                    count++;
                    // to count the elements that are smaller than the other 
                }
            }
            result.push_back(count);

        }
        return result;
    }
};