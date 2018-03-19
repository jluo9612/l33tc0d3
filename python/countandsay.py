#Jiabei Luo
#36ms recursive python solution 

class Solution:
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        if n <= 1:
            return "1"
        else:
            prev = self.countAndSay(n-1)
            if len(prev) == 1:
                    return "1" + prev
                
            pnum = prev[0]
            res = ''
            count = 0
            for num in prev[1:]:
                if num != pnum:
                    count += 1
                    res += (str(count) + str(pnum))
                    count = 0
                    pnum = num
                elif (num == pnum): 
                    count += 1
                    pnum = num
            count += 1
            res += (str(count) + str(pnum))
            count = 0
            return res