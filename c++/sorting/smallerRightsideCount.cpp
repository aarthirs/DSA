class CountSmaller {
public:
     vector<int> counts;
     void mergeSort(vector<pair<int,int>>& arr,int start , int end){
          if(start>=end) return ; 

          int mid=(start+end)/2;
          mergeSort(arr,start,mid);
          mergeSort(arr,mid+1,end);

          vector<pair<int,int>> temp ; 
          int i=start , j=mid+1;
          int rightcnt=0;
          while(i<=mid && j<=end){
               if(arr[i].first <= arr[j].first){
                 //when left is lesser than right i.e., 3<5 then add count 
                   counts[arr[i].second]+=rightcnt;
                   temp.push_back(arr[i++]);
               }
               else{
                   // it will increment rightcount 
                    temp.push_back(arr[j++]);
                    rightcnt++;
               }
          }
          while(i<=mid){
            // left side so add the count
               counts[arr[i].second] += rightcnt;
               temp.push_back(arr[i++]);
          }
          while(j<=end){
               temp.push_back(arr[j++]);
          }

          for(int k=start;k<=end;k++){
               arr[k]=temp[k-start];
          }

     }
     vector<int> solve(vector<int> input) {
          int n=input.size();
		      counts.assign(n,0);
          vector<pair<int,int>> arr;
          for(int i=0;i<n;i++){
               arr.push_back({input[i],i});
          }
          mergeSort(arr,0,n-1);
          return counts;
     }
};
