class MinEatingSpeed {
public:
     int calculatingtotalHr(vector<int>& input , int speed){
          int totalhr=0; 
          for(int piles:input){
               // It should be the number of hours needed to eat each pile:
               totalhr+= (piles + speed -1 )/speed;// ceil(piles/speed)
          }
          return totalhr;
     }
     int solve(vector<int> input,int h) {
		int max=*max_element(input.begin(),input.end()); 
          int min=1; 
          int ans=0;
          while(min<=max){
               int mid=min+ (max-min) /2 ; 
               int totalhr =calculatingtotalHr(input,mid); 
               if(totalhr<=h){
                    ans=mid; 
                    max=mid-1;
               }
               else{
                    min=mid+1;
               }
          }
          return ans;
     }
/*
1.need to find the mini speed of eat the piles of bananas 
2. so binary is effective 
       here finding the mid is matching with totalhr of each piles

Input: N = 4, a[] = {7, 15, 6, 3}, h = 8
Output: 5
Explanation:  If Koko eats 5 bananas/hr, he will take 2, 3, 2, and 1 hour to eat the piles accordingly. So, he will take 8 hours to complete all the piles.  
*/
};min
