#include <iostream>
#include <cstdlib>
#include "BST.h"
using namespace std;


/*********************************************************
�G�e�d��� �X�X ���J�B�M���B�d��B�R���B�P��
https://blog.csdn.net/xinxudongstudy/article/details/88564909
*********************************************************/

int main()
{
	/***********************
	          ���J
	***********************/
	BSTree *tree = new BSTree();
	int array[7] = {11, 33, 18, 24, 44, 66, 10};
	cout << "�G�e��ƭȡG" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << array[i] << " ";
		tree->insert(array[i]);  //�եδ��J��ơA�ͦ��G�e�d���
	}

	cout << endl << endl;


	/***********************
	          �M��
	***********************/
	cout << "�e�ǹM���G";
	tree->PreOrder();
	cout << endl;

	cout << "���ǹM���G";
	tree->InOrder();
	cout << endl;

	cout << "��ǹM���G";
	tree->PostOrder();
	cout << endl << endl;


	/***********************
	          �d��
	***********************/
	int keyword;  //�d��`�I������r
	cout << "�п�J�n�d�䪺�`�I�G";
	cin >> keyword;
	cout << endl;
	BSTNode *node = tree->IteratorSearch(keyword);  //����ƭȪ��a�}
	if (node)  //�P�_���S���a�}
	{
		cout << "����r����" << keyword << "�����`�I�A�s�b�C" << endl ;
	}
	else
	{
		cout << "����r����" << keyword << "�����`�I�A���s�b�C" << endl;
	}
	cout << endl << endl;


	/***********************
	          �R��
	***********************/
	int DelNode;  //�n�R�����`�I
	cout << "�п�J�n�R�����`�I�G";
	cin >> DelNode;
	tree->remove(DelNode);
	cout << endl;

	cout << "�R���ާ@��A(�e��)�M���G";
	tree->PreOrder();
	cout << endl;
	cout << "�R���ާ@��A(����)�M���G";
	tree->InOrder();
	cout << endl;
	cout << "�R���ާ@��A(���)�M���G";
	tree->PostOrder();
	cout << endl << endl;


	/***********************
	          �P��
	***********************/
	tree->destroy();

    return 0;
}
