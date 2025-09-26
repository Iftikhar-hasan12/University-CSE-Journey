#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
//------------------------------Global declare ------------------------------------
char ownername[100] ;
int dt,mn,yr;
struct node *backup, * current,* temp,* global_current=NULL,*dog = NULL;


int cat =1,sadia=1,bill=0;
//-------------------function prototype----------------------------

void check ();
int checkitem(char s[], int val);

//---------------------------------For structure and Node --------------------------
struct node
{



    char customer[100];
    int age ;
    char customerMedi[100];
    int  item;
    char medi[100];
    int qty;
    int taka;
    int bill;
    struct node * next;//linking node

};
//------------------------------------------------create node----------------------------
int i=1;
struct node* create_node()
{
    char s1[20];
    struct node * root;
    root = (struct node *)malloc(sizeof(struct node ));

    if(i)
    {
        printf("Enter following Information to add new medicine \n");
        i=0;
    }

    printf("\nMedicine Name : ");
    fflush(stdin);
    fgets(s1, sizeof(s1), stdin);

    strcpy(root->medi, s1);

    printf("Price per pieces(BDT) : ");
    int taka;
    scanf("%d",&taka);


    printf("Medicine Quantity  : ");
    int val;
    scanf("%d",&val);




    root ->taka=taka;
    root->qty =val;
    root->next =NULL;
    return root;

}






//-------------------------------------Main Body-----------------------------------

int main()
{

    front_page();
    dashboard();



    getch();

}







// ----------------------------Front- page ----------------------------------------
void front_page()
{


    printf(" \n\n\n\n\n\t\t\t\t\tWelcome Ma'am ");
    printf(" \n\n\t\t\t\t\tPlease enter your name : ");

    fgets(ownername, sizeof(ownername), stdin);

    printf(" \t\t\t\t\tDate : ");
    scanf("%d%d%d",&dt,&mn,&yr);

}









//-------------------------- Dashboard ------------------------------------

void   dashboard()
{
    while(1)
    {
        system("cls");
        if(cat ==1)
        {
            char s[10000]="Dashboard  of Medistore\n \n\t\t\t\t\t1.Check stored Medicine.\n \t\t\t\t\t2.Add new medicine.\n  \t\t\t\t\t3.Sell Medicine.\n \t\t\t\t\t4.Today's selling history.\n \t\t\t\t\t5.End.\n\n\t\t\t\t\tChoose : ";


            printf(" \n\n\t\t\t\t\t");
            for( int i=0; s[i]!='\0'; i++)
            {
                printf("%c",s[i]);
                usleep(100000);
            }
            cat =0;
        }
        else
        {
            printf(" \n\n\t\t\t\t\t");
            printf("Dashboard  of Medistore\n \n\t\t\t\t\t1.Check stored Medicine.\n \t\t\t\t\t2.Add new medicine.\n  \t\t\t\t\t3.Sell Medicine.\n \t\t\t\t\t4.Today's selling history.\n \t\t\t\t\t5.End.\n\n\t\t\t\t\tChoose :");

        }


        int ch;
        scanf("%d",&ch);

        switch(ch)
        {
        case 01:
            check();
            break;
        case 02:
            add();
            break;
        case 03:
            sellM();
            break;
        case 04:
            total_sold();
            break;
        case 05:
            exit(0);
            break;

        default :
            printf("Invalid choice ...\a");
            break;
        }

    }


    getch();

}














//--------------------------add medicine----------------------------------------------

void add()
{
    i=1;
    int n;
    system("cls");
    struct node * head =dog;
    current =global_current;

    printf("\n\nHow many Items do you want to insert : ");



    scanf("%d",&n);



    for(int i=0; i<n; i++)
    {


        temp = create_node();
        if( head == NULL)
        {
            head = current = temp;

        }
        else
        {

            current ->next = temp;
            current = temp;

        }


    }
    if(sadia)
    {
        backup = head ;
        dog = head ;
        sadia =0;
    }

    global_current = current ;


    printf("Added successfully ...\a");

    getch();



}










// ---------------------------Traversal ---------------------

