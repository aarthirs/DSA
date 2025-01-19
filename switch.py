  def switchCase(self, choice, arr):
        # Code here
        
            if choice==1:
                circle=(math.pi)*arr[0]**2
                return circle
                
            elif  choice==2:
                rectangle=arr[0]*arr[1]
                return rectangle

##Input: choice = 1, R = 5
#Output: 78.53981633974483
#Explaination: The choice is 1. So we have to calculate the area of the circle.
