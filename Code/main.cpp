#include <iostream>
#include <cstdlib>
#include "BST.h"
using namespace std;


/*********************************************************
二叉查找樹 —— 插入、遍歷、查找、刪除、銷毀
https://blog.csdn.net/xinxudongstudy/article/details/88564909
*********************************************************/

int main()
{
	/***********************
	          插入
	***********************/
	BSTree *tree = new BSTree();
	int array[7] = {11, 33, 18, 24, 44, 66, 10};
	cout << "二叉樹數值：" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << array[i] << " ";
		tree->insert(array[i]);  //調用插入函數，生成二叉查找樹
	}

	cout << endl << endl;


	/***********************
	          遍歷
	***********************/
	cout << "前序遍歷：";
	tree->PreOrder();
	cout << endl;

	cout << "中序遍歷：";
	tree->InOrder();
	cout << endl;

	cout << "後序遍歷：";
	tree->PostOrder();
	cout << endl << endl;


	/***********************
	          查找
	***********************/
	int keyword;  //查找節點的關鍵字
	cout << "請輸入要查找的節點：";
	cin >> keyword;
	cout << endl;
	BSTNode *node = tree->IteratorSearch(keyword);  //獲取數值的地址
	if (node)  //判斷有沒有地址
	{
		cout << "關鍵字為“" << keyword << "”的節點，存在。" << endl ;
	}
	else
	{
		cout << "關鍵字為“" << keyword << "”的節點，不存在。" << endl;
	}
	cout << endl << endl;


	/***********************
	          刪除
	***********************/
	int DelNode;  //要刪除的節點
	cout << "請輸入要刪除的節點：";
	cin >> DelNode;
	tree->remove(DelNode);
	cout << endl;

	cout << "刪除操作後，(前序)遍歷：";
	tree->PreOrder();
	cout << endl;
	cout << "刪除操作後，(中序)遍歷：";
	tree->InOrder();
	cout << endl;
	cout << "刪除操作後，(後序)遍歷：";
	tree->PostOrder();
	cout << endl << endl;


	/***********************
	          銷毀
	***********************/
	tree->destroy();

    return 0;
}
