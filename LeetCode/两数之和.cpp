/*
*给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。
*你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。
*示例 :
*给定 nums = [2, 7, 11, 15], target = 9
*因为 nums[0] + nums[1] = 2 + 7 = 9
*所以返回[0, 1]
*time = 2018/4/22
*/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> res;
		int n = nums.size();
		for (int i = 0; i<n; ++i)
		{
			for (int j = i + 1; j<n; ++j)
			{
				if (nums[i] + nums[j] == target)
				{
					res.push_back(i);
					res.push_back(j);
					break;
				}
			}
			if (!res.size() == 0)
				break;
		}
		return res;
	}
};
int main() {
	Solution a;
	vector<int> b = {2, 7, 11, 15};
	vector<int> c = a.twoSum(b, 22);
	cout << c[0] << ", " << c[1] << endl;
	system("pause");
	return 0;
}