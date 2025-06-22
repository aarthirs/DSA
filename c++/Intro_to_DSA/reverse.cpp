class Reverse {
public:
     queue<int> reverse(queue<int> input) {
		// to rev create stack and push the element to queue 
          stack<int> s;
          queue<int> que ;

          while(!input.empty()){
               s.push(input.front());
               input.pop();
          }

          while(!s.empty()){
               que.push(s.top());
               s.pop();
          }

          return que;
     }
};
