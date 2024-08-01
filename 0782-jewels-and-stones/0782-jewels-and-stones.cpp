class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> set;
        int j = jewels.length();
        int s = stones.length();
        for (int i = 0; i < j; i++)
        {
            set.insert(jewels[i]);
        }
        int ans = 0;
        for (int i = 0; i < s; i++)
        {
            if (set.find(stones[i]) != set.end())
            {
                ans++;
            }
        }
        return ans;
    }
};