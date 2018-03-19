// jiabei luo
// 40ms c++ solution

class Solution:
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """

        if not strs: return ''
        ans = ''
        pref = True
        for c in zip(*strs):
            for i in range(len(c)):
                if len(c) == 1:
                    pref = True
                    break
                if i < len(c)-1 and c[i] != c[i+1]:
                    pref = False
                    break
            if pref == False:
                break
            else: ans += c[0]
                
        return ans