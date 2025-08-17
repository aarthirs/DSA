class NthDigit {
public:
    int solve(int n) {
        int d =1 ;
        //step1 digit block:
        while(n>0){
            int digitblock = d*9*pow(10,d-1);
            if(n<digitblock){
                break;
            }
            else{
                d++;
                n-= digitblock;
            }
        } 

        //2.find the number: eg we get 10
        int startingNum = pow(10,d-1);
        int num =(n-1)/d;
        int target = startingNum + num; 

        string targetStr= to_string(target);

        //3. position : eg: to get 0
        int index = (n-1) % d ;
        return targetStr[index] - '0';
    


    }
};
