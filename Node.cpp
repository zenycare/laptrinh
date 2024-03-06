#include<stdio.h>
typedef struct Node

{
    int info;
    Node* next;/* data */
};
void init( Node * &phead){
    phead=NULL;
}
int isempty( Node * phead){
    return (phead==NULL);
}
Node* CreateNode(int x){
    Node* newp= new Node;
    newp->info=x;
    newp->next=NULL;
    return newp;

}
void nhap (Node* &phead){
int n;
printf(" \n moi nhap so luong phan tu:");
scanf("%d",&n);
for(int i=0;i<n;i++){
    int x;
    printf(" nhap gia tri phan tu \n");
    scanf("%d",&x);
    Node* p=CreateNode(x);
    p->next=phead;
    phead=p;

}
}
void xuat( Node* phead){
for(Node *i=phead;i!=NULL;i=i->next){
    printf("%d->",i->info);
}
printf("null");
printf("\n");
}
void insertlast(Node* b, int x){
    if(b!=NULL){
    Node* i=CreateNode(x);
    i->next=b->next;
    b->next=i;
    }
}
void tim( Node* phead){
    int x;
    printf(" nhap gia tri can tim \n:");
    scanf("%d",&x);
    for(Node* i=phead;i!=NULL;i=i->next){
        if(i->info==x){
        int y;
        printf("nhap so can them vao:\n");
        scanf("%d",&y);
        insertlast(i,y);

    }
}
}
void count(Node *phead){
    
    int dem;
    for(Node*i= phead; i!=NULL;i=i->next){
        dem++;
    }
    printf(" so nut la  %d",dem);
}
void valuenodek(Node* phead){
int k;
   do{
    printf("\n nhap so k:");
    scanf("%d",&k);
   }while(k<0);
   int i=0;
   Node*p=phead;
   for(i=0;i<k-1;i++){
    p=p->next;
   }
   printf("\n gia tri cua nut thu %d la: %d",k,p->info);
}
void searchMaxMin( Node* phead){
    Node*max=phead;
    for(Node*i=phead->next;i!=NULL;i=i->next){
        if(i->info>max->info){
            max=i;
        }
    }
        printf("\n gia tri lon nhat cua danh sach la %d",max->info);

    Node*min=phead;
    for(Node*i=phead->next;i!=NULL;i=i->next){
        if(i->info<min->info){
            min=i;
        }
    }
        printf("\n gia tri nho nhat cua danh sach la %d",min->info);
}
/*
    Function delete
*/
void delete1(Node* phead){
    printf("\n nhap gia tri phan tu muon xoa:");
    int x;
    scanf("%d",&x);
    for(Node*i=phead;i!=NULL;i=i->next){
        if(i->info==x){
       Node*bi=i;  
       
        
       bi=i->next;
        delete i;
    }
    }
}
int main(){
    Node *phead=NULL;
    

    nhap(phead);
    delete1(phead);
    //tim(phead);
    xuat(phead);
    //count(phead);
    //valuenodek(phead);
    //searchMaxMin(phead);
    return 0;
}