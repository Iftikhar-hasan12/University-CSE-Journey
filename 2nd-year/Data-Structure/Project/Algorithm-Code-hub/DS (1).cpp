#include<bits/stdc++.h>
#include<conio.h>
#include<unistd.h>
using namespace std;
int a[100];
int n,cat=1;
// Function prototypes for each topic
void linear();
void binary();
void insertionSort();
void selectionSort();
void mergeSort();
void quickSort();
void countingSort();
void radixSort();
void towerOfHanoi();
void linkedList();
void stacking();
void queu();
void tree();
void graph();
void heap();
void display();
void dashboard();
void sourceCode(string s,int flag);
void output();
void searching();
void queuearray();
void queuelink();
void thanks();
void tower(int disk, char beg, char aux, char end);






//------------------------------------------------------------------------------
int main()
{
 display();
    dashboard();

}
//-------------------------------------------------------------------------



void display()
{
    string s="Welcome to my base...\n\t\t\t\t\tDisclaimer: There can be some mistakes, so take it easy.\n \t\t\t\t\tI've tried to provide some shallow knowledge about Data Structures,\n\t\t\t\t\tbut many topics are excluded here.\n\t\t\t\t\tSo, let's get started.\n\t\t\t\t\tCheers! :) ";
    printf("\n\n\n\t\t\t\t\t");
    for(int i=0; s[i]!='\0'; i++)
    {
        printf("%c",s[i]);
        usleep(90000);

    }
    getch();

}


//===============================================================
void dashboard()
{
    while(1)
    {
        system("cls");

        cout<<"\n\n\n\n\t\t\t\t\t"<<"Some of the Topic for Data structure\n\n\n";
        cout<<"\t\t\t\t\t1.Linear Search\n";
        cout<<"\t\t\t\t\t2.Binary Search\n";
        cout<<"\t\t\t\t\t3.Insertion Sort\n";
        cout<<"\t\t\t\t\t4.Selection Sort\n";
        cout<<"\t\t\t\t\t5.Merge Sort\n";
        cout<<"\t\t\t\t\t6.Quick Sort\n";
        cout<<"\t\t\t\t\t7.Counting Sort\n";
        cout<<"\t\t\t\t\t8.Radix Sort\n";
        cout<<"\t\t\t\t\t9.Tower of Hanoi\n";
        cout<<"\t\t\t\t\t10.Linked List\n";
        cout<<"\t\t\t\t\t11.Stack\n";
        cout<<"\t\t\t\t\t12.Queue\n";
        cout<<"\t\t\t\t\t13.Tree\n";
        cout<<"\t\t\t\t\t14.Graph\n";
        cout<<"\t\t\t\t\t15.Heap\n";
        cout<<"\t\t\t\t\t16.Thanks to Owner\n";

        cout<<"\t\t\t\t\t17.Exit\n";

        cout<<"\n\t\t\t\t\tChoose the Topic : ";
        int ch;
        cin>>ch;
        switch(ch)
        {
        case 1:
            linear();
            break;
        case 2:
            binary();
            break;
        case 3:
            insertionSort();
            break;
        case 4:
            selectionSort();
            break;
        case 5:
            mergeSort();
            break;
        case 6:
            quickSort();
            break;
        case 7:
            countingSort();
            break;
            case 8:
                radixSort();
                break;
        case 9:
            towerOfHanoi();
            break;
        case 10:
            linkedList();
            break;
        case 11:
            stacking();
            break;
        case 12:
            queu();
            break;
        case 13:
            tree();
            break;
        case 14:
            graph();
            break;
        case 15:
            heap();
            break;
        case 16:
            thanks();
            break;
        case 17:
            exit(0);
            break;
        default:

            cout << "\t\t\t\t\tInvalid choice.\a" << endl;
            break;
        }
        getch();

    }


}
void thanks()
{
    system("cls");
    cout<<"\n\n\t\t\tChocolate is better than Thanks  :)\a";
    getch();
}

void radixSort(){
    system("cls");
    string s= R"( #include<stdio.h>



int arry[10];

int main()
{
int n,max=0;
    printf("Enter Size : ");

    scanf("%d",&n);
    int a[n];
    printf("Enter Elements :  ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max = a[i];
        }
    }

redix(a,n,max);


 for(int i= 0; i<n; i++ )
    {

        printf("%d ",a[i]);

    }


}




void redix(int a[],int n,int max)
{


    for(int pos = 1; (max/pos)>0; pos=pos*10)
    {

        count(a,n,pos) ;

    }


}




void count(int a[], int n, int pos)
{




    int temp[10];
    for(int i =0; i<=9; i++ )
    {
        temp[i]=0;
    }




    for(int i =0; i<n; i++ )
    {

        temp[(a[i]/pos)%10]+=1;

    }


    for(int i =1; i<=9; i++ )
    {
        temp[i]= temp[i]+temp[i-1];
    }
    //int arry[n];
    for(int i=n-1; i>=0; i-- )
    {
        arry[temp[(a[i]/pos)%10]-1]=a[i];



        temp[(a[i]/pos)%10]--;

    }



     for(int i =0; i<n; i++ )
    {

      a[i]=arry[i];

    }




}
)";

sourceCode(s,0);
getch();





}

//--------------------------------------Tree  Elements -----------------------------------------
struct tree
{
    int data;
    struct tree*left;
    struct tree*right;

};
int i=1;







//---------------------create ------------------
struct tree*create();
void searchtree(struct tree* root);
void displaytree(struct tree*new_treenode);
void deletetree();

int BST(struct tree*root);

void inserttree(struct tree* root);

