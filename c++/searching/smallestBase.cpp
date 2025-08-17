
class SmallestGoodBase {
public:
    int checkBase(int digit, long long base, long long targetval) {
        long long mul = 1;
        for (int i = 0; i < digit; i++) {
            targetval -= mul;
            if (i != digit - 1 && (mul > targetval / base)) return 1; // help to check b^d ! > target val
            if (targetval < 0) break;
            mul *= base;
        }
        if (targetval == 0) return 0; // correct ans
        else if (targetval < 0) return 1; // it is greater than
        else return -1;
    }

    string solve(string s) {
        long long n = stoll(s);
        long long ans = n - 1;

        for (int d = 64; d >= 2; d--) {
            long long l = 2, r = n - 1; // base must be >= 2
            while (l <= r) {
                long long mid = l + (r - l) / 2;
                int val = checkBase(d, mid, n);
                if (val == 0) return to_string(mid);
                else if (val < 0) l = mid + 1;
                else r = mid - 1;
            }
        }
        return to_string(ans);
    }
};


