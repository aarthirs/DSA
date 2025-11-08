class Evaluate {
public:
     int solve(vector<string> input) {
		stack<int> stackArr ; 
          int ans;
          for( string str : input){
               if(str.size()>1 || isdigit(str[0]))  // single / multi digit allow , 
                    stackArr.push(stoi(str));
               else{
                    auto x2=stackArr.top() ; stackArr.pop(); 
                    auto x1 = stackArr.top(); stackArr.pop(); 

                    switch(str[0]){
                         case '+': x1+=x2; break; 
                         case '-':x1-=x2; break; 
                         case '*':x1*=x2; break;
                         case '/':x1/=x2; break;                   
                    }
                    stackArr.push(x1);
               }
               }
          return stackArr.top(); 
     }
};
// explain fo condition
//for eg: + size of 1 -- false and isdigit also false 
// for eg: 4 size of 1 --false but is digit true  