//--------------------------------------code---------------------------------------
void tree()
{

system("cls");
int ifti=1;
    struct tree*leaves ,*adBST,*foggy;
    leaves = create();
    foggy=leaves;
    adBST=leaves;

    displaytree(foggy);

    printf("\n");

    while(1){

            system("cls");
    printf("1.Tree Traversal.\n");
    printf("2.Search Elements in Tree.\n");
    printf("3.Insert Elements in Tree.\n");
    printf("4.Delete Elements in Tree.\n");
    if(ifti)
    {
    printf("5.Check is it BST ?\n");
    printf("6.Go Back\n");
    }
printf("Enter : ");
    int ch;
    scanf("%d",&ch);
if(ch==5)
{

   if(BST(adBST))
    {
        printf("True \n");
    }else{
     printf("False \a\n");
    }
    ifti=0;

}else if(ch==2)
{
    searchtree(adBST);
}else if(ch==3)
{
    inserttree(adBST);
}else if(ch==4)
{
deletetree();
}else if(ch==1)
{
     displaytree(foggy);

}else{
break;
}
getch();
}







//----------------------------------------------------------
string s;
s=R"(
//tree Traversal
#include<stdio.h>
#include<stdlib.h>

struct tree
{
    int data;
    struct tree*left;
    struct tree*right;

};
int i=1;

//---------------------create ------------------
struct tree*create();
void searchtree(struct tree* root);
void displaytree(struct tree*new_treenode);
struct tree*create()
{

    int y;
    if(i==1)
    {
        printf("Enter node (0 for terminate )  : ");
    }
    i++;
    scanf("%d",&y);


    if(y==0)
    {
        return NULL;
    }
struct tree*root;
        root=(struct tree*)malloc(sizeof(struct tree));

        root->data=y;
        root->left=NULL;
        root->right=NULL;



        printf("\nEnter left node of  %d   : ",y);

        root->left=create();

        printf("\nEnter right node of %d   : ",y);
        root->right=create();



        return root;

}



//--------------------------------------------


int BST(struct tree*root)
{
    static struct tree* prev=NULL;

    if(root==NULL)
    {
        return 1;
    }
    else
    {

        if(BST(root->left)==0)
        {
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data)
        {
            return 0;
        }


        prev=root;
        int p= BST(root->right);
        return p;

    }
}


//------------------------------------------
int main()
{
int ifti=1;
    struct tree*leaves ,*adBST,*foggy;
    leaves = create();
    foggy=leaves;
    adBST=leaves;

    displaytree(foggy);

    printf("\n");

    while(1){

            system("cls");
    printf("1.Tree Traversal.\n");
    printf("2.Search Elements in Tree.\n");
    printf("3.Insert Elements in Tree.\n");
    printf("4.Delete Elements in Tree.\n");
    if(ifti)
    {
    printf("5.Check is it BST ?\n");
    }
printf("Enter : ");
    int ch;
    scanf("%d",&ch);
if(ch==5)
{

   if(BST(adBST))
    {
        printf("True \n");
    }else{
     printf("False \a\n");
    }
    ifti=0;

}else if(ch==2)
{
    searchtree(adBST);
}else if(ch==3)
{
    inserttree(adBST);
}else if(ch==4)
{
deletetree();
}else if(ch==1)
{
     displaytree(foggy);

}
getch();
}



}
//-----------------------------------------
void deletetree(){
system("cls");
printf("\n\n\t\t\tAmr mathar upor diya gese eita :) \a");



getch();
}
//------------------------------------------

void displaytree(struct tree*new_treenode)
{
    if(new_treenode==NULL)
    {
        return;
    }
    else
    {

        displaytree(new_treenode->left);
        printf("%d ",new_treenode->data);
        displaytree(new_treenode->right);
    }
}

//----------------------------------------


void searchtree(struct tree* root)
{

    printf("Enter Element to Search  : ");
    int val;
    scanf("%d",&val);
    int flag=0;
    while(root!=NULL)
    {
        if(root->data==val)
        {
            printf("Found ........ ");
            flag=1;
            break;
        }else if(root->data >val)
        {
            root=root->left;
        }else
        {
            root=root->right;
        }

    }


    if(flag==0)
    {
        printf("Not Found in this tree\a");
    }


}

void inserttree(struct tree* root)
{
    struct tree*prev,*ptr;
    int val;
    printf("Enter insert Elements : ");
    scanf("%d",&val);
    while(root!=NULL)
    {
        prev=root;
        if(root->data==val)
        {
            printf("Can't insert Duplicate elements in BST \a");
            return;
        }else if(root->data>val)
        {
            root=root->left;
        }else{

        root=root->right;
        }
    }
    struct tree*temp;
    temp=(struct tree*)malloc(sizeof(struct tree));

    temp->data=val;
    temp->right=NULL;
    temp->left=NULL;
    if(prev->data>val)
    {
    prev->left=temp;
    }else{

    prev->right =temp;
    }




}

)";
sourceCode(s,0);
getch();

}
//-----------------------------------------------sub tree----------------

//-----------------------------------------
void deletetree(){
system("cls");
printf("\n\n\t\t\tAmr mathar upor diya gese eita :) \a");



getch();
}
//------------------------------------------

void displaytree(struct tree*new_treenode)
{
    if(new_treenode==NULL)
    {
        return;
    }
    else
    {

        displaytree(new_treenode->left);
        printf("%d ",new_treenode->data);
        displaytree(new_treenode->right);
    }
}

//----------------------------------------


void searchtree(struct tree* root)
{

    printf("Enter Element to Search  : ");
    int val;
    scanf("%d",&val);
    int flag=0;
    while(root!=NULL)
    {
        if(root->data==val)
        {
            printf("Found ........ ");
            flag=1;
            break;
        }else if(root->data >val)
        {
            root=root->left;
        }else
        {
            root=root->right;
        }

    }


    if(flag==0)
    {
        printf("Not Found in this tree\a");
    }


}

void inserttree(struct tree* root)
{
    struct tree*prev,*ptr;
    int val;
    printf("Enter insert Elements : ");
    scanf("%d",&val);
    while(root!=NULL)
    {
        prev=root;
        if(root->data==val)
        {
            printf("Can't insert Duplicate elements in BST \a");
            return;
        }else if(root->data>val)
        {
            root=root->left;
        }else{

        root=root->right;
        }
    }
    struct tree*temp;
    temp=(struct tree*)malloc(sizeof(struct tree));

    temp->data=val;
    temp->right=NULL;
    temp->left=NULL;
    if(prev->data>val)
    {
    prev->left=temp;
    }else{

    prev->right =temp;
    }




}



struct tree*create()
{

    int y;
    if(i==1)
    {
        printf("Enter node (0 for terminate )  : ");
    }
    i++;
    scanf("%d",&y);


    if(y==0)
    {
        return NULL;
    }
struct tree*root;
        root=(struct tree*)malloc(sizeof(struct tree));

        root->data=y;
        root->left=NULL;
        root->right=NULL;



        printf("\nEnter left node of  %d   : ",y);

        root->left=create();

        printf("\nEnter right node of %d   : ",y);
        root->right=create();



        return root;

}



//--------------------------------------------


int BST(struct tree*root)
{
    static struct tree* prev=NULL;

    if(root==NULL)
    {
        return 1;
    }
    else
    {

        if(BST(root->left)==0)
        {
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data)
        {
            return 0;
        }


        prev=root;
        int p= BST(root->right);
        return p;

    }
}

//--------------------------------------Queue----------------------------------------
int Q[5];

void enq();
void dq();
void peaki();
void displayqueue();
int frontt=-1,endi=-1;
int nq=5;//size is fixed but you can set it through the user



//----------------------------Queue Elements -------------------------------------------

void    queu()
{
    system("cls");
    cout<<"1.Queue Implementation Through Array.\n";
    cout<<"2.Queue Implementation Through Linked List.\n";
    cout<<"Press any key to go Back.\n";
    cout<<"Chose topic : ";
    int x;
    cin>>x;
    if(x==1)
    {
        queuearray();
    }
    else if(x==2)
    {
        queuelink();
    }
    else
    {
        return;
    }
    getch();
}

//-------------------------------------sub-Queue------------------------------------------
void queuearray()
{





    while(1)
    {
 string f;
    f =R"(
//Queue Implementation Through Array
#include<stdio.h>
int Q[5];

void enq();
void dq();
void peak();
void displayqueue();
int front=-1,end=-1;
int n=5;//size is fixed but you can set it through the user
int main()
{
    while(1)
    {
        system("cls");
        int ch;
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peak\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            enq();
            break;
        case 2:
            dq();
            break;
        case 3:
            peak();
            break;
        case 4:

            displayqueue();
            break;
        case 5:
            return;
        default :
            printf("Invalid Entered ...\a");
        }
        getch();
    }
    return 0;


}
//------------------------------------------------------------------------------
void enq()
{

    if(end==n-1)
    {
        printf("Overflow....\n\a");
    }
    else if(front ==-1 && end==-1)
    {
        end=front=0;
        printf("\nEnter elements : ");

        int val;
        scanf("%d",&val);
        Q[end]=val;

        printf("Enqueue function success..\n");


    }




    else
    {
        end++;

        printf("\nEnter elements : ");
        int val;
        scanf("%d",&val);
        Q[end]=val;

        printf("Enqueue function success..\n");

    }
}
//-------------------------------------
void dq()
{
    if(front==-1 && end==-1)

    {
        printf("Underflow...\a ");
    }

    else if(front==end)
    {
        front=end=-1;

         printf("Dequeue function success..\n");
    }


    else
    {

        front ++;
        printf("Dequeue function success..\n");

    }
}
//-------------------------------------
void peak()
{
    if(front==-1 && end==-1)
    {
        printf("Underflow...\a ");
    }
    else
    {
        printf("PEAK is %d",Q[front]);
    }
}
//-------------------------------------
void displayqueue()
{

    if(front ==-1&& end==-1)
    {
        printf("Underflow...\a ");
    }
    else
    {

       for(int i=front; i<=end; i++)
       {
           printf("%d ",Q[i]);
       }
    }
})";
//----------------------------------------------------------
        system("cls");
        int ch;
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peak\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            enq();
            break;
        case 2:
            dq();
            break;
        case 3:
            peaki();
            break;
        case 4:

            displayqueue();
            break;
        case 5:
            if(cat){
  sourceCode(f,1);
            }
            return;
            break;
        default :
            printf("Invalid Entered ...\a");
        }

    }




    getch();



}

//------------------------------------------------------------------------------
void enq()
{

    if(endi==nq-1)
    {
        printf("Overflow....\n\a");
    }
    else if(frontt ==-1 && endi==-1)
    {
        endi=frontt=0;
        printf("\nEnter elements : ");

        int val;
        scanf("%d",&val);
        Q[endi]=val;

        printf("Enqueue function success..\n");

    }
    else
    {
        endi++;

        printf("\nEnter elements : ");
        int val;
        scanf("%d",&val);
        Q[endi]=val;

        printf("Enqueue function success..\n");

    }
      getch();
}
//-------------------------------------
void dq()
{
    if(frontt==-1 && endi==-1)

    {
        printf("Underflow...\a ");
    }

    else if(frontt==endi)
    {
        frontt=endi=-1;

        printf("Dequeue function success..\n");
    }


    else
    {

        frontt ++;
        printf("Dequeue function success..\n");

    }
      getch();
}
//-------------------------------------
void peaki()
{
    if(frontt==-1 && endi==-1)
    {
        printf("Underflow...\a ");
    }
    else
    {
        printf("PEAK is %d",Q[frontt]);
    }

      getch();
}
//-------------------------------------
void displayqueue()
{

    if(frontt ==-1&& endi==-1)
    {
        printf("Underflow...\a ");
    }
    else
    {

        for(int i=frontt; i<=endi; i++)
        {
            printf("%d ",Q[i]);
        }
    }
      getch();
}


//--------------------------Queue link-------------------------------

void  queuelink()
{
    cat=0;
    queuearray();
    cat=1;

    string s = R"(
//Queue Implementation Through Linked list
#include<stdio.h>

struct node{

int data;
struct node*next;

};

struct node*temp,*head=NULL,*current,*fox,*ptr;

void enq();
void dq();
void peak();
void displayqueue();

int main()
{
    while(1)
    {
        system("cls");
        int ch;
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peak\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            enq();
            break;
        case 2:
            dq();
            break;
        case 3:
            peak();
            break;
        case 4:

            displayqueue();
            break;
        case 5:
            return;
        default :
            printf("Invalid Entered ...\a");
        }
        getch();
    }
    return 0;

}
//-----------------------------------------


void enq()
{
    temp=(struct node*)malloc(sizeof(struct node));
     printf("\nEnter elements : ");

        int val;
        scanf("%d",&val);
        temp->data=val;
        temp->next=NULL;
        if(head==NULL)
        {
            current =head=temp;
        }else{

        current->next=temp;
        current =temp;


        }
        printf("Success...");

}
//-----------------------------------------
void dq()
{
    if(head==NULL)
    {
        printf("Underflow..\a");
    }else{

    ptr=head->next;
    head=ptr;

     printf("Success...");
    }

}
//--------------------------------------------
void peak()
{
    if(head==NULL)
    {
        printf("Underflow..\a");
    }else{

    printf("%d ",head->data);
    }
}
//----------------------------------------
void displayqueue()
{fox=head;

     if(head==NULL)
    {
        printf("Underflow..\a");
    }else{


    while(fox!=NULL)
    {
        printf("%d ",fox->data);
        fox=fox->next;
    }
    }

}
)";


    sourceCode(s,1);
    getch();
}



//====================================================================================
void graph()
{
    system("cls");
    printf("BFS Traversal..\n");






        string s ;
    s =R"(
// BFS through Queue Implementation
#include <stdio.h>
int Q[500];

void enq(int val);
int dq();

int front = -1, end = -1;
int n = 500; // size is fixed but you can set it through the user

int main()
{

    int i = 4;
    printf("%d ", i);
    int visited[6] = {0, 0, 0, 0, 0, 0};
    int a[6][6] = {
        {0, 0, 0, 0, 0, 0}, // 0
        {0, 0, 1, 0, 0, 1}, // 1
        {0, 1, 0, 1, 0, 1}, // 2
        {0, 0, 1, 0, 1, 1}, // 3
        {0, 0, 0, 1, 0, 1}, // 4
        {0, 1, 1, 1, 1, 0}  // 5
    };

    visited[i] = 1;
    enq(i);
    while (!(end == -1 && front == -1))
    {

        int node = dq();
        for (int j = 0; j < 6; j++)
        {
            if (a[node][j] == 1 && visited[j] == 0)
            {
                printf("%d ", j);
                visited[j] = 1;
                enq(j);
            }
        }
    }
}
//------------------------------------------------------------------------------
void enq(int val)
{

    if (end == n - 1)
    {
        printf("Overflow....\n\a");
    }
    else if (front == -1 && end == -1)
    {
        end = front = 0;

        Q[end] = val;


    }

    else
    {
        end++;


        Q[end] = val;


    }
}
//-------------------------------------
int dq()
{
    if (front == -1 && end == -1)

    {
        printf("Underflow...\a ");
    }

    else if (front == end)
    {
        int p;
        p = Q[front];
        front = end = -1;
        return p;

    }

    else
    {
        int p;
        p = Q[front];

        front++;
        return p;

    }
}


// DFS traversal ....

#include <stdio.h>
void dfs(int i);
int visited[7] = {0, 0, 0, 0, 0, 0, 0};
int a[7][7] = {
    {0, 1, 1, 1, 0, 0, 0}, // 0
    {1, 0, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 0}, // 2
    {1, 0, 1, 0, 1, 0, 0}, // 3
    {0, 0, 1, 1, 0, 1, 1}, // 4
    {0, 0, 0, 0, 1, 0, 0}, // 5
    {0, 0, 0, 0, 1, 0, 0}  // 6

};

int main()
{

    dfs(0);
}

void dfs(int i)
{

    printf("%d ", i);
    visited[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (a[i][j] == 1 && visited[j] == 0)
        {

            dfs(j);
        }
    }
}













)";
sourceCode(s,0);



























    getch();

}
void heap()
{
    system("cls");
    printf("Still working \a");
    getch();
}
//=====================================================
void input()
{

    cout<<"Enter size : ";
    cin>>n;

    cout<<"Enter elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}
//===========================================================================================
void linear()
{
    system("cls");
    cout<<"Linear Search\n\n";


    searching();

    string s ;
    s =R"(#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter Search Elements : ");
    int val;
    scanf("%d",&val);

    for(int i=0; i<n; i++)
    {
       if(val==a[i])
       {      flag=1;
           printf("Found at position : %d",i+1);
           break;
       }
    }


    if(!flag)
    {
        printf("Elements not found\n");
    }
    return 0;

}
)";
sourceCode(s,0);


