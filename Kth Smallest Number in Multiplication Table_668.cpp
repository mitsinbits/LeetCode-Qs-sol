int count(int m,int n,int mid){
        int cnt= 0;
        for(int i = 1;i<=m;i++){
            cnt += min(n,mid/i);
        }
        return cnt;
    }
    
    int findKthNumber(int m, int n, int k) {
        int low = 1;
        int high = m*n;
        int ans = 0;
        while(low <= high){
            int mid = low +(high-low)/2;
            if(count(m,n,mid) < k){
                low = mid + 1;
            }
            else{
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }