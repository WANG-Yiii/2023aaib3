//LeetCode
//使用大一教過的{剝皮法}, 再左右比較,不同就ans++
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans =0;
        while(start>0){
            cout << start%2;
            start /=2;
        }
        return ans;//迴圈後面 return ans
    }
};