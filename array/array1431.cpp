#include<iostream>
#include<vector>

using namespace std;
int main(){
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extracandies) {
           int maxcandies = 0;
           //to check the greater num 
           for(int i=0;i<candies.size();i++){
            if(candies[i]> maxcandies)
            maxcandies = candies[i];


           }
    

    vector<bool>result;
//to check the  total candies kid has 
    for(int i=0;i<candies.size();i++){
        //if candy are greater than true else false 
        if(candies[i] + extracandies >= maxcandies ){
            result.push_back(true);
                        }
                        else {
                            result.push_back(false);
                        }
    }
    return result;
}
};
}