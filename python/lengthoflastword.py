#Jiabei Luo
#40ms python solution

class Solution:
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        ct = 0
        cting = False
        for c in reversed(s):
            if c != ' ': 
                if not cting: 
                    cting = True
                    ct += 1
                else: 
                    ct += 1
            if c == ' ' and cting:
                cting = False
                return ct
        
        return ct