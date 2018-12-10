/*************************************************************************
	> File Name: Sort_colors.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月11日 星期一 19时51分49秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
/*题目描述：
 *给定一个带有红色，白色或蓝色的n个对象的数组，对它们进行排序，使相同颜色的对象相邻，颜色顺序为红色，白色和蓝色。

在这里，我们将使用整数0,1和2分别表示红色，白色和蓝色。

注意：
您不会为这个问题使用库的排序功能。

点击以显示跟进。

跟进：
一个相当直接的解决方案是使用计数排序的双通道算法。
首先迭代0，1，和2的数组数，然后覆盖总数为0的数组，然后是1，然后是2。

你能想出一个只使用恒定空间的单程算法吗？

 * */
/*题目大意与思路：给个例子可能就会秒懂吧 ！ ！
input
[0,1,2,1,0,2,0,1]
Expected answer
[0,0,0,1,1,1,2,2]
思路就是**先统计0,1,2出现的次数，然后往nums中赋值即可**
 */
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int k0,k1,k2 ;
        k0 = k1 = k2 = 0;
        for(auto i : nums){
            if(i == 0  )
                k0++ ;
            if(i == 1  )
                k1++ ;
            if(i == 2  )
                k2++ ;
        }
        for(auto i = 0;i  !=  k0;++i)
            nums[i] = 0 ;
        for(auto i = k0;i  != k1+k0;++i)
            nums[i] = 1 ;
        for(auto i = k0+k1;i != k0+k1+k2;++i)
            nums[i] = 2 ;
    }
};
