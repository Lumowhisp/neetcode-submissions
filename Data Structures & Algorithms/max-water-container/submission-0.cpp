class Solution {
public:
    int maxArea(vector<int>& height) {
      int i=0;
      int j=height.size()-1;
      int maxWater=0;
      while(i<j){
        int waterContains=min(height[i],height[j])*(j-i);
        maxWater=max(maxWater,waterContains);
        if(height[i]<height[j]){
          i++;
        }
        else{
          j--;
        }
      }
      return maxWater;
    }
};