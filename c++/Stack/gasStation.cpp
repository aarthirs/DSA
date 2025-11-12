class GasStation {
public:
     int solve(vector<int> gas,vector<int> cost) {
		int start=0,total =0, tank=0;

          for (int i=0;i<gas.size();i++){
               int net=gas[i]-cost[i];
               total+=net;
               tank+=net;

               if(tank<0){
                    tank=0; 
                    start=i+1;
               }
          } 

          return total>=0 ?start:-1; 

     }
};

/*
1. the gn 2 array is  possible if sum of these are equal - in return total>=0 
2. reseting the tank when net is < 0
3. cost : station i to i+1 
*/
