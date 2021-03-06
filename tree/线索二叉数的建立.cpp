/*************************************************************************
	> File Name: 线索二叉数的建立.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月22日 星期三 21时29分24秒
 ************************************************************************/
// 1 表示线索
// 0 表示有子树
#include<iostream>
using namespace std;
typedef struct Node {
    char data ;
    int Ltag ;
    int Rtag ;
    struct Node * Lchild ;
    struct Node * Rchild ;
} BiNode ;

BiNode *pre = NULL ;

void CreteBitree(BiNode **root)  
{
    char ch ;
    cin >> ch ;
    if( ch == '#' ) 
        *root= NULL;
    else {
        *root = (BiNode *)malloc(sizeof(BiNode));
        (*root)->data = ch;
        (*root)->Ltag = 0 ;
        (*root)->Rtag = 0;
        CreteBitree(&(*root)->Lchild);
        CreteBitree(&(*root)->Rchild);
    }
}

void visit(BiNode *t)
{
    cout << t->data << "   ";
}

void TinOrder(BiNode *t) //中序遍历
{
    BiNode *p = t->Lchild ;
    while(p != t)
    {
        while(p->Ltag  ==  0)
            p=p->Lchild;
        visit(p);
        while(p->Rtag == 1 && p->Rchild != t)
        {
            p=p->Rchild;
            visit(p);
        }
        p=p->Rchild;
    }
}

void Inthread(BiNode  *root) //  中序线索化
{
    if(root)
    {
        Inthread(root->Lchild);
        if(root->Lchild == NULL) //左为空
        {
            root->Lchild = pre ;
            root->Ltag = 1;
        }
        if( pre->Rchild == NULL) //右为空
        {
            pre->Rchild = root ;
            pre->Rtag = 1;
        }
        pre = root ;
        Inthread(root->Rchild);
    }
}

void function(BiNode **temp ,BiNode *root)
{
    *temp = (BiNode *)malloc(sizeof(BiNode));
    (*temp)->Ltag = 0;
    (*temp)->Rtag = 1 ;
    (*temp)->Rchild = *temp ;
    if(!root)
    {
        (*temp)->Lchild = *temp ;
    }
    else {
        (*temp)->Lchild = root ;
        pre = *temp ;
        Inthread(root);
        pre->Rchild = *temp ;
        pre->Rtag = 1;
        (*temp)->Rchild = pre ;
    }
}

int main(void)
{
    BiNode *root ,*temp;  //设置p的好处就是双向链表
    cout  << "Please input the  string :" << endl ;

    CreteBitree(&root);

    cout<< "中序线索化：" << endl ;
    function(&temp,root);
    cout << endl ;

    TinOrder(temp);
    cout << endl ;

    return 0;
}
