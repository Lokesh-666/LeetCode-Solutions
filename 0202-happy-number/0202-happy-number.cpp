class Solution
{
private:
    int DOIt(int n){
        if(n == 1) return 1;
        int ans = 0;
        while(n > 0){
            ans += (n % 10) * (n % 10);
            n /= 10;

        }
        return ans;
    }
public:
    bool isHappy(int n)
    {
        if (n == 1)
            return true;
        unordered_set<int> s;
        s.insert(n);
        while(1){
            n = DOIt(n);
            if(s.find(n) != s.end()) return false;
            if(n == 1) return true;
            s.insert(n);
        }
    }
};