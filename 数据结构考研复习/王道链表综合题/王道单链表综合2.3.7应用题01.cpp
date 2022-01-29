/*
  ,-~~-.___.
   / |  '     \
  (  )        0
   \_/-, ,----'
      ====           //
     /  \-'~;    /~~~(O)
    /  __/~|   /       |
  =(  _____| (_________|
  ����С�� ����˳�� С����
*/
#include<iostream>
using namespace std;

struct Link {
    int data;
    struct Link* next;
};

//����������
Link* createList()
{
    Link* head, * rear;
    head = (Link*)malloc(sizeof(Link));
    rear = head;
    int n;
    int data;
    cout << "����������ĳ��ȣ�" << " ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Link* newnode = (Link*)malloc(sizeof(Link));
        cout << "�������" << i + 1 << "���ֵ��" << " ";
        cin >> data;
        newnode->data = data;
        rear->next = newnode;
        rear = newnode;
    }
    rear->next = NULL;
    return head;
}

//ɾ������
Link* Dele_X(Link* L)
{
    int e;
    cout << "��������Ҫɾ����Ԫ�أ�" << " ";
    cin >> e;
    Link* p=L->next;
    Link* q;
    Link* pre=L;
    while (p!=NULL)
    {
        if (p->data == e)
        {
            q = p;
            p = p->next;
            pre->next = p;
            free(q);
        }
        else {
            pre = p;
            p = p->next;
        }
    }
    return L;
}


//��ӡ
Link* PrintList(Link* L)
{
    while (L->next)
    {
        cout << L->next->data << " ";
        L = L->next;
    }
    return L;
}

int main()
{
    Link* head=createList();
    Dele_X(head);
    PrintList(head);
    system("pause");
    return 0;
}