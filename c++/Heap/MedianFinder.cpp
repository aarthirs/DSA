class MedianFinder {
public:
        priority_queue<int> maxhp ; //smallest
        priority_queue<int , vector<int>,greater<int>> minhp; // greater numbers
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        maxhp.push(num); 
        
        minhp.push(maxhp.top());
        maxhp.pop();
        if(minhp.size()>maxhp.size()){
            maxhp.push(minhp.top());
            minhp.pop();
        }
    }
    
    double findMedian() {
        if(maxhp.size()>minhp.size()){
            return maxhp.top();
        }
        else{
            return (maxhp.top()+minhp.top() )/2.0;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */


 /*
 smallest-median-greater
 1.here we gonna main two bucket 1: min numbers 2.max numbers 
    if it is even both bucket has same no's of size [greatest number in small and smallest number from greater bucket is for getting median]
    odd: one is greater than other  -- to maintain these two we gonna use heap

    b1- max heap top most element gives max 
    b2-min heap top element give min

2.add nums:

first add in maxhp then remove added to minhp and check if both size are equal if no : pop from minhp add to maxhp 
by doing this -> then finally get the top of both . if both are same size 
if different size : odd -> from maxsize get the top    
 */
