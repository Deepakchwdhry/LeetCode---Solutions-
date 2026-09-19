class Solution {
public:

    long long timerequired(int value,vector<int>&piles){
        long long total = 0;
        for(int i =0;i<piles.size();i++){
            total += (piles[i]+value-1)/value;
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxele = INT_MIN;
        for(int i =0;i<piles.size();i++){
            if(piles[i]>maxele) maxele = piles[i];
        }

        int low = 1;
        int high = maxele;
        while(low<=high) {
            int mid = (low+high)/2;
            if(timerequired(mid,piles)<=h) {high = mid-1;}
            else{            low = mid+1;}
        }
        return low;
    }
};