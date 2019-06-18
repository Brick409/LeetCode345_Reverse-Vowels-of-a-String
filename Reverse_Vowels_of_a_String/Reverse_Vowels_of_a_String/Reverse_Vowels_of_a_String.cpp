// Reverse_Vowels_of_a_String.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>  //包括min和max函数
#include <string>

using namespace std;

/*
345题目：给定一个字符串，将字符串中的元音字母翻转
	如：给出“hello”，返回“holle”
	如：给出“leetcode”，返回“le0tcede”
	元音不包含y，包括a e i o u
*/

class Solution {
public:
	bool isVowels(char *a)
	{
		if ((tolower(*a)== 'a') || (tolower(*a) == 'e') || (tolower(*a) == 'i')
			|| (tolower(*a) == 'o') || (tolower(*a) == 'u'))
		{
			return true;
		}
		return false;
	}
	string reverseVowels(string s) {
		int l = 0;
		int r = s.length() - 1;

		while (l<r)
		{
			if (isVowels(&(s[l]))&& isVowels(&(s[r])))
			{
				swap(s[l++], s[r--]);
			}
			else if (isVowels(&(s[l])))
			{
				r--;
			}
			else if (isVowels(&(s[r])))
			{
				l++;
			}
			else
			{
				r--;l++;
			}
		}
		return s;
	}


};

int main()
{
	string str = "hello";
	string res = "";
	res = Solution().reverseVowels(str);

	cout <<"源字符串："<< str << endl;
	cout << "反转元音字母后的字符串：" << res << endl;

    std::cout << "Hello World!\n"; 
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