void check ( )
{
      system("cls");
printf("Total stored Medicine are :\n\n \n");
    struct node* ptr ;
    ptr = backup;
    if( backup==NULL )
    {
        printf("Empty...\a");
    }
    else
    {

        while(ptr!=NULL)
        {
            size_t len = strcspn(ptr->medi, "\n");
            ptr->medi[len] = '\0';
            if(ptr->qty!=0){
            printf("Medicine Name: %s, Quantity: %d\n", ptr->medi, ptr->qty);

            printf("\n");
            }

            ptr= ptr->next;

        }
    }
    getch();

}







//----------------------------Sell Medicine ---------------------------------------


void sellM ()
{


    system("cls");
    if(backup==NULL)
    {

        printf("Empty store.....\a");
        getch();
        return ;
    }
    else
    {
        customer ();
    }



}





//----------------------------------------------Linked list for Customer ------------------------------------------
struct node* epo=NULL,*toma,*lamiya;


void customer ()
{
    char s1[100];

    printf("Enter Medicine Name : ");



    //-------------------------------

    fflush(stdin);
    fgets(s1, sizeof(s1), stdin);

    size_t len = strcspn(s1, "\n");
    if (s1[len] == '\n')
        s1[len] = '\0';
    //--------------------------------

    printf("Enter Quantity : ");
    int val;
    scanf("%d",&val);
    int flop = checkitem(s1,val);
    if(flop==1)
    {



        printf("Enter Customer name : ");


        char s2[100];
        fflush(stdin);
        fgets(s2, sizeof(s2), stdin);

        printf("Enter Customer Age : ");
        int age;
        scanf("%d",&age);
        int amnt = bill;
        printf("\nYour total bill : %d",bill);

        toma = (struct node*)malloc(sizeof(struct node));

        strcpy(toma -> customer, s2);
        strcpy(toma -> customerMedi, s1);


        toma->bill =amnt;
        toma->item = val;
        toma->age = age;
        toma ->next = NULL;

        if(epo ==NULL)
        {
            epo = lamiya= toma ;
        }
        else
        {

            lamiya ->next = toma;
            lamiya = toma ;

        }




    }
    else
    {
        return ;

    }



    getch();
}










//-------------------------------------------------Check Item -------------------------------------------
int checkitem(char s[], int val)
{

    struct node * pakistan;
    pakistan = backup;

    int k,flag =0 ;
    while( pakistan !=NULL)
    {

        k = strcmp(pakistan->medi,s );

        if(k==0)
        {


            flag =1;
            if(val <= pakistan->qty)
            {
                pakistan->qty= (pakistan->qty -val);
                bill = val *pakistan->taka;
                return 1;

            }
            else if (val > pakistan->qty )
            {
                bill=0;
                printf("Insufficient According to your Demand ..\n\a");
                printf("You Demanded %d \n\a",val);
                printf("Stored only  %d \n\a",pakistan->qty);
                getch();
                return 0;


            }
            else if( pakistan->qty ==0)
            {
                bill=0;
                printf("Not found  404 !!\a");
                getch();
                return 0;
            }

        }

        pakistan = pakistan ->next ;

    }
    if(flag==0)
    {
        bill=0;
        printf("Not found  404 !!\a");
        getch();
        return 0;

    }


    getch();


}










//----------------------------------Total - sold-------------------------------

void total_sold()
{
      system("cls");
      printf("Today's selling history : \n\n");
    int sum =0;
    if(epo==NULL)
    {
        printf("Sold not yet...\a");
        getch();
        return ;
    }
    else
    {
        struct node * p;
        p= epo;

        while(p!=NULL)
        {
            printf("\n\nCustomer information ...\n");
            printf("Date : %d/%d/%d\n",dt,mn,yr);
            printf("Name : %s",p->customer);
                   printf("Age   : %d yrs\n",p->age);
            printf("Medicine  : %s\n",p->customerMedi);

            printf("Quantity  : %d pcs\n",p->item);

           printf("Total bill : %d Tk\n",p->bill);
            sum = sum + p->bill;
            printf("Voucher made  by %s\n",ownername);

            p=p->next ;
        }

        printf("\n\n Today's  Total sold  %d Taka.",sum);



    }


    getch();
}


