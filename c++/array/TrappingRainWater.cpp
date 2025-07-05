class TrappingRainwater {
public:
     int trap(vector<int> input) {
		
          int n =input.size(); 
          int totalTrap=0;
          vector<int> leftMax(n); 
          vector<int> rightMax(n); 
          if(n<3){
               return 0;
          }
          leftMax[0]=input[0];
         for(int i=1;i<n;i++){
              leftMax[i]=max(leftMax[i-1],input[i]);
          }
          rightMax[n-1]=input[n-1];
          for(int i=n-2;i>=0;i--){
               rightMax[i]=max(rightMax[i+1],input[i]);
          }

          for(int i=0;i<n;i++){
              int water= min(leftMax[i],rightMax[i]) - input[i];
              if(water>0){
               totalTrap+=water;
              }
          }
          return totalTrap;

     }
};

/*
1.finding the max of left and right 
2.min(left and right) - input[i] 
3. return the totalsum

*/
