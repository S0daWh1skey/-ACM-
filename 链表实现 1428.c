#include "stdio.h"
#include <stdlib.h>
#define MAXN 120
int num[MAXN]={0};

typedef struct List{
    int number;
    struct List* next;
}Node;
void show(Node *head){
    Node *p=head->next;
    while(p->next!=NULL){
        printf("%d ",p->number);
        p=p->next;
    }
    printf("%d\n",p->number);
}

int insert(Node *head,int x){
    Node *p=head;
    while(p->next!=NULL){
        p=p->next;
        Node* q=p->next;
        if(q!=NULL&&p->number<x&&q->number>x)
        {
            Node *p1=(Node*)malloc(sizeof(Node));
            if(p1==NULL){
                printf("No memory.\n");
                return -1;
            }
            p1->next=p->next;
            p->next=p1;
            p1->number=x;
        }
    }
    if(p->number<x&&p->next==NULL){
        Node *p2=(Node*)malloc(sizeof(Node));
        if(p2==NULL){
            printf("No memory.\n");
            return -1;
        }
        p2->next=NULL;
        p->next=p2;
        p2->number=x;
        
    }
    return 0;
}
/* 初始条件：顺序线性表L已存在。操作结果：将L重置为空表 */
void ClearList(Node *L)
{
    Node* p; Node* q;
    p=L->next;           /*  p指向第一个结点 */
    while(p)                /*  没到表尾 */
    {
        q=p->next;
        free(p);
        p=q;
    }
    L->next=NULL;        /* 头结点指针域为空 */
}
int IsEmpty(Node* head){
    
    return head->next==NULL;
}
int main(){
    int a, b;Node* head=NULL,*r;
    while(scanf("%d%d",&a,&b)==2&&a&&b){
        head=(Node*)malloc(sizeof(Node));
        r=head;
        while(a--){
            Node* p=malloc(sizeof(Node));
            if(p==NULL){
                printf("No Memory\n");
                return -1;
            }
            scanf("%d",&p->number);
            p->next=NULL;
            r->next=p;
            r=p;
        }
        insert(head, b);
        show(head);
        //ClearList(head);
        if(IsEmpty(head)){
            printf("Is Empty\n");
        }
        else if(IsEmpty(head)==0){
            printf("Not Release\n");
        }
    }
    return 0;
}