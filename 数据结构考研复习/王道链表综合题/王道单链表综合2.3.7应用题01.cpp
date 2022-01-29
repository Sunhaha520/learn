/*
  ,-~~-.___.
   / |  '     \
  (  )        0
   \_/-, ,----'
      ====           //
     /  \-'~;    /~~~(O)
    /  __/~|   /       |
  =(  _____| (_________|
  快乐小狗 保佑顺利 小阿宇
*/
#include<iostream>
using namespace std;

struct Link {
    int data;
    struct Link* next;
};

//创建单链表
Link* createList()
{
    Link* head, * rear;
    head = (Link*)malloc(sizeof(Link));
    rear = head;
    int n;
    int data;
    cout << "请输入链表的长度：" << " ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Link* newnode = (Link*)malloc(sizeof(Link));
        cout << "请输入第" << i + 1 << "项的值：" << " ";
        cin >> data;
        newnode->data = data;
        rear->next = newnode;
        rear = newnode;
    }
    rear->next = NULL;
    return head;
}

//删除函数
Link* Dele_X(Link* L)
{
    int e;
    cout << "请输入您要删除的元素：" << " ";
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


//打印
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