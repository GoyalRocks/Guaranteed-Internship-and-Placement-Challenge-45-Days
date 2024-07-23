class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxArea=0;
        while(left<=right){
            int area=0;
            int high=min(height[left],height[right]);
            area = (right-left)*high;
            maxArea=max(maxArea,area);
            if(height[left]>height[right])
              right--;
            else 
              left++;
        }
        return maxArea;
    }
};
