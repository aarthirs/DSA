class MaximumUnits {
public:
     int solve(vector<vector<int>> boxTypes,int truckSize) {

     sort(boxTypes.begin(),boxTypes.end(), [](const vector<int> &a , vector<int>&b){
          return a[1]>b[1];
     });
     int totalUnit=0;
     for(int i=0;i<boxTypes.size();i++){
         
         int box=boxTypes[i][0];

          if(truckSize==0) break;
          
               int minBox=min(box,truckSize);
               totalUnit+=boxTypes[i][1]*minBox;
               truckSize-=minBox;
          
     }  
     return totalUnit;

     }
};

/*
For example, given boxTypes = [[5,10],[2,5],[4,7],[3,9]] and truckSize = 10, 
sorting by units per box yields [[5,10],[3,9],[4,7],[2,5]]. 
Loading proceeds by taking 5 boxes of 10 units each (50 units), then 3 boxes of 9 units each (27 units), and finally 2 boxes of 7 units each (14 units), 
resulting in a total of 91 units with no space left
here eachtime when we adding totalunit we'll check it is reacing the total capacity
*/
