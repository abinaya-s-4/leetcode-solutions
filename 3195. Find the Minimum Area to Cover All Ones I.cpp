class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int height = grid.size();
        if(height==0) return 0;
        int width=  grid[0].size();
        int x1=INT_MAX;int y1= INT_MAX;
        int x2= -1; int y2=-1;
        for(int n=0;n<height;n++){
            for(int j=0;j<width;j++){
                if(grid[n][j]==1){
                    x1=min(x1,n);
                    y1=min(y1,j);
                    x2=max(x2,n);
                    y2=max(y2,j);
                }
            }
        }
        if (x2<x1 || y2<y1) return 0;
        return (x2-x1 +1)*(y2-y1+1);
    }
};