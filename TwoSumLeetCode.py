from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_map = {}  # Dictionary to store the index of each number
        
        for i, num in enumerate(nums):
            complement = target - num  # Find the number needed to reach the target
            
            if complement in num_map:
                return [num_map[complement], i]  # Return indices of the two numbers
            
            num_map[num] = i  # Store the index of the current number
            
        return []  # This line will never be reached due to the problem's constraints

# Example usage
solution = Solution()
print(solution.twoSum([2, 7, 11, 15], 9))  # Output: [0, 1]
