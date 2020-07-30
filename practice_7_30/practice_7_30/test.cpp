#define _CRT_SECURE_NO_WARNINGS 1
//1.
//链接：https://www.nowcoder.com/questionTerminal/6736cc3ffd1444a4a0057dee89be789b?orderByHotValue=1&page=1&onlyReference=false
//输入描述 :
//输入的第一行为一个正整数n(1 ≤ n ≤ 10 ^ 5)
//第二行包括3*n个整数a_i(1 ≤ a_i ≤ 10 ^ 9), 表示每个参赛选手的水平值.
//输出描述 :
//输出一个整数表示所有队伍的水平值总和最大值.
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//		//要持续接收输入多组测试用例
//		long long sum = 0;
//		vector<int> a;
//		a.resize(3*n);
//		for (int i=0; i < (3 * n);++i)
//		{
//			cin >> a[i];
//		}
//		//排序 
//		std::sort(a.begin(),a.end());
//		//然后取下标为3n - 2，3n - 4 ，3n - 4... n+2，n位置的元素累加即可， 相当下标为[0,n-1]的n个数做每组的最左边的数，剩下的2个数据两个为一组， 大的值做最右边的数，次大的做中间值，这里就是把这个次大的值加起来
//		for (int i = n; i <= (3 * n) - 2;i+=2)
//		{
//			sum += a[i];
//		}
//		cout << sum << endl;
//	}
//}

//2.输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。
//例如，输入”They are students.”和”aeiou”，则删除之后的第一个字符串变成”Thy r stdnts.”
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string str1, str2;//实例化对象
//	getline(cin, str1);
//	getline(cin, str2);
//
//	// 使用哈希映射思想先str2统计字符出现的次数
//	int hashtable[256] = { 0 };
//	for (size_t i = 0; i < str2.size(); ++i)
//	{
//		hashtable[str2[i]]++;
//	}
//
//	// 遍历str1，str1[i]映射hashtable对应位置为0，则表示这个字符在 
//	// str2中没有出现过，则将他+=到ret。
//	string ret;
//	for (size_t i = 0; i < str1.size(); ++i)
//	{
//		if (hashtable[str1[i]] == 0)
//			ret += str1[i];
//	}
//
//	for (size_t i = 0; i < ret.size(); ++i)
//	{
//		cout << ret[i] << endl;
//	}
//	
//	//return 0;
//}

//3.定义排序子序列为一个数组中一段连续的子序列,并且这段子序列是非递增或者非递减排序的。
//牛牛有一个长度为n的整数数组A,他现在有一个任务是把数组A分为若干段排序子序列,牛牛想知道他最少可以把这个数组分为几段排序子序列.
//如样例所示,牛牛可以把数组A划分为[1,2,3]和[2,2,1]两个排序子序列,至少需要划分为2个排序子序列,所以输出2 
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> a;
//	a.resize(n + 1);
//	a[n] = 0;
//
//	////读入数组
//	for (int i = 0; i<n; ++i)
//		cin >> a[i];
//
//	int i = 0;
//	int count = 0;
//	while (i<n)
//	{
//		//1.非递减子序列
//		if (a[i]<a[i + 1])
//		{
//			while (i<n && a[i] <= a[i + 1])
//				i++;
//			count++;
//			i++;
//		}
//		else if (a[1] == a[i + 1])
//			i++;
//		else//2.非递增子序列
//		{
//			while (i<n && a[i] >= a[i + 1])
//				i++;
//			count++;
//			i++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}
//4.将一句话的单词进行倒置，标点不倒置。比如 I like beijing. 经过函数后变为：beijing. like I 
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string str;
//	getline(cin, str);
//	//1.翻转整个句子
//	reverse(str.begin(), str.end());
//	//2.翻转单词
//	auto start = str.begin();
//	while (start != str.end())
//	{
//		auto end = start;
//		while (end != str.end() && *end != ' ')//判断单词
//			end++;
//		reverse(start, end);
//
//		if (end != str.end())
//			start = end + 1;
//		else
//			start = end;
//	}
//	cout << str << endl;
//	return 0;
//}
//5.读入一个字符串str，输出字符串str中的连续最长的数字串 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str;
	string res;
	string cur;
	cin >> str;
	//1.遍历寻找
	for (int i = 0; i <= str.length(); i++)
	{
		//数字+=cur中
		if (str[i] >= '0' && str[i] <= '9')
		{
			cur += str[i];
		}
		else
		{
			//找出更长的字符串，则更新字符串
			if (res.size()<cur.size())
				res = cur;
			else
				cur.clear();
		}
	}
	cout << res<<endl;
	return 0;
}