/*
*--------------------二分搜索---------------------------------------------
*
*首先，假设表中元素是按升序排列，将表中间位置记录的关键字与查找关键字比较，
*如果两者相等，则查找成功；否则利用中间位置记录将表分成前、后两个子表，
*如果中间位置记录的关键字大于查找关键字，则进一步查找前一子表，否则进一步查找后一子表。
*重复以上过程，直到找到满足条件的记录，使查找成功，
*或直到子表不存在为止，此时查找不成功。
*------------------------------------------------------------------------
*优点：是比较次数少，查找速度快，平均性能好
*缺点：是要求待查表为有序表，且插入删除困难。
*条件：查找的数组必须要为有序数组。
*
*两种实现方法，如下代码：
*/
#include <iostream>
#include <vector>
using namespace std;
//递归实现函数
int TwoPointSearch_recursion() {
	return 0;
}
//循环实现函数
int TwoPointSearch_loop(vector<int> &t_nums, int target) {
	auto beg = t_nums.begin();//初始化
	auto end = t_nums.end();//初始化
	auto mid = t_nums.begin() + (end - beg) / 2;//初始化话中间点
	while (mid != end && *mid != target) {
		if (target < *mid) //判断target是否在mid前半部
			end = mid;//如果是我们忽略后半部
		else
			beg = mid + 1;//此处加一是因为mid已经被判断不是target没必要再次进行判断
		mid = beg + (end - beg) / 2;
	}
	return (mid - t_nums.begin());
}
int main() {
	vector<int> nums(19);
	//初始化容器
	int i = 1;
	for (auto j = nums.begin(); j != nums.end(); ++j)
		(*j) = i++;
	//循环实现调用
	cout << nums[TwoPointSearch_loop(nums, 1)] << endl;
	//递归实现调用
	system("pause");
	return 0;
}