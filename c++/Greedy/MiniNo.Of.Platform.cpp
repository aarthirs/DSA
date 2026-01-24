class MinimumNumberOfPlatforms {
public:
     int solve(vector<int> arr,vector<int> dep) {
          int n = arr.size();
          int plat_needed = 1, result = 1;
          
          // Run a nested for-loop to find the overlap
          for (int i = 0; i < n; i++) {
          
               // Initially one platform is needed
               plat_needed = 1;
               for (int j = 0; j < n; j++) {
                    if (i != j)
                         // Increment plat_needed when there is an
                         // overlap
                         if (arr[i] >= arr[j] && dep[j] >= arr[i])
                              plat_needed++;
               }
          
               // Update the result
               result = max(plat_needed, result);
          }
          return result;
     }
};
