class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int n=0;
        while(l<r){
            n=max(n,(r-l)*min(heights[l],heights[r]));
            heights[l]>heights[r]?r--:l++;
        }
        return n;
    }
};