getch();
}
//=====================================================================================================






void sourceCode(string s,int flag)
{

   cout<<"\n\n1.To See Source code\n2.Press Any key to go Back";
int id;
cout<<"\nEnter : ";
cin>>id;
if(id==1)
{
    cout<<"\n\n"<<" \tSource Code       \n ";
    cout<<"--------------------------------\n\n";

     for(int i=0; i<s.size(); i++)
    {

    cout<<s[i];
    usleep(10000);


    }
    cout<<"\n\n//---------------That's all about this program-------------------\n\n\n";
 getch();
if(!flag)
    {
 dashboard();
}
else
    {
return;
   }
}else
{
   if(!flag)
    {
 dashboard();
}
else
    {
return;
   }
}

}



//Binary=========================================

void binary()
{
     system("cls");
    cout<<"Binary Sort\n\n";
cout<<"Elements Must be Sorted Order : \n";

        searching();
        string s ;
        s=R"(#include<stdio.h>

void binary(int a[], int low, int high,int val);
int main()
{
    int n,flag=0;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {
    scanf("%d",&a[i]);
    }

      printf("Enter Search Elements : ");
    int val;
    scanf("%d",&val);


    binary(a,0,n-1,val);


}
void binary(int a[], int low, int high,int val)
{
    int flag=0;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(a[mid]==val)
        {flag=1;
            printf("Found at position %d",mid+1);
            break;
        }else if( a[mid]>val)
        {
            high = mid-1;
        }else{

        low=mid+1;
        }

    }

    if(!flag)
    {
        printf("Elements not found ..!\a");
    }
}
)";
        sourceCode(s,0);
}
//===========================================================

void searching()
{

int flag=0;
    cout<<"Enter size : ";
    cin>>n;

    cout<<"Enter elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter search Elements : ";
    int val;
    cin>>val;

    for(int i=0; i<n; i++)
    {
        if(a[i]==val)
        {
            flag=1;
            cout<<"Found at position "<<i+1;
            break;
        }
    }
    if(!flag)
    {
        cout<<"Not found.... \a";
    }


}









//Merge sort=================================================================
void mergeSort(){

system("cls");
cout<<"Merge Sort\n\n";
input();
sort(a,a+n);
output();

string s;
s=R"(
#include<stdio.h>

int  merge(int a[],int low,int high);
void mergeSort(int a[],int low, int mid, int high);
int main()
{
    int n,flag=0;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {
    scanf("%d",&a[i]);
    }

   //mergeSort Function

   merge(a,0,n-1);
   //After merge sort
   for(int i=0; i<n; i++)
   {
       printf("%d ",a[i]);
   }

}
int  merge(int a[],int low,int high)
{
    if(low<high)
    {
        int mid =(low+high)/2;
        merge(a,low,mid);
        merge(a,mid+1,high);
        mergeSort(a,low,mid,high);

    }
}

void mergeSort(int a[],int low, int mid, int high)
{

    int i,j,k,n;
    n=high-low+1;
    int temp[n];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid&& j<=high)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++,i++;
        }else
        {
           temp[k]=a[j];
            k++,j++;
        }
    }



    while(i<=mid)
    {
        temp[k]=a[i];
            k++,i++;
    }
    while(j<=high)
    {
         temp[k]=a[j];
            k++,j++;
    }

    for(int i=low; i<=high; i++)
    {
        a[i]=temp[i];
    }

}

)";



sourceCode(s,0);

}

//=======================================================

void  quickSort()
{

    system("cls");
cout<<"Quick Sort\n\n";
input();
sort(a,a+n);
output();

string s;
    s=R"(#include<stdio.h>

int  partition(int a[],int low,int high);
void quick(int a[],int low, int high);
int main()
{
    int n,flag=0;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }



    quick(a,0,n-1);
    //After  sort
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

}


//===============================================
void  quick(int a[],int low,int high)
{
    if(low<high)
    {
        int pos = partition(a, low,high);
        quick(a,low,pos-1);
        quick(a,pos+1,high);


    }
}




//==================================================
int partition(int a[], int low, int high)
{

    int piv= a[low];
    int start,end;
    start=low;
    end=high;
    while(start<end)
    {
        while(a[start]<=piv)
        {
            start++;
        }
        while(a[end]>piv)
        {
            end--;

        }
        if(start<end)
        {
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }

    int temp=a[low];
    a[low]=a[end];
    a[end]=temp;
    return end;
}




)";

    sourceCode(s,0);



}




//==========================================================================================
 void towerOfHanoi()
  {
       system("cls");
 cout<<"Tower of Hanoi\n\n";

        int disk;
        char a,b,c;
    printf("Enter the number of Disk : ");

    scanf("%d",&disk);

 tower(disk,'a','b','c');

      string s;
      s=R"(//Tower of Hanoi
#include<stdio.h>
int main()
{
        int n;
        char a,b,c;
    printf("Enter the number of Disk : ");

    scanf("%d",&n);

 tower(n,'a','b','c');
}
void tower(int n, char beg, char aux, char end)

{
    if(n<=0){
        printf("Empty ...");

    }else if(n==1)
    {
        printf("Disk Move %c to %c\n",beg,end);
    }else{

    tower(n-1,beg,end,aux);
    tower(1,beg,aux,end);
    tower(n-1,aux,beg,end);

    }




}
)";
sourceCode(s,0);
  }


void tower(int disk, char beg, char aux, char end)

{
    if(disk<=0){
        printf("Empty ...");

    }else if(disk==1)
    {
        printf("Disk Move %c to %c\n",beg,end);
    }else{

    tower(disk-1,beg,end,aux);
    tower(1,beg,aux,end);
    tower(disk-1,aux,beg,end);

    }




}
//=================================================================


