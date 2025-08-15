class Search {
public:
     int binarySearch(int l,int r, int target,vector<int> input){
          while(l<=r){
               int mid= l + (r-l)/2;
               if(input[mid]==target){
                    return mid;
               }
               else if  (input[mid] < target){
                    l=mid+1;
               }
               else r=mid-1;
          }
          return -1;

     }
     int solve(vector<int> input,int target) {
		int pivot=-1; 
          int l=0;
          int r=input.size()-1;
          while(l<r){
               int mid= l + (r-l)/2; 
               if(input[mid]<=input[r]) {
                    r=mid; 
               }
               else{
                    l=mid+1;
               }
          }
          pivot=l ; 

          if(target>=input[pivot] && target<= input[input.size()-1]){
              return binarySearch(pivot,input.size()-1,target, input);
          }
          else{
              return binarySearch(0,pivot-1,target,input);
          }
     }
};


/*

-- rotated array : right size of pivot is sorted and left size is unsorted 
-- for searching element in rotated sorted array 
          1. find the pivot 
          2. find the region that the element is in whether it is in rigth size or left size of pivot 
          and do binary search to find the index
*/
