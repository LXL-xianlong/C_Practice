#define _CRT_SECURE_NO_WARNINGS 1
//1.
//���ӣ�https://www.nowcoder.com/questionTerminal/6736cc3ffd1444a4a0057dee89be789b?orderByHotValue=1&page=1&onlyReference=false
//�������� :
//����ĵ�һ��Ϊһ��������n(1 �� n �� 10 ^ 5)
//�ڶ��а���3*n������a_i(1 �� a_i �� 10 ^ 9), ��ʾÿ������ѡ�ֵ�ˮƽֵ.
//������� :
//���һ��������ʾ���ж����ˮƽֵ�ܺ����ֵ.
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
//		//Ҫ����������������������
//		long long sum = 0;
//		vector<int> a;
//		a.resize(3*n);
//		for (int i=0; i < (3 * n);++i)
//		{
//			cin >> a[i];
//		}
//		//���� 
//		std::sort(a.begin(),a.end());
//		//Ȼ��ȡ�±�Ϊ3n - 2��3n - 4 ��3n - 4... n+2��nλ�õ�Ԫ���ۼӼ��ɣ� �൱�±�Ϊ[0,n-1]��n������ÿ�������ߵ�����ʣ�µ�2����������Ϊһ�飬 ���ֵ�����ұߵ������δ�����м�ֵ��������ǰ�����δ��ֵ������
//		for (int i = n; i <= (3 * n) - 2;i+=2)
//		{
//			sum += a[i];
//		}
//		cout << sum << endl;
//	}
//}

//2.���������ַ������ӵ�һ�ַ�����ɾ���ڶ����ַ��������е��ַ���
//���磬���롱They are students.���͡�aeiou������ɾ��֮��ĵ�һ���ַ�����ɡ�Thy r stdnts.��
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string str1, str2;//ʵ��������
//	getline(cin, str1);
//	getline(cin, str2);
//
//	// ʹ�ù�ϣӳ��˼����str2ͳ���ַ����ֵĴ���
//	int hashtable[256] = { 0 };
//	for (size_t i = 0; i < str2.size(); ++i)
//	{
//		hashtable[str2[i]]++;
//	}
//
//	// ����str1��str1[i]ӳ��hashtable��Ӧλ��Ϊ0�����ʾ����ַ��� 
//	// str2��û�г��ֹ�������+=��ret��
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

//3.��������������Ϊһ��������һ��������������,��������������Ƿǵ������߷ǵݼ�����ġ�
//ţţ��һ������Ϊn����������A,��������һ�������ǰ�����A��Ϊ���ɶ�����������,ţţ��֪�������ٿ��԰���������Ϊ��������������.
//��������ʾ,ţţ���԰�����A����Ϊ[1,2,3]��[2,2,1]��������������,������Ҫ����Ϊ2������������,�������2 
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
//	////��������
//	for (int i = 0; i<n; ++i)
//		cin >> a[i];
//
//	int i = 0;
//	int count = 0;
//	while (i<n)
//	{
//		//1.�ǵݼ�������
//		if (a[i]<a[i + 1])
//		{
//			while (i<n && a[i] <= a[i + 1])
//				i++;
//			count++;
//			i++;
//		}
//		else if (a[1] == a[i + 1])
//			i++;
//		else//2.�ǵ���������
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
//4.��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing. �����������Ϊ��beijing. like I 
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string str;
//	getline(cin, str);
//	//1.��ת��������
//	reverse(str.begin(), str.end());
//	//2.��ת����
//	auto start = str.begin();
//	while (start != str.end())
//	{
//		auto end = start;
//		while (end != str.end() && *end != ' ')//�жϵ���
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
//5.����һ���ַ���str������ַ���str�е�����������ִ� 
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
	//1.����Ѱ��
	for (int i = 0; i <= str.length(); i++)
	{
		//����+=cur��
		if (str[i] >= '0' && str[i] <= '9')
		{
			cur += str[i];
		}
		else
		{
			//�ҳ��������ַ�����������ַ���
			if (res.size()<cur.size())
				res = cur;
			else
				cur.clear();
		}
	}
	cout << res<<endl;
	return 0;
}