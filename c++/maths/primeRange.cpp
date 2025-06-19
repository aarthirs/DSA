class PrimeRange {
public:
    bool checkvalidInt(int n){
        while(n > 0){
            if(n % 10 == 3){
                return true;
            }
            n /= 10;
        }
        return false;
    }

    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }

    vector<string> check(int n, int m) {
        vector<string> resultArr;

        for (int i = n; i <= m; i++) {
            if (isPrime(i) && !checkvalidInt(i)) {
                resultArr.push_back(to_string(i));
            }
        }

        if (resultArr.empty()) {
            resultArr.push_back("No valid primes found.");
        }

        return resultArr;
    }
};
