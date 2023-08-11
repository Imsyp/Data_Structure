#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int data;
    struct _node * next;
} Node;

int main(void)
{
    Node * head = (Node*)malloc(sizeof(Node));
    Node * tail = head;
    Node * cur = NULL;

    Node * newNode = NULL;
    int readData;

    /***�����͸� �Է� �޴� ����***/
    while(1)
    {
        printf("�ڿ��� �Է�: ");
        scanf("%d", &readData);

        if(readData < 1)
            break;

        //����� �߰� ����
        newNode = (Node*)malloc(sizeof(Node));
        newNode -> data = readData;
        newNode -> next = NULL;

        tail -> next = newNode;
        tail = newNode;
    }
    printf("\n");

    /***�Է� ���� �������� ��°���***/
    printf("�Է� ���� �������� ��ü���! \n");
    if(head == NULL)
    {
        printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
    }
    else
    {
        cur=head;

        while(cur->next != NULL)
        {
            cur = cur -> next;
            printf("%d ", cur->data);
        }
    }
    printf("\n\n");

    /***�޸��� ��������***/
    if(head == NULL)
    {
        return 0;   //������ ��尡 �������� �ʴ´�.
    }
    else
    {
        Node * delNode = head;
        Node * dummy = head;
        Node * delNextNode = head -> next;

        while(delNextNode != NULL)  //�� ��° ���� ��� ����
        {
            delNode = delNextNode;
            delNextNode = delNextNode -> next;

            printf("%d��(��) �����մϴ�.\n", delNode -> data);
            free(delNode);
        }
        free(dummy);
    }

    return 0;
}