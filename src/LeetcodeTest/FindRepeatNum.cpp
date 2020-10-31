﻿/*
在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。
数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。
请找出数组中任意一个重复的数字。

示例 1：
输入：
[2, 3, 1, 0, 2, 5, 3]
输出：2 或 3 
 
限制：
2 <= n <= 100000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include <vector>

int findRepeatNumber(std::vector<int>& nums) 
{
	std::vector<int> counter;
	counter.reserve(nums.size());
	counter.assign(nums.size(), 0);

	for (int& num : nums)
	{
		counter[num]++;
		if (counter[num] > 1)
			return num;
	}

	return -1;
}

//int findRepeatNumber(int* nums, int numsSize)
//{
//	int a[numsSize];
//	memset(a, 0, numsSize);
//	for (int i = 0; i < numsSize; i++)
//	{
//		a[nums[i]]++;
//		if (a[nums[i]] > 1)
//			return nums[i];
//	}
//	return -1;
//}