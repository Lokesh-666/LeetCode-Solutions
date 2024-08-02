class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int r = ransomNote.length();
        int m = magazine.length();
        unordered_map<char, int> magazine_map;
        for (int i = 0; i < m; i++)
        {
            if (magazine_map.find(magazine[i]) != magazine_map.end())
            {
                magazine_map[magazine[i]]++;
            }
            else
            {
                magazine_map[magazine[i]] = 1;
            }
        }
        // go through each element of ransomNote and reduce value from corresponding magazine_map. if any value becomes negative return false
        for (int i = 0; i < r; i++)
        {
            if (magazine_map.find(ransomNote[i]) != magazine_map.end())
            {
                magazine_map[ransomNote[i]]--;
                if (magazine_map[ransomNote[i]] < 0)
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};