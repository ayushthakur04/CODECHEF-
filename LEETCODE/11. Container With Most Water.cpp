Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.



class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0 , j=height.size()-1;
        int answer=0;
        while(i<j)
        {
            answer=max(answer,min(height[i],height[j])*(j-i));
            if (height[i]<height[j]) i++;
            else j--;
    
        }
        return answer;
    }
};
s
