#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
int findMax(vector<int & nums>)
{ int max=0;
  int count=0;
    for(int i=0;i<nums.size;i++)
    {
if(nums[i]==1)
{count++;
}
else{
    if(count>max)
    {
        max=count;
    }
    count=0;
}
if(count>max)
{
    max=count;
}
return max;
        // for(int j=1;j<nums.size;j++)
        // {
        // if(nums[i]==nums[j])
        // {
        //     flag++;
        // }
        // }
    }
}
};
int main()
{
    vector<int>nums={1,1,0,1,1,1};
    Solution s1;
   int s= s1.findMax(nums);
    cout<<s;
    return 0;
}