void countingSort()
{
    system("cls");
     cout<<"Counting Sort\n\n";
    input();
    sort(a,a+n);
    output();
    string s;
    s =R"(// Modified Counting sort
#include<stdio.h>
int main()
{
    int n;
    int k;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : ");
    int max=0;
    for(int i=0; i<n; i++)
    {

        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max=a[i];
        }
    }
    int temp[max+1];
    //fill the temporary Array with zero up to Max number
for(int i=0; i<max+1; i++)
{
            k=0;
    for(int j=0; j<n; j++)
    {
        if(a[j]==i)
        {  k++;


        }
         temp[i]=k;

    }
}

int p=0;
for(int i=0; i<max+1; i++)
{
   for(int j=0; j<temp[i]; j++)
   {
       a[p]=i;
       p++;
   }
}



for(int i=0; i<n; i++)
{
    printf("%d ",a[i]);
}




}

/*Original Counting Sort



#include<stdio.h>
int main()
{

    printf("Enter Size : ");
    int n,max=0;
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements :  ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max = a[i];
        }
    }

    int temp[max+1];
    for(int i =0; i<=max; i++ )
    {
        temp[i]=0;
    }




    for(int i =0; i<n; i++ )
    {

        temp[a[i]]+=1;

    }


    for(int i =1; i<=max; i++ )
    {

        temp[i]= temp[i]+temp[i-1];

    }


    int arry[n];


    for(int i=n-1; i>=0; i-- )
    {

        arry[temp[a[i]]-1]=a[i];
        temp[a[i]]--;


    }


    for(int i =0; i<n; i++ )
    {

        printf("%d ",arry[i]);

    }






}



 */


)";


sourceCode(s,0);

}

//====================================================
void insertionSort()
{
    system("cls");
     cout<<"Insertion Sort\n\n";
    input();
    sort(a,a+n);
    output();
    string s;
    s=R"(//Insertion sort
#include<stdio.h>
int main()
{
    int n;
    int k;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : ");
    int max=0;
    for(int i=0; i<n; i++)
    {

        scanf("%d",&a[i]);

    }

    //Insertion sort
    for(int i=1; i<n; i++)
    {
        int j=i-1;
        int temp=a[i];
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=temp;
    }


    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

}
)";
    sourceCode(s,0);
}




//============================================

void selectionSort()
{
    system("cls");
     cout<<"Selection Sort\n\n";

    input();
    sort(a,a+n);
    output();
    string s;
    s= R"(//Selection sort
#include<stdio.h>
int main()
{
    int n;
    int k;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : ");
    int max=0;
    for(int i=0; i<n; i++)
    {

        scanf("%d",&a[i]);

    }

    for(int i=0; i<n-1; i++)
    {
        int min =i;
        for( int j=i+1; j<n; j++)
        {
            if(a[min]>a[j])
            {
                min=j ;
            }
        }
        if(min!=i)
        {
            int temp = a[i];
            a[i]=a[min];
            a[min]=temp;
        }

    }


    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}

)";




sourceCode(s,0);
}
//==============================================================
/*From here I am doing all the task of Linked list  */
//=========================================================
void array_to_sll();
void insert_in_sll();
void delete_in_sll();
void reverse_sll();
void circular_sll();
void search_in_sll();
void dll();
void insert_in_dll();
void delete_in_dll();
void reverse_in_dll();
void search_in_dll();

//================================================================
void linkedList(){
while(1){
        system("cls");
        printf("\n\tAll About Linked List \n");
        printf("_______________________________________\n\n");
    printf("1.Array to Singly Linked list\n");
    printf("2.Insertion in Singly Linked list\n");
    printf("3.Deletion in Singly Linked list\n");
    printf("4.Reverse Singly Linked list\n");
    printf("5.Circular Singly Linked list\n");
    printf("6.Search in Singly Linked list\n");
    printf("7.Doubly Linked list\n");
    printf("8.Insertion in Doubly Linked list\n");
    printf("9.Deletion in Doubly Linked list\n");
    printf("10.Reverse in Doubly Linked list\n");
    printf("11.Search elements in Doubly Linked list\n");
  printf("12.Back to Home\n");
printf("\n\nChoice : ");
int c;
scanf("%d",&c);
switch(c)
{
          case 1:
      array_to_sll();
      break;
    case 2:
      insert_in_sll();
      break;
    case 3:
      delete_in_sll();
      break;
    case 4:
      reverse_sll();
      break;
    case 5:
      circular_sll();
      break;
    case 6:
      search_in_sll();
      break;
    case 7:
      dll();
      break;
    case 8:
      insert_in_dll();
      break;
    case 9:
      delete_in_dll();
      break;
    case 10:
      reverse_in_dll();
      break;
    case 11:
      search_in_dll();
      break;
    case 12:
      return;

    default:
      printf("Invalid choice!\a\n");

      getch();
  }


}


}


//--------------------------------------------------------










//----------------------------------------------------------


void circular_sll()
{
    system("cls");
    input();
    output();

    string s;
    s= R"(#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node*next; // to carrying node address we need node type pointer

};

struct node * create(int val)
{
    struct node*root;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=val;
    root->next=NULL;

    return root;
}

int main()
{
    int val,n;
    struct node*head=NULL,*current,*temp,*fogg;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&val);
        temp=create(val);
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }

 current ->next = head;

 fogg = head ;
    printf("Circular Linked List: ");


    do{
            printf("%d ",fogg->data);
    fogg = fogg->next ;

    }while(fogg!=head);



}


)";
    sourceCode(s,1);
    getch();



}

//----------------------------------------------------
void search_in_sll(){
system("cls");
searching();
string s;
s =R"(
//search  in linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{

    int data;
    struct node*next; // to carrying node address we need node type pointer

};

int main()
{
    int val,n;
    struct node*head=NULL,*current,*temp;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&val);
        temp->data=val;
        temp->next=NULL;
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }

    printf("Enter elements to search : ");
    int item;
    scanf("%d",&item);

    int i=1,flag=0;;
    while(head!=NULL)
    {
        if(head->data == item)
        {
            flag=1;

            printf("%d found at position  %d ",head->data,i);
            break;

        }
        head=head->next;
        i++;
    }
    if(!flag)
    {
        printf("Not found \a");
    }



}

)";


sourceCode(s,1);
getch();


}
//


//----------------------------------------------------
void array_to_sll()
 {
     system("cls");
input();
 output();
string s;

s = R"(
//linked list traversal
#include<stdio.h>
#include<stdlib.h>
struct node
{

    int data;
    struct node*next; // to carrying node address we need node type pointer

};

int main()
{
    int val,n;
    struct node*head=NULL,*current,*temp;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&val);
        temp->data=val;
        temp->next=NULL;
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }



    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }



}
)";

sourceCode(s,1);

getch();



 }
//==================================================Elements for Linked list------------------------
struct node
{

    int data;
    struct node*next; // to carrying node address we need node type pointer

};







struct node * create(int val)
{
    struct node*root;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=val;
    root->next=NULL;

    return root;
}


//----------for insertion ----------------


void  insert_end(struct node*top,int item);

void insert_middle(struct node *top,int item);


void  insert_beginning(struct node *top, int item);

