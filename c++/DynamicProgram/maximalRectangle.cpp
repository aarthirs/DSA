class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size(); 
        int n=matrix[0].size(); 
        if(m==1 && n==1) return matrix[0][0]=='1';
        int st[201]={-1} , top=0; 
        int h[201]={0} , maxArea=0; 
        for(int i=0;i<m;i++){
            top=0; 
            for(int j=0;j<=n;j++){
                h[j]= j==n||matrix[i][j]=='0'?0:h[j]+1;
                while(top>0 && (j==n||h[j]<h[st[top]])){
                    int peek=st[top--]; // st.top() and st.pop next line 
                    int w=j-st[top]-1; 
                    int area=h[peek]*w;
                    maxArea=max(maxArea,area);
                }
                   st[++top]=j;
            }
         
        }
        return maxArea;
    }
};

/*
similar to largest rect histogram prob
1. convert this 2d into 1d (array - h ) we already intialize that with 0 so +1  
2. h[j]<h[st.top()] --- height val with smaller enter into loop to get maxarea 
        if condition fails push j in st (st store idx)


if the same qns func mention vector<int> change the condition 
*/
