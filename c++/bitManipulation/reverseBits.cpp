class ReverseBits {
public:
    uint32_t solve(string n) {
    
        bitset<32> num(n); 
        uint32_t ans = 0;

        for (int i = 0; i < 32; i++) {
            int curr_pos = 31 - i;                      // Target bit position
            int bit = num[i] ;                         // Extract i-th bit
            int mask = bit << curr_pos;                 // Move it to reversed position
            ans |= mask;                                // OR it into result
        }

        return ans;
    }

};
