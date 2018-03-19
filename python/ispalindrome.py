
#Jiabei Luo
#60ms python solution

class Solution:
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s = ''.join(e for e in s if e.isalnum())
        s= s.lower()
        return s == s[::-1]