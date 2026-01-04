class ReconstructQueue {
public:
     vector<vector<int>> solve(vector<vector<int>> people) {
		 sort(people.begin(),people.end(),[](vector<int>& p1,vector<int>& p2){
            return p1[0]==p2[0] ?p1[1]<p2[1]:p1[0]>p2[0];
        });
        vector<vector<int>> sol;
        for (auto& person : people){
            sol.insert(sol.begin() + person[1], person);
        }
        return sol;
     }
};

/*
sorting part:
Should p1 come before p2?
Return true → p1 comes first
Return false → p2 comes first
   if differnet height : taller come first 
   same: smaller come first

Heights descending
If same height → k ascending
afer sorting: [7,0],[7,1],[6,1],[5,0],[5,2],[4,4]

inserting:
All taller (or equal) people are already placed
Inserting at index person[1] means:
Exactly k people are before it
All of them are height ≥ h

Why not insert shorter first person[1]?”
Shorter people affect taller people’s count
Taller people don’t care about shorter ones
*/