//------------for deletion--------------------
void  delete_end(struct node*top);

void delete_middle(struct node *top,int n);


void  delete_beginning(struct node *top);


//------------------------------------------------------------------------------------------------
void reverse_in_dll()
{
    input();
    reverse(a,a+n);
    output();
    string s;
    s=R"(//Reveres Doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct Dnode
{

    int data;
    struct Dnode*next; // to carrying node address we need node type pointer
  struct Dnode*prev;
};


struct Dnode * create(int val)
{
    struct Dnode*root;
    root=(struct Dnode*)malloc(sizeof(struct Dnode));
    root->data=val;
    root->next=NULL;
    root->prev=NULL;

    return root;
}

int main()
{
    int val,n;
    struct Dnode*head=NULL,*current,*temp,*last=NULL;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&val);
        temp=create(val);
        temp->prev=last;
        last=temp;
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }

    while(head->next!=NULL)
    {
       head= head->next;
    }
    printf("Reverse : ");


    while(head!=NULL)
    {
        printf("%d ",head->data);
       head= head->prev;
    }

    return 0;

}
)";

    sourceCode(s,1);
    getch();
}





//=================================================================================================
void  reverse_sll(){

system("cls");
input();
reverse(a,a+n);
output();

string s;
s=R"(
//reverse  in linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node*next; // to carrying node address we need node type pointer

};

struct node * create(int val)
{
    struct node*root;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=val;
    root->next=NULL;

    return root;
}
int main()
{
    int val,n;
    struct node*head=NULL,*current,*temp,*tail=NULL,*ptr,*fogg;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&val);
        temp=create(val);
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }



fogg=head;
int backup;

while(fogg!=NULL)
{ backup=fogg->next;
    fogg->next=tail;
    tail=fogg;
    fogg=backup;
}
printf("After Reverse : ");


while(tail!=NULL)
{
    printf("%d ",tail->data);
    tail=tail->next;
}
}
)";


sourceCode(s,1);
getch();


}


//----------------------------------------------------------------------------------------------------------------
  void insert_in_sll()
{



    int val,n;
    struct node*head=NULL,*current,*temp;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&val);
        temp=create(val);
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }

    printf("Enter elements to insert  : ");
    int item;
    scanf("%d",&item);


   printf("\nWhere are you want to insert ? \n");
   printf("1.At beginning \n");
   printf("2.In the Middle  \n");
   printf("3.At end \n");
 int c;
  printf("Enter : ");
 scanf("%d",&c);
 if(c==1)
 {
     insert_beginning(head,item);
 }else if(c==2)
 {
     insert_middle(head,item);
 }else if(c==3)
 {
     insert_end(head,item);
 }else
 {
     printf("Invalid input,,,\a");

 }
     getch();
string s;
//------------------------------------   code -----------------------------------------
s=R"(
//insertion in linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node*next; // to carrying node address we need node type pointer

};


struct node * create(int val)
{
    struct node*root;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=val;
    root->next=NULL;

    return root;
}


void  insert_end(struct node*top,int item);

void insert_middle(struct node *top,int item);


void  insert_beginning(struct node *top, int item);

int main()
{
    int val,n;
    struct node*head=NULL,*current,*temp;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&val);
        temp=create(val);
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }

    printf("Enter elements to insert  : ");
    int item;
    scanf("%d",&item);


   printf("\nWhere are you want to insert ? \n");
   printf("1.At beginning \n");
   printf("2.In the Middle  \n");
   printf("3.At end \n");
 int c;
  printf("Enter : ");
 scanf("%d",&c);
 if(c==1)
 {
     insert_beginning(head,item);
 }else if(c==2)
 {
     insert_middle(head,item);
 }else if(c==3)
 {
     insert_end(head,item);
 }else
 {
     printf("Invalid input,,,\a");
 }



}

//---------------------------------------------


void  insert_beginning(struct node *top, int item)
{
    struct node *new_node,*ptr;

    new_node = create(item);


    new_node->next =top;
    top =new_node;
    ptr =top;



    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }


}

//===========================================================================
void  insert_end(struct node*top,int item)
{
    struct node *new_node,*ptr;

    new_node = create(item);
    ptr =top;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }

    ptr->next=new_node;

    while(top!=NULL)
    {
        printf("%d ",top->data);
        top=top->next;


    }


}


//============================================================================

void insert_middle(struct node *top,int item)
{

    int i=1,pos;

    struct node *new_node,*ptr;

    new_node = create(item);



    printf("Enter the position : ");
    scanf("%d",&pos);

    while(top!=NULL)
    {


        if(i==pos-1)
        {
            new_node->next=top->next;
            top->next=new_node;
        }
        printf("%d ",top->data);
        top=top->next;
        i++;
    }
}


)";
//------------------------------------   code -----------------------------------------
if(cat){
sourceCode(s,1);
}
getch();
}


















//----------------------------------------------------------------------------



void dll(){
input();
output();
string s;
s=R"(//Doubly linked list
#include<stdio.h>
#include<stdlib.h>



struct node
{

    int data;
    struct node*next; // to carrying node address we need node type pointer
  struct node*prev;
};






struct node * create(int val)
{
    struct node*root;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=val;
    root->next=NULL;
    root->prev=NULL;

    return root;
}





int main()
{
    int val,n;
    struct node*head=NULL,*current,*temp,*last=NULL;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&val);
        temp=create(val);
        temp->prev=last;
        last=temp;
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }




    while(head!=NULL)
    {
        printf("%d ",head->data);
       head= head->next;
    }


}
)";


sourceCode(s,1);
getch();
}










//..............................................




void  insert_beginning(struct node *top, int item)
{
    struct node *new_node,*ptr;

    new_node = create(item);


    new_node->next =top;
    top =new_node;
    ptr =top;



    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }

     getch();
}

//===========================================================================
void  insert_end(struct node*top,int item)
{
    struct node *new_node,*ptr;

    new_node = create(item);
    ptr =top;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }

    ptr->next=new_node;

    while(top!=NULL)
    {
        printf("%d ",top->data);
        top=top->next;


    }
     getch();

}





//============================================================================

void insert_middle(struct node *top,int item)
{

    int i=1,pos;

    struct node *new_node,*ptr;

    new_node = create(item);



    printf("Enter the position : ");
    scanf("%d",&pos);

    while(top!=NULL)
    {


        if(i==pos-1)
        {
            new_node->next=top->next;
            top->next=new_node;
        }
        printf("%d ",top->data);
        top=top->next;
        i++;
    }

     getch();



}





//.......................................................







void  delete_in_sll()
  {

  system("cls");
      int val,n;
    struct node*head=NULL,*current,*temp;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&val);
        temp=create(val);
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }




   printf("\nWhere do you want to delete? \n");
   printf("1.At beginning \n");
   printf("2.In the Middle  \n");
   printf("3.At end \n");
 int c;
 printf("Enter : ");
 scanf("%d",&c);
 if(c==1)
 {
     delete_beginning(head);
 }else if(c==2)
 {
     delete_middle(head,n);
 }else if(c==3)
 {
     delete_end(head);
 }else
 {
     printf("Invalid input,,,\a");
 }


 string s;
 s=R"(
