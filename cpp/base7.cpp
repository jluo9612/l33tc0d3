// Jiabei Luo
// 9ms cpp solution

class Solution {
public:
    string convertToBase7(int num) {
        string ans = "";
        int cal = num;
        if (num == 0) return "0";
        if (num < 0) cal = 0-cal;
        while (cal != 0) {
            ans += to_string(cal%7);
            cal /= 7;
        }
        reverse(ans.begin(), ans.end());
        if (num < 0) ans.insert(ans.begin(), '-');
        return ans;
    }
};
