/*
*二维向量的输入问题：
*不像二维数组那样，可以直接对arr[i][j]进行循环赋值。
*在vector<vector<int>>中，因为vector是一个容器，
*最外层的vector容器中放着更小的vector，而里层的vector里面放的是int型的数字。
*所以我们首先要对里层的vector容器赋值，然后再把里层的vector作为元素插入到外层的vector中。
*代码如下：
*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<vector<int>> test;
	vector<int> v;
    int temp;
	test.clear();
	//开始输入
	for (int i = 0; i<2; i++) {
		v.clear(); //每次记得clear:)
		for (int j = 0; j < 2; j++){
			cin >> temp;
			v.push_back(temp);
		}
		test.push_back(v);
	}

	//输出
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++)
			cout << test[i][j] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}