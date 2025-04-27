class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0)  return true;
        int m = flowerbed.size();
        if(m == 1){
            if(flowerbed[0] == 0 && n <= 1)
                return true;
        }
        int count = 0;
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            count = 1;
        }
        for(auto i=1; i<m-1; i++){
            if(count >= n)
                return true;
            if(flowerbed[i] == 0){
                if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                    count ++;
                    flowerbed[i] = 1;
                }                    
            }
        }
        if(flowerbed[m-1] == 0 && flowerbed[m-2] == 0)
            count++;
        if(count >= n)
            return true;
        return false;
    }
};