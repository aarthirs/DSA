class CapacityToShipPackage {
public:
     bool capacityCheck(vector<int>& input , int days, int capacity){
          int currectLoad=0 ;
          int daycount=1;
          for(int m :input){
               if(currectLoad+m > capacity){
                    daycount++;
                    currectLoad=0;// reset for new day
               }
               currectLoad+=m;
               if(daycount > days) return false ;
          }
          return true;
     }
     int solve(vector<int> input,int days) {
		int left=*max_element(input.begin(),input.end());
          int right=accumulate(input.begin(),input.end(),0); 
          int ans;
          while(left<=right){
               int  mid= left + (right- left)/2 ; 
               if(capacityCheck(input,days,mid)){
                    ans=mid;  //capacity checked but make it reduce the mid value 
                    right=mid-1;
               }
               else{
                    left=mid+1; // mid is low make it big
               }
          }
          return ans;
     }
};
