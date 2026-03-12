class Solution:
    def isPalindrome(self, s: str) -> bool:
        output = False
        ans = ""
        for i in range(0, len(s)):
            if s[i].isalpha():
                ans += s[i].lower()
            elif s[i].isdigit():
                ans += s[i]

        n = len(ans)
        ans = ans.lower()
        for i in range(0, floor(n / 2)):
            if ans[i] != ans[n - i - 1]:
                return output
        output = True
        return output
         