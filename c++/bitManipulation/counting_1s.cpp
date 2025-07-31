class HammingWeight {
public:
	int solve(string s) {
    		return bitset<32>(s).count();
      }
};
