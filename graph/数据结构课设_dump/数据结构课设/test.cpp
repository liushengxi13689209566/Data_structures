/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月02日 星期二 16时40分29秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <fstream>
using namespace std;
 
int main()
{
  printf("\n\n\n\n\n ——————————————————————————————————————————————————\033[46;33m【北门】\033[0m————————————————————————\n");
printf("|                                                  \033[44m        \033[0m             \033[32;43m【行政楼】\033[0m |\n");
printf("|                                               \033[44m              \033[0m  \033[32;43m【附属楼【行政楼】\033[0m |\n");
printf("| \033[32;43m【学】\033[0m   \033[44m                                        \033[32;47m【水煮】\033[0;44m   \033[0m ——————————————————  |\n");
printf("| \033[32;43m【术】\033[0m   \033[32;43m【~基础教学楼Ａ楼~】\033[0m  |\033[44m                 \033[32;47m【鸽子】\033[0;44m                      \033[0m| |         \033[33m北\033[0m\n");
printf("| \033[32;43m【交】\033[0m                         |\033[44m  \033[0m —————————— \033[44m              \033[0m ——————————————— \033[44m  \033[0m| |       \033[33m西  东\033[0m\n");
printf("| \033[32;43m【流中心】\033[0m \033[32;43m【基础教学楼Ｂ楼】\033[0m  |\033[44m  \033[0m|          ————— \033[44m    \033[0m —————\033[32m【~情*人*坡~】\033[0m |\033[44m  \033[0m| |\033[33m         南\033[0m\n");
printf("|                                |\033[44m  \033[0m ||||||||||||||| \033[44m    \033[0m|                    |\033[44m  \033[0m| |\n");
printf("| \033[31m【~~~~~~】   \033[32;43m【~~~~一号~~~~】\033[0m  |\033[44m  \033[0m|               |\033[33;44m 乐 \033[0m|      \033[32;43m【~大学生~】\033[0m  |\033[44m  \033[0m| |\n");
printf("| \033[31m【~~~~~~】   \033[32;43m【~~~实验楼~~~】\033[0m  |\033[44m  \033[0m ||||||||||||||| \033[33;44m 水 \033[0m|      \033[32;43m【活动中心】\033[0m  |\033[44m  \033[0m| |     \033[33m注释：\033[0m\n");
printf("| \033[31m【~~~~~~】   \033[32;43m【~~~~~~~~~~~~】\033[0m  |\033[44m  \033[0m|               |\033[33;44m 大 \033[0m|                    |\033[44m  \033[0m| |     \033[43m  \033[0m    建筑物\n");
printf("| \033[31m【~~~~~~】   \033[32;43m【~~~~二号~~~~】\033[0m  |\033[44m  \033[0m ||||||||||||||| \033[33;44m 道 \033[0m|      \033[32m【~狗*男*女~】\033[0m|\033[44m  \033[0m| |     \033[42m  \033[0m    小树林\n");
printf("| \033[31m【~~~~~~】   \033[32;43m【~~~实验楼~~~】\033[0m  |\033[44m  \033[0m|———————|       |\033[44m    \033[0m|      \033[32m【~~~*湖*~~~】\033[0m|\033[44m  \033[0m| |     \033[44m  \033[0m    道  路\n");
printf("| \033[31m【~~~~~~】   \033[32;43m【~~~~三号~~~~】\033[0m |\033[44m           \033[0m|      \033[44m        \033[32;43m【自在*咖啡】\033[0m     |\033[44m  \033[0m|  |     \033[45m  \033[0m    其  他\n");
printf("| \033[31m【~~~~~~】   \033[32;43m【~~~实验楼~~~】\033[0m|\033[44m  \033[0m———— \033[44m     \033[0m|\033[32;43m【校史|~~~~~~~~~~~~~~~~~~】\033[0m    |\033[44m  \033[0m|   |     \033[47m  \033[0m    喷  泉\n");
printf("|                             |\033[44m  \033[0m|\033[42;33m银杏\033[0m|\033[44m     \033[0m|\033[32;43m【****|~~~~~图*书*馆~~~~~】\033[0m   |\033[44m  \033[0m|    |     \033[41m  \033[0m    操  场\n");
printf("|   \033[32;43m【水沐年华】\033[0m             |\033[44m  \033[0m|\033[42;33m  林 \033[0m|\033[44m     \033[0m|\033[32;43m【~馆~|~~~~~~~~~~~~~~~~~~】\033[0m  |\033[44m  \033[0m|     |     \033[40m  \033[0m    校  门\n");
printf("|———————————————————————————— \033[44m  \033[0m ————— \033[44m     \033[0m ————————————————————————————— \033[44m  \033[0m —————     \033[32m【】\033[0m   景  点\n");
printf("|\033[44;33m                                                                        \033[46;33m【东门】\033[44m  \033[0m \n");
printf("| \033[32;43m【~~~~医**院~~~~】\033[0m|\033[44m  \033[0m|\033[41m              \033[0m|\033[44m     \033[0m|        |————————|               |\033[44m  \033[0m| |\n");
printf("| \033[32;43m【~~~学*工*部~~~】\033[0m|\033[44m  \033[0m|\033[41m              \033[0m|\0[44m     \033[0m|        |\033[41;33m~网球场~\033[0m|    ||||||||||| \033[44m  \033[0m| |\n");
printf("|                    \033[44m  \033[0m|\033[41m              \033[0m|\033[44m     \033[0m|        |————————|    ———————————|\033[44m  \033[0m| |\n");
printf("|    \033[32;43m【~~~~~~~~】\033[0m——— \033[44m  \033[0m|\033[41m              \033[0m|\033[44m     \033[0m|                     |\033[41m           \033[0m|\033[44m  \033[0m| |\n");
printf("|    \033[32;43m【~~~美~~~】\033[0m   |\033[44m  \033[0m|\033[41m            \033[0m|\033[44m    33 \033[0m|       \033[32;43m【~~~~~~~~】\033[0m  |\033[41m  \033[42m       \033[41m  \033[0m|\033[44m  \033[0m| |\n");
printf("|    \033[32;43m【~~~~~~~~】\033[0m||| \033[44m  \033[0m|\033[41;33m      运      \033[0m|\033[44m 33    \033[0m|       \033[32;43m【~~~~~~~~】\033[0m  |\033[41m  \033[42m       \033[41m  \033[0m|\033[44m  \033[0m| |\n");
printf("|    \033[32;43m【~~~广~~~】\033[0m   |\033[44m  \033[0m|\033[41m              \033[0m|\033[44m     \033[0m|       \033[32;43m【~~~体~~~】\033[0m  |\033[41m  \033[42;33m   操  \033[41m  \033[0m|\033[44m  \033[0m| |\n");
printf("|    \033[32;43m【~~~~~~~~】\033[0m——— \033[44m  \033[0m|\033[41;33m      动      \033[0m|\033[44m     \033[0m|       \033[32;43m【~~~育~~~】\033[0m  |\033[41m  \033[42m       \033[41m  \033[0m|\033[44m  \033[0m| |\n");
printf("|                    \033[44m  \033[0m|\033[41m              \033[0m|\033[44m     \033[0m|       \033[32;43m【~~~馆~~~】\033[0m  |\033[41m  \033[42m       \033[41m  \033[0m|\033[44m  \033[0m| |\n");
printf(" ———————   ————————— \033[44m  \033[0m|\033[41;33m      场      \033[0m|\033[44m     \033[0m|       \033[32;43m【~~~~~~~~】\033[0m  |\033[41m  \033[42;33m   场  \033[41m  \033[0m|\033[44m  \033[0m| |\n");
printf("\033[45m        \033[0m| |\033[42m         \033[0m|\033[44m  \033[0m|\033[41m              \033[0m|\033[44m     \033[0m|       \033[32;43m【~~~~~~~~】\033[0m  |\033[41m  \033[42m       \033[41m  \033[0m|\033[44m  \033[0m| |\n");
printf("\033[45;33m    狗  \033[0m| |\033[42;33m    树   \033[0m|\033[44m  \033[0m|\033[41m              \033[0m|\033[44m     \033[0m|                     |\033[41m           \033[0m|\033[44m  \033[0m| |\n");
printf("\033[45;33m    洞  \033[0m| |\033[42;33m    林   \033[0m|\033[44m  \033[0m|\033[41m              \033[0m|\033[44m     \033[0m|                      ———————————|\033[44m  \033[0m| |\n");
printf("\033[45m        \033[0m| |\033[42m         \033[0m|\033[44m  \033[0m|\033[41m              \033[0m|\033[44m     \033[0m|                          ||||||| \033[44m  \033[0m| |\n");
printf(" ———————   ————————— \033[44m  \033[0m —————————————— \033[44m     \033[0m —————— \033[44m \033[0m ————————————————————————|\033[44m  \033[0m| |\n");
printf("|\033[44m                                              \033[0m|   |\033[44m \033[0m|\033[42m                        \033[0m|\033[44m  \033[0m| |\n");
printf("|——————————————————————————— \033[44m \033[0m ———— \033[44m           \033[0m|   |\033[44m \033[0m|\033[42;33m         小树林         \033[0m|\033[44m  \033[0m| |\n");
printf("||\033[32;43m【~~~~~~~~01号楼~~~~~~~~】\033[0m|\033[44m \033[0m|    |\033[44m    \033[43m   \033[0;44m    \033[0m|   |\033[44m \033[0m|\033[42m                        \033[0m|\033[44m  \033[0m| |\n");
printf("|—————————————  ———————————— \033[44m \033[0m ———— \033[44m           \033[0m ——— \033[44m \033[0m ———————————————————————— \033[44m  \033[0m —|\n");
printf("|\033[44m                                                    |||                           \033[0m|\n");
printf("|——————  ————————————  ————— \033[44m  \033[0m ———————|   |——————— \033[44m  \033[0m ————  ———— \033[44m     \033[0m ————  —————|\n");
printf("||\033[32;43m【~02号楼~】|\033[0m\033[32;43m|【~03号楼~】\033[0m|\033[44m  \033[0m|\033[32;43m【~~~~~~~~~~~~~~~】\033[0m|\033[44m  \033[0m|\033[32;43m【10号楼】\033[0m|\033[44m     \033[0m|\033[32;43m【11号楼】\033[0m||\n");
printf("|——————————————————————————— \033[44m  \033[0m|\033[32;43m【~~~~~~~~~~~~~~~】\033[0m|\033[44m  \033[0m|——————————|\033[44m     \033[0m|——————————||\n");
printf("\033[46;33m【西门】\033[44m                       \033[0;32;43m |【~~~旭日苑~~~~】| \033[0;44m  \033[0m|          |\033[44m     \033[0m|          ||\n");
printf("|——————————————————————————— \033[44m  \033[0m|\033[32;43m【~~~~~~~~~~~~~~~】\033[0m|\033[44m  \033[0m|——————————|\033[44m     \033[0m|——————————||\n");
printf("||\033[32;43m【~05号楼~】|\033[0m\033[32;43m|【~04号楼~】\033[0m|\033[44m  \033[0m|\033[32;43m【~~~~~~~~~~~~~~~】\033[0m|\033[44m  \033[0m|\033[32;43m【12号楼】\033[0m|\033[44m     \033[0m|\033[32;43m【13号楼】\033[0m||\n");
printf("|——————  ————————————  ————— \033[44m  \033[0m ——————————————————— \033[44m  \033[0m ————  ———— \033[44m     \033[0m ————  —————|\n");
printf("|\033[44m                                                                                  \033[0m|\n");
printf("|—————————————  ———————————— \033[44m  \033[0m ——————————          \033[44m  \033[0m —————  ——————  ——————  —————|\n");
printf("||\033[32;43m【~~~~~~~~06号楼~~~~~~~~】\033[0m|\033[44m  \033[0m|\033[32;43m【~超市~】\033[0m|         \033[44m  \033[0m|\033[32;43m【~14号楼|15 号楼|16号楼~】\033[0m||\n");
printf("|——————————————————————————— \033[44m  \033[0m ——————————          \033[44m  \033[0m ————————————————————————————|\n");
printf("|                                                                                  |");
printf(" ——————————————————————————————————————————————————————————————————————————————————\n");
 
}