//insertion in linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node*next; // to carrying node address we need node type pointer

};

struct node * create(int val)
{
    struct node*root;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=val;
    root->next=NULL;

    return root;
}

void  delete_end(struct node*top);

void delete_middle(struct node *top,int n);

void  delete_beginning(struct node *top);

int main()
{
    int val,n;
    struct node*head=NULL,*current,*temp;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&val);
        temp=create(val);
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }
   printf("\nWhere do you want to delete ? \n");
   printf("1.At beginning \n");
   printf("2.In the Middle  \n");
   printf("3.At end \n");
 int c;
 printf("Enter : ");
 scanf("%d",&c);
 if(c==1)
 {
     delete_beginning(head);
 }else if(c==2)
 {
     delete_middle(head,n);
 }else if(c==3)
 {
     delete_end(head);
 }else
 {
     printf("Invalid input,,,\a");
 }

}
//---------------------------------------------


void  delete_beginning(struct node *top)
{
    struct node *new_node,*ptr;

    ptr = top->next;
    free(top); //deallocate memory
    top=ptr;



    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }


}

//===========================================================================
void  delete_end(struct node*top)
{
    struct node *new_node,*ptr;


    ptr=top;
    while(ptr->next!=NULL)
    {
         printf("%d ",ptr->data);
        ptr=ptr->next;
    }


   printf("\n\n Deleted element %d",ptr->data);

free(ptr);


}

//============================================================================

void delete_middle(struct node *top,int n)
{

    int i=1,pos;

    struct node *new_node,*ptr;
    printf("Enter the position : ");
    scanf("%d",&pos);
    if(pos==1 || pos ==n)
    {
        printf("You can't Delete the first and last Element \a ");
    }else {

    while(top!=NULL)
    {


        if(i==pos-1)
        {
           ptr=top->next;
           new_node=ptr->next;
           free(ptr);
           top->next=new_node;
        }
        printf("%d ",top->data);
        top=top->next;
        i++;
    }

    }

}

)";
if(cat){
sourceCode(s,1);

 getch();
}

  }





void  delete_beginning(struct node *top)
{
    struct node *new_node,*ptr;

    ptr = top->next;
    free(top); //deallocate memory
    top=ptr;



    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }

 getch();
}

//===========================================================================
void  delete_end(struct node*top)
{
    struct node *new_node,*ptr;


    ptr=top;




    while(ptr->next!=NULL)
    {
         printf("%d ",ptr->data);
        ptr=ptr->next;
    }


   printf("\n\n Deleted element %d",ptr->data);

free(ptr);
 getch();

}





//============================================================================

void delete_middle(struct node *top,int n)
{

    int i=1,pos;

    struct node *new_node,*ptr;



    printf("Enter the position : ");
    scanf("%d",&pos);
    if(pos==1 || pos ==n)
    {
        printf("You can't Delete the first and last Element \a ");
    }else {

    while(top!=NULL)
    {


        if(i==pos-1)
        {
           ptr=top->next;
           new_node=ptr->next;
           free(ptr);
           top->next=new_node;
        }
        printf("%d ",top->data);
        top=top->next;
        i++;
    }

    }

     getch();

}
//===================================================
void insert_in_dll()
{ cat=0;
    insert_in_sll();
cat=1;
string s = R"(//insertion in Doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct Dnode
{

    int data;
    struct Dnode*next; // to carrying node address we need node type pointer
struct Dnode*prev;
};


struct Dnode * create(int val)
{
    struct Dnode*root;
    root=(struct Dnode*)malloc(sizeof(struct Dnode));
    root->data=val;
    root->next=NULL;
    root->prev=NULL;

    return root;
}


void  insert_end(struct Dnode*top,int item);

void insert_middle(struct Dnode *top,int item);


void  insert_beginning(struct Dnode *top, int item);

int main()
{
    int val,n;
    struct Dnode*head=NULL,*current,*temp,*last=NULL;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&val);
        temp=create(val);
        temp->prev=last;
        last=temp;
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }

    printf("Enter elements to insert  : ");
    int item;
    scanf("%d",&item);


   printf("\nWhere do you want to insert ? \n");
   printf("1.At beginning \n");
   printf("2.In the Middle  \n");
   printf("3.At end \n");
 int c;
  printf("Enter : ");
 scanf("%d",&c);
 if(c==1)
 {
     insert_beginning(head,item);
 }else if(c==2)
 {
     insert_middle(head,item);
 }else if(c==3)
 {
     insert_end(head,item);
 }else
 {
     printf("Invalid input,,,\a");
 }


}

//---------------------------------------------


void  insert_beginning(struct Dnode *top, int item)
{
    struct Dnode *new_node,*ptr;

    new_node = create(item);


     new_node->next =top;
    top->prev=new_node;
    top =new_node;
    ptr =top;

    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }


}

//===========================================================================
void  insert_end(struct Dnode*top,int item)
{
    struct Dnode *new_node,*ptr,*p;

    new_node = create(item);
    p=ptr =top;

    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }

    ptr->next=new_node;
    new_node->prev=ptr;

while(p!=NULL){


    printf("%d ",p->data);
    p=p->next;

}

}

//============================================================================

void insert_middle(struct Dnode *top,int item)
{

    int i=1,pos;

    struct Dnode *new_node,*ptr;

    new_node = create(item);

    printf("Enter the position : ");
    scanf("%d",&pos);

    while(top!=NULL)
    {

        if(i==pos-1)
        {
            new_node->prev=top;
            new_node->next=top->next;
            top->next=new_node;
        }
        printf("%d ",top->data);
        top=top->next;
        i++;
    }

}
)";
sourceCode(s,1);

}
//==================================================

   void   delete_in_dll()
   {
       cat=0;
       delete_in_sll();
       cat=1;
      string s;
      s =R"(
//Delete  in Doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct Dnode
{

    int data;
    struct Dnode*next; // to carrying node address we need node type pointer
struct Dnode*prev;
};


struct Dnode * create(int val)
{
    struct Dnode*root;
    root=(struct Dnode*)malloc(sizeof(struct Dnode));
    root->data=val;
    root->next=NULL;
    root->prev=NULL;

    return root;
}


void  dl_end(struct Dnode*top);

void dl_middle(struct Dnode *top);


void  dl_beginning(struct Dnode *top);

int main()
{
    int val,n;
    struct Dnode*head=NULL,*current,*temp,*last=NULL;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&val);
        temp=create(val);
        temp->prev=last;
        last=temp;
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }


   printf("\nWhere do you want to Delete  ? \n");
   printf("1.At beginning \n");
   printf("2.In the Middle  \n");
   printf("3.At end \n");
 int c;
  printf("Enter : ");
 scanf("%d",&c);
 if(c==1)
 {
     dl_beginning(head);
 }else if(c==2)
 {
     dl_middle(head);
 }else if(c==3)
 {
     dl_end(head);
 }else
 {
     printf("Invalid input,,,\a");
 }


}

//---------------------------------------------


