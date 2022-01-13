    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int k = points[0][0];
        int j = points[0][1];
        int cnt = 1;
        for(int i = 1;i<points.size();i++){
            if(j >= points[i][0]){
                k = max(i,points[i][0]);
                j = min(j,points[i][1]);
            }
            else{
                cnt++;
                k = points[i][0];
                j = points[i][1]; 
            }
        }
        return cnt;
    }