/*************************************************************************
	> File Name: Polynomial_calculator.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月22日 星期日 13时33分57秒
 ************************************************************************/

#include<stdio.h>
#define MAX  1000
int level(char p)  //规定运算符优先级
{
    int temp ;
    switch(p)
    {
        case '*':
        case '/':temp = 3;break;
        case '+':
        case '-':temp = 2;break;
        case '(':temp = 1;break;
        case '@':temp = -1;break;
    }
    return temp ;
}

    
int cal(int number[] ,int *numberTop ,char Symbol[] ,int *SymbolTop)
{
    char operation = Symbol[*SymbolTop--]; //出符号
    int value1=number[*numberTop--];
    int value2=number[*numberTop--];
    int temp;
    switch(operation)
    {
        case '+':temp=value2+value1;  break;
        case '-':temp=value2 -value1; break;
        case '*':temp =value2*value1; break;
        case '/':temp =value2/value1; break;
    }
    return temp;
}
int fun(char str[])
{
    char  Symbol[MAX];
    int SymbolTop= -1;  //运算符栈
    int numberTop= -1;  //数值栈
    int  number[MAX]; 
    printf("str == %s \n",str); 

    int  y = 0; //用来计算多位数 
    int i= 0 ;
    Symbol[++SymbolTop]='@'; //先把 @ 入到符号栈中,就不用判断栈是否空了！！！这是一个比较聪明的想法

    while(str[i]){  //先遍历该字符串
        y= 0 ;
        if(str[i] <= '9' && str[i] >= '0'){ //是数字
            while(str[i] <= '9' && str[i] >= '0'){
                y= y*10+str[i]-'0' ;
                    i++;
            }
            printf("y== %d \n",y);
            number[++numberTop]=y ; //入栈数值
            printf("number[numberTop== %d \n",number[numberTop]);
        } 
        else if(str[i] > '9' ||  str[i] < '0' ){   //不是数字

            printf("levelstr[i]  == %d \n",level(str[i]));
            printf("Symbol[SymbolTop == %c\n" ,Symbol[SymbolTop]);
            printf("levelstr[i]  == %d \n",level(Symbol[SymbolTop]));

            while(level(str[i]) <= level(Symbol[SymbolTop]))  //让栈中比它大的和等于它的都出栈！！！中缀表达式转后缀表达式的核心
                                                            //从符号栈中出一个符号，从数值栈中出两个数字，计算后压入数值栈
            {
                printf("kebiorembemobmomborebmo\n");
                number[++numberTop] = cal(number,&numberTop,Symbol,&SymbolTop);
                printf("number[numberTop== %d \n",number[numberTop]);
            }
            Symbol[++SymbolTop] = str[i];
            i++;
        }
        else if(str[i] == '('){   //遇见左括号直接入栈
            Symbol[++SymbolTop]='(';
            i++;
        }
        else if(str[i] == ')'){   //进行运算直到遇到左括号
            while(Symbol[SymbolTop] != '('){
                number[++numberTop] =cal(number,&numberTop,Symbol,&SymbolTop);
            }
            SymbolTop--;
            i++;
        }
    // 将Symbol 栈检查一下，返回number 的栈顶，结束
    }
    return number[numberTop];
}

int main(void)
{
    char str[MAX];
    int result ;
    printf("Please input the str (please sure it right)\n");
    gets(str);
    printf("You input is %s \n",str);
    result=fun(str);
    printf("result = %d \n",result);
    return 0;
}
