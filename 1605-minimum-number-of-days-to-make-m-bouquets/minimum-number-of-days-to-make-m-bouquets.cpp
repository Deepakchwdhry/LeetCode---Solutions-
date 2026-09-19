class Solution {
public:

    long long madboq(int value,vector<int>&bloomDay,int m,int k){
        int cnt = 0;
        long long boq=0;
        for(int i =0;i<bloomDay.size();i++){
            if(bloomDay[i]<=value){
                cnt++;
            }else{
                boq += cnt/k;
                cnt = 0;
            }
        }
        boq+= cnt/k;
        return boq;
    }


    int minDays(vector<int>& bloomDay, int m, int k) {
        int minele = INT_MAX;
        int maxele = INT_MIN;
        for(int i =0;i<bloomDay.size();i++){
            if(bloomDay[i]<minele) minele = bloomDay[i];
             if(bloomDay[i]>maxele) maxele  = bloomDay[i];
        }

        int low = minele;
        int high = maxele;
        int N = bloomDay.size();
        while(low<high){
            int mid = (low+high)/2;
            if((long long)m*k>N) return -1;
            if(madboq(mid,bloomDay,m,k)<m) low = mid+1;
            else high = mid;
        }
        return low;
    }
};