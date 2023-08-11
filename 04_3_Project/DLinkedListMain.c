#include <stdio.h>
#include "DLinkedList.h"

int WhoIsPreced(int d1, int d2)	//������ ������ �Ǵ� �Լ�
{
	if(d1<d2)
		return FALSE;
	else
		return TRUE;
}

int main(void)
{
	List list;
	int data;
	ListInit(&list);

	SetSortRule(&list, WhoIsPreced);	//���� ���� ����

	LInsert(&list, 11);  LInsert(&list, 11);
	LInsert(&list, 22);  LInsert(&list, 22);
	LInsert(&list, 33);

	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &data))    
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))   
			printf("%d ", data);
	}
	printf("\n\n");

	if(LFirst(&list, &data))
	{
		if(data == 22)
			LRemove(&list);
		
		while(LNext(&list, &data))
		{
			if(data == 22)
				LRemove(&list);
		}
	}

	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}