/*************************************************************************
	> File Name: 分布式集群消息传递.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  8/ 7 22:37:10 2019
 ************************************************************************/

#include<iostream>
using namespace std;
/*
题目描述
有一个分布式服务集群，集群内含有 N 个服务节点，分别标记为 1 到 N。
给予一个列表 times，表示消息从两个节点间有向传递需要的时间。 times[i] = (s, d, t)，其中 s 表示发出消息的源节点，d 表示接收到消息的目标节点， t  表示信息有向传递的时间。
现在 K 节点发送了一个信号，请问至少需要多少秒才能使所有的服务节点都收到该消息？如果消息不能传递给集群内全部节点，则返回-1。
输入描述:
第一行：列表 times。分布式服务集群的图，图的结构为二维数组。例如： [[2,1,1],[2,3,1],[3,4,1]] ，表示集群4个节点，2到1的时间为1，2到3的时间为1，3到4的时间为1；
第二行：N值
第三行：K值
范围约束：
1. N 的范围在 [1, 100] 之间。
2. K 的范围在 [1, N] 之间。
3. times 的长度在 [1, 6000] 之间。
4. 所有的边 times[i] = (s, d, t) 都有 1 <= s, d <= N 且 1 <= t <= 100。
输出描述:
至少需要多少秒才能使所有的服务节点都收到该消息？如果消息不能传递给集群内全部节点，则返回-1
示例1
输入
复制
[[2,1,1],[2,3,1],[3,4,1]]
4
2
输出
复制
2
说明
备注:
图可能存在重边或自环 */


