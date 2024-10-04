
nums = []
n = len(nums) // 2
for i in nums:
    if(nums.count(i) > n):
        print(i)
        break