void  dl_beginning(struct Dnode *top)
{
    struct Dnode *new_node,*ptr,*p;

 //   new_node = create(item);

p=top->next;
p->prev=NULL;
ptr=p;

    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }


}

//===========================================================================
void  dl_end(struct Dnode*top)
{
    struct Dnode *new_node,*ptr,*p,*cat;

//    new_node = create(item);
    p=ptr =top;

    while(ptr->next!=NULL)
    {
         cat=ptr;
        ptr=ptr->next;

    }
cat->next=NULL;


while(p!=NULL){


    printf("%d ",p->data);
    p=p->next;

}

}

//============================================================================

void dl_middle(struct Dnode *top)
{

    int i=1,pos;

    struct Dnode *new_node,*ptr;

 //   new_node = create(item);

    printf("Enter the position : ");
    scanf("%d",&pos);

    while(top!=NULL)
    {

        if(i==pos-1)
        {
          ptr=top->next;
          new_node=ptr->next;
          new_node->prev=top;
          top->next= new_node;
        }
        printf("%d ",top->data);
        top=top->next;
        i++;
    }



}
)";
       sourceCode(s,1);
getch();
   }








//==================================================
void  search_in_dll()
{
    system("cls");
 searching();
    string s = R"(//Search in Doubly linked list
#include<stdio.h>
#include<stdlib.h>



struct node
{

    int data;
    struct node*next; // to carrying node address we need node type pointer
  struct node*prev;
};
//------------------------------------------

struct node * create(int val)
{
    struct node*root;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=val;
    root->next=NULL;
    root->prev=NULL;

    return root;
}
//------------------------------------------

int main()
{
    int val,n;
    struct node*head=NULL,*current,*temp,*last=NULL;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&val);
        temp=create(val);
        temp->prev=last;
        last=temp;
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }


printf("Enter search Elements : ");
int item,i=1,flag=0;
scanf("%d",&item);


    while(head!=NULL)
    {
        if(head->data==item)
        { flag=1;
            printf("%d found at = %d ",item,i);
            break;
        }
       head= head->next;
       i++;

    }
    if(!flag)
    {
        printf("Not Found...! \a");
    }

}
)";


    sourceCode(s,1);

        getch();

}
//===================== Stack Elements =========================                  Stacking
 void stackingAr();
// void stackinglink();
 int stacki[5];

void push();
void pop();
void peak();
void display2();
int top=-1;
int n2=5;//size is fixed but you can set it through the user
//==================================================
void stacking()

{
    system("cls");
    printf("\n Implementation of Stack \n\n");
    printf("1.Stack implementation through Array\n");
    printf("2.Stack implementation through Linked list\n");
    printf("\nPress anything to go back\n");
    printf("Enter : ");
    int ch;
    scanf("%d",&ch);
    if(ch==1)
    {
        stackingAr();
        string s;
        s=R"(//Stack implementation through Array
#include<stdio.h>
int stack[5];

void push();
void pop();
void peak();
void display();
int top=-1;
int n=5;//size is fixed but you can set it through the user
int main()
{
    while(1){
        system("cls");
    int ch;
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Peak\n");
    printf("4.Display\n");
    printf("5.Exit\n");
    printf("Enter choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        peak();
        break;
    case 4:

        display();
        break;
    case 5:
        return;
    default :
        printf("Invalid Entered ...\a");
    }
    getch();
}


}
//------------------------------------------------------------------------------
void push()
{

    if(top==n-1)
    {
        printf("Overflow....\n\a");
    }else{
    top++;
    printf("\nEnter elements : ");
    int val;
    scanf("%d",&val);
    stack[top]=val;

    printf("Push function success..\n");

    }
}
//-------------------------------------
void pop()
{
    if(top==-1)
    {
        printf("Underflow...\a ");
    }else{

    top--;


     printf("POP function success..\n");

    }
}
//-------------------------------------
void peak()
{
    if(top==-1)
    {
        printf("Underflow...\a ");
    }else{
        printf("PEAK is %d",stack[top]);
    }
}
//-------------------------------------
void display()
{
    int i=top;
     if(top==-1)
    {
        printf("Underflow...\a ");
    }else{

    while(i>=0)
    {
        printf("%d \n",stack[i]);
        i--;
    }

    }
}
)";
        sourceCode(s,1);
        getch();
    }else if(ch==2)
    {  cat=0;
        stackingAr();
        cat=1;

         string s;
        s=R"(//Stack implementation through Linked list
#include<stdio.h>


struct node
{
    int data;
    struct node*prev;

};

struct node*top=NULL,*p,*previous,*temp;


void push();
void pop();
void peak();
void display();

int n=5;//size is fixed but you can set it through the user
int main()
{
    while(1)
    {
        system("cls");
        int ch;
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peak\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peak();
            break;
        case 4:

            display();
            break;
        case 5:
            return;
        default :
            printf("Invalid Entered ...\a");
        }
        getch();
    }


}
//--------------------------------------
void push()
{
    printf("Enter elements : ");
    int val;
    scanf("%d",&val);
    p=(struct node*)malloc(sizeof(struct node)); // Here I am building a linked list
    // by tracking  previous  address\n


    p->data=val;
    p->prev=top;
    top=p;



    printf("Push function success..\n");


}
//-------------------------------------
void pop()
{
    if(top==NULL)
    {
        printf("Underflow...\a ");
    }
    else
    {

        previous =top->prev;
        top=previous;

        printf("POP function success..\n");
    }

}

//-------------------------------------
void peak()
{
    if(top==NULL)
    {
        printf("Underflow...\a ");
    }
    else
    {
        printf("PEAK is %d",top->data);
    }
}
//-------------------------------------
void display()
{
    temp=top;

    if(temp==NULL)
    {
        printf("Underflow...\a ");
    }
    else
    {

        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->prev;
        }

    }
}
)";
        sourceCode(s,1);

    }else
    {
    return;

    }

}
//=====================================================
 void stackingAr()
 {

    while(1){
        system("cls");
    int ch;
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Peak\n");
    printf("4.Display\n");
    printf("5.Exit\n");
    printf("Enter choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        peak();
        break;
    case 4:

        display2();
        break;
    case 5:
        return;
    default :
        printf("Invalid Entered ...\a");
    }
    getch();
}



 }







 void push()
{

    if(top==n2-1)
    {
        printf("Overflow....\n\a");
    }else{
    top++;
    printf("\nEnter elements : ");
    int val;
    scanf("%d",&val);
    stacki[top]=val;

    printf("Push function success..\n");

    }
}
//-------------------------------------
void pop()
{
    if(top==-1)
    {
        printf("Underflow...\a ");
    }else{

    top--;


     printf("POP function success..\n");

    }
}
//-------------------------------------
void peak()
{
    if(top==-1)
    {
        printf("Underflow...\a ");
    }else{
        printf("PEAK is %d",stacki[top]);
    }
}
//-------------------------------------
void display2()
{
    int i=top;
     if(top==-1)
    {
        printf("Underflow...\a ");
    }else{

    while(i>=0)
    {
        printf("%d \n",stacki[i]);
        i--;
    }

    }
}






//====================================================
void output()
{

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"  ";
    }
}

