class PredictTheWinner {
public:
     int predict(vector<int> input, int s, int l){
          if(s==l){
               return input[s];
          }

          int first = input[s] - predict(input,s+1,l);
          int last= input[l] - predict(input,s,l-1); 

          return max(first,last);
     }
     bool check(vector<int> input) {
		return predict(input,0,input.size()-1) >=0 ; 
     }
};

/*
Step 1: getMaxScore(nums, 0, 2)
input :[1,5,2]
Options:

Pick first = 1
→ Remaining: [5,2]
→ Opponent’s best: getMaxScore(nums, 1, 2)
→ first = 1 - getMaxScore(1,2)

Pick last = 2
→ Remaining: [1,5]
→ Opponent’s best: getMaxScore(nums, 0, 1)
→ last = 2 - getMaxScore(0,1)

Step 2: Compute getMaxScore(nums, 1, 2)

Subarray [5,2]:

Pick first = 5 - getMaxScore(2,2)
→ = 5 - 2 = 3

Pick last = 2 - getMaxScore(1,1)
→ = 2 - 5 = -3

max(3, -3) = 3

👉 So getMaxScore(1,2) = 3.

Step 3: Compute getMaxScore(nums, 0, 1)

Subarray [1,5]:

Pick first = 1 - getMaxScore(1,1)
→ = 1 - 5 = -4

Pick last = 5 - getMaxScore(0,0)
→ = 5 - 1 = 4

max(-4, 4) = 4

👉 So getMaxScore(0,1) = 4.

Step 4: Back to getMaxScore(nums, 0, 2)

first = 1 - getMaxScore(1,2) = 1 - 3 = -2

last = 2 - getMaxScore(0,1) = 2 - 4 = -2

max(-2, -2) = -2
*/
