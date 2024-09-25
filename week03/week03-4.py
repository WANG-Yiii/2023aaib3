#LeetCode 28.Find the Index of the First Occurrence in a String
#學習計畫第4週Easy 在一堆草堆裡hatstacks,找到一支needle
#在Python只要一行a.find(b) 在字串a 找到字串b
class Solution:
    def strStr(self, a: str, b: str) -> int:
        return a.find(b)