class Solution
{
public
    int removeAlmostEqualCharacters(String s)
    {
        int ans = 0;
        int i = 1;
        while (i < s.length())
        {
            if (s.charAt(i) == s.charAt(i - 1) || Math.abs(s.charAt(i) - s.charAt(i - 1)) == 1)
            {
                ans++;
                i += 2;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
}