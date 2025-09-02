class EliminationGame {
public:
     int solve(int n) {
		int head =1 ; 
          int step=1;
          bool left = true; 
          while(n>1){
               // if it left or (rigth and odd)
               if(left || n%2 ==1){
                    head+=step;
               }
               step*=2 ;  // step double on each round 
               n/=2; //half element eliminate on each round
               left = !left; 
          }
          return head;
     }
};
