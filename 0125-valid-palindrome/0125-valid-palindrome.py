class Solution:
    def isPalindrome(self, s: str) -> bool:
        ans = ""
        for i in range(0, len(s)):
            if s[i].isalnum():
                ans += s[i].lower()

        n = len(ans)
        for i in range(0, floor(n / 2)):
            if ans[i] != ans[n - i - 1]:
                return False
        return True
         