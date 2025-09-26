
#include <stdio.h>
#include <stdlib.h>

struct node *head = NULL, *current, *temp, *ptr;
struct cnode *chead, *ccur, *ctemp;
int champ = 500,pass=1111;



//===================================================================
char ownername[100];
void login();
int dt, mn, yr;

//----------------------------------------------Front page----------------------
void front_page()
{

    printf(" \n\n\n\n\n\t\t\t\t\tWelcome Ma'am ");
    printf(" \n\n\t\t\t\t\tPlease enter your name : ");
fflush(stdin);
    fgets(ownername, sizeof(ownername), stdin);

    printf(" \t\t\t\t\tDate : ");
    scanf("%d%d%d", &dt, &mn, &yr);
}

int papa = 1;

//--------------------------------------------Main Function------------------------------

int main()
{
    login();
     system("cls");
    front_page();
    dashboard();
}


//---------------------------------------------------Logging----------------------------------
void login()
{
    int p,a=2,tini=0;


    while(a--)
    {
        system("cls");
        printf(" \n\n\n\n\n\t\t\t\t\tPlease Enter the Password : ");
        scanf("%d",&p);

        if(p==pass)
        { tini =1;
            printf(" \n\n\t\t\t\t\tCongrats .. Permission Granted .");
            getch();
            return;

        }
        else
        {

            printf(" \n\n\t\t\t\t\tOpps.. Wrong pass try again \a .");
            getch();

        }


    }

    if(!tini)
    {
        printf(" \n\n\t\t\t\t\tSorry to say you have been blocked from this site . \n\n\t\t\t\t\tHave a good day.");
        getch();
      exit(0);

    }







}




//--------------------------------------------------Finishing Function------------------------------
void finish()
{


    system("cls");
    printf(" \n\n\n\n\n\t\t\t\t\tThank you for using my Library Management System.");
    getch();
    exit(0);


}




// -----------------------------node 01 for All book -----------------------------------
struct node
{

    char name[20];
    char Gname[20];
    char author[20];
    int id;
    int qty;
    struct node *next;
};





//-------------------------------------node 02 for All Member ----------------------------------------
struct node2
{

    char name[20];
    int id;
    int code;
    struct node2 *next;
};






//-------------------------------------node 03 for All Issued Information-------------------------------

struct node3
{

    char name[20];
    char bookname[20];
    int id;
    int bookid;
    int code;

    struct node3 *next;
};




//-------------------------------------------Linked List for Copy and Sorting-------------------------------------------

struct node4
{

    char name[20];
    char Gname[20];
    char author[20];
    int id;
    int qty;
    struct node *next;
};


//-------------------------------------Check By Genre------------------------------------------------------------------

void genre()
{
    if(head==NULL)
    {
        system("cls");
        printf("Book is not available\a");
        getch();
        return;
    }
    // ------------------------------------Copy information from Main node to node4---------------------------------
    struct node *tempNode = head;
    struct node4 *head4 = NULL, *current4;
    int n=0;
    while (tempNode != NULL)
    {
        n++;//Tracking the node number for Bubble sort
        struct node4 *newNode4 = (struct node4 *)malloc(sizeof(struct node4));
        strcpy(newNode4->name, tempNode->name);
        strcpy(newNode4->Gname, tempNode->Gname);
        strcpy(newNode4->author, tempNode->author);
        newNode4->id = tempNode->id;
        newNode4->qty = tempNode->qty;
        newNode4->next = NULL;

        if (head4 == NULL)
        {
            current4 = head4 = newNode4;
        }
        else
        {
            current4->next = newNode4;
            current4 = newNode4;
        }

        tempNode = tempNode->next;
    }





//---------------------------------------Swapping ----------------------------------------------------



    for (int i = 0; i < n-1; ++i)
    {
        struct node4 *cat = head4; // for traversing
        struct node4 *dog = NULL;

        for (int j = 0; j < n-i-1; ++j)
        {
            struct node4 *next_node = cat->next; // a b c d e f g h ( a, b) =b

            if (strcmp(cat->Gname, cat->next->Gname) > 0)

            {
                if (dog != NULL) //in first swapping dog carrying NULL
                {
                    dog->next = next_node;   // dog is carrying previous node
                }
                else
                {
                    head4 = next_node; // next node is current running node
                                       // head are becoming the lowest value
                                       //And that is for only single time
                }

                cat->next = next_node->next; //
                next_node->next = cat;
                cat = next_node;
            }

            dog = cat;
            cat = cat->next;
        }


    }




    struct node4 *tempNode4 = head4;
    printf("\n%-20s %-20s %-20s %-20s %-10s\n\n", "Book Name", " Book Id", "Genre Name", "Book Quantity", "Author Name");


    while (tempNode4 != NULL)
    {
        printf("-> %-20s %-20d %-20s %-20d %-10s\n", tempNode4->name, tempNode4->id, tempNode4->Gname, tempNode4->qty, tempNode4->author);
        tempNode4 = tempNode4->next;
    }

    getch();


}



//-----------------------------------------Node create function----------------------------------------------------------
struct node *create()
{

    char s1[20];
    char s2[20];
    char s3[20];
    struct node *ifti = (struct node *)malloc(sizeof(struct node));

    printf("\n Book Name : ");

    fflush(stdin);
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    strcpy(ifti->name, s1);

    printf("Genre Type : ");

    fflush(stdin);
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    strcpy(ifti->Gname, s2);

    printf("Author Name  : ");

    fflush(stdin);
    fgets(s3, sizeof(s3), stdin);
    s3[strcspn(s3, "\n")] = '\0';
    strcpy(ifti->author, s3);

    printf("Quantity  : ");
    scanf("%d", &ifti->qty);

    int p;

    // scanf("%d",&ifti->id);

    champ = champ + 5;

    ifti->id = champ;

    printf("Auto generated Unique ID : %d\n\n", champ);

    ifti->next = NULL;

    return ifti;
    getch();
}

//-----------------------------Only for Search another copy Linked list------------------------------------------
//This linked list are not using in this entire code  ------------------------------------------------------
struct cnode
{

    char name[20];
    char Gname[20];
    char author[20];
    int id;
    int qty;
    struct cnode *next;
};

//--------------------------------------Add book---------------------------------------------
void addbook()
{
    system("cls");

    printf("\nHow many types of Book do you want add : ");
    int c;
    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {

        temp = create();
        if (head == NULL)
        {
            current = head = temp;
        }
        else
        {
            current->next = temp;
            current = temp;
        }
        printf("\n");
    }

    printf("\n Added successfully...");
    getch();
}

//--------------------------------------Display function-------------------------------------------------
int display()
{
    system("cls");
    ptr = head;

    if (ptr == NULL)
    {
        printf("\n\n\n\t\t\t Library is out of Book ..\a");
        getch();
        return 0;
    }
    printf("\nAll Available books in this Library \n\n ");
    printf(" \n  %-20s %-20s %-20s %-20s %-10s \n\n", "Book Name", " Book Id", "Genre Name", "Book Quantity", "Author Name");
    int sum = 0;

    while (ptr != NULL)
    {
        if (ptr->qty > 0)
        {

            printf("-> %-20s %-20d %-20s %-20d %-10s \n", ptr->name, ptr->id, ptr->Gname, ptr->qty, ptr->author);
            // printf("-> %s     %d   %s        %d    %s \n",ptr->name,ptr->id,    ptr->Gname,   ptr->qty, ptr->author);
            sum += ptr->qty;
        }

        ptr = ptr->next;
    }

    printf("\n\n\nTotal Available book's are : %d ", sum);

    getch();
}










int iftikhar = 1;
struct node2 *lolita, *vai, *lolita_head, *chimpuk;
int val = 100;
//-----------------------------------------------Get Membership function---------------------------------

void membership()
{
    system("cls");
    printf("\n Membership portal\n\n");
    lolita = (struct node2 *)malloc(sizeof(struct node2));

    char s1[20];
    printf("Enter your name : ");

    fflush(stdin);
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    strcpy(lolita->name, s1);

    printf("Enter your ID : ");
    scanf("%d", &lolita->id);

    val = val + 10;

    lolita->code = val;
    lolita->next = NULL;
    if (iftikhar == 1)
    {
        lolita_head = lolita;
    }
    else
    {

        vai->next = lolita;
    }
    vai = lolita;

    printf("Successfully You got the Membership code : %d ", val);
    iftikhar++;
    getch();
}

//------------------------------------------Show all Member function -----------------------------------
void member()
{
    system("cls");
    chimpuk = lolita_head;
    if (chimpuk == NULL)
    {
        printf("\n\n\n\t\t\tEmpty...!!\a");
        getch();
        return;
    }

    printf(" \n  %-20s %-20s %-20s\n\n", "Student Name", " Student Id", "Membership Code");

    while (chimpuk != NULL)
    {

        printf("-> %-20s %-20d %-20d \n", chimpuk->name, chimpuk->id, chimpuk->code);

        chimpuk = chimpuk->next;
    }

    getch();
}

//------------------------------------------------------------------------------------

struct node3 *papu, *cat, *issue_head, *messi, *ptr3;

int f = 1;

//---------------------------------------------------Book Issue function---------------------------

void issue()

{
    system("cls");

    if (!display())
    {

        return;
    }

    struct node3 *papu;
    papu = (struct node3 *)malloc(sizeof(struct node3));

    printf("\n\nEnter your membership ID : ");
    int id2;
    scanf("%d", &id2);

    if (check2(papu, id2) == 0) // calling check function to match student ID with reserving information
    {
        printf("Sorry !! Be a member first \a");
        getch();
        return;
    }
    papu->code = id2;

    printf("Enter Desire Book ID : ");
    int id;
    scanf("%d", &id);

    if (!check(papu, id))
    {
        printf("Sorry !! This book is not available \a");
        getch();
        return;
    }
    papu->bookid = id;

    if (f == 1)
    {

        messi = papu;
    }
    else
    {

        cat->next = papu;
    }
    cat = papu;

    f++;
    papu->next = NULL;

    printf("\n Congrats !! you got the book. ");
    getch();
}


//-----------------------------------------------Return function-------- ------------------------------

void deposit()
{
    struct node *root = head;
    struct node3 *mew, *tini = messi;
    system("cls");
    if (tini == NULL)
    {
        printf("\n\n\n The Book has not been issued yet..!\a");
        getch();
        return;
    }

    printf("Enter your Membership ID : ");
    int cc;
    scanf("%d", &cc);

    printf("Enter your BOOk Id : ");
    int tt;
    scanf("%d", &tt);

    if (tini->code == cc && tini->bookid == tt)
    {
        f = 1;
        messi = tini->next;
        printf("Successfully Returned ..!!");
        getch();

        while (root != NULL)
        {
            if (root->id == tt)
            {
                root->qty = (root->qty) + 1;
                break;
            }
            root = root->next;
        }
        return;
    }

    mew = tini;

    while (tini != NULL)
    {

        if (tini->code == cc && tini->bookid == tt)
        {
            mew->next = tini->next;
            printf("Successfully Returned ..!!");
            getch();
            while (root != NULL)
            {
                if (root->id == tt)
                {
                    root->qty = (root->qty) + 1;
                    break;
                }
                root = root->next;
            }

            return;
        }

        mew = tini;
        tini = tini->next;
    }

    printf("\nSorry, you have entered wrong ID !!\a");

    getch();
}






//---------------------------------Check function to match the book name with reserve book ----------------------------------

int check2(struct node3 *fox, int val)
{
    struct node2 *a;
    a = lolita_head;

    while (a != NULL)
    {

        if (a->code == val)
        {
            strcpy(fox->name, a->name);

            fox->id = a->id;

            return 1;
        }

        a = a->next;
    }
    return 0;
}

int check(struct node3 *fox, int val)
{
    struct node *a;
    a = head;

    while (a != NULL)
    {

        if (a->id == val && a->qty > 0)
        {
            a->qty = (a->qty) - 1;
            strcpy(fox->bookname, a->name);

            //  fox->name = a->name;
            fox->bookid = a->id;

            return 1;
        }
        a = a->next;
    }
    return 0;
}



//----------------------------------------------Search Function-----------------------------------

void search()
{
    system("cls");
    struct node *bahubali;
    bahubali = head;
    if (head == NULL)
    {
        printf("No Book are available here...\a");

        getch();
        return;
    }
    else
    {
        printf("Enter your Desire Book Name : ");
        char nm[100];
        getchar();

        fgets(nm, sizeof(nm), stdin);
        nm[strcspn(nm, "\n")] = '\0';

        int a = 0;

        while (bahubali != NULL)
        {

            if (!(strcmp(nm, bahubali->name)))
            {
                a = 1;
                printf("Found the Book \n");

                printf(" \n  %-20s %-20s %-20s %-20s %-10s \n\n", "Book Name", " Book Id", "Genre Name", "Book Quantity", "Author Name");
                printf("-> %-20s %-20d %-20s %-20d %-10s \n", bahubali->name, bahubali->id, bahubali->Gname, bahubali->qty, bahubali->author);
                // pr
                getch();
                return;
            }
            bahubali = bahubali->next;
        }

        if (a == 0)
        {

            printf("Book is not available in this Library ..\a");

            getch();
            return;
        }
    }
}






//--------------------------------------------------Issue history Function-------------------
void issued()
{
    system("cls");
    ptr3 = messi;

    if (ptr3 == NULL)
    {
        printf("\n\n\n\t\t\tBook has not issued yet..!\a");
        getch();
        return;
    }

    printf("\n %-20s %-20s %-20s %-20s %-20s %-20s\n\n", "S.No", "Student Name", " Student Id", "Membership Code", "Book Name", "Book ID");

    int i = 1;
    while (ptr3 != NULL)
    {

        printf("-> %-20d %-20s %-20d %-20d %-20s %-20d \n", i, ptr3->name, ptr3->id, ptr3->code, ptr3->bookname, ptr3->bookid);

        i++;

        ptr3 = ptr3->next;
    }
    printf("\n\nToday's Book is issued by : ");

    for (int i = 0; ownername[i] != '\0'; i++)
    {
        printf("%c", ownername[i]);
    }
    printf("\nDate : %d/ %d/ %d", dt, mn, yr);
    getch();
}



//--------------------------------------Dashboard Function------------------------------------------------------

void dashboard()

{
    while (1)
    {

        system("cls");
        if (papa == 1)
        {
            char s[10000] = "Library Management System.\n\n \n\t\t\t\t\t1.Add Book.\n \t\t\t\t\t2.Show All book.\n \t\t\t\t\t3.Get Membership.\n \t\t\t\t\t4.Show all Member.\n \t\t\t\t\t5.Issue Book.\n \t\t\t\t\t6.Issued Book.\n \t\t\t\t\t7.Return Book.\n \t\t\t\t\t8.Search Book.\n \t\t\t\t\t9.Check By Genre.\n \t\t\t\t\t10.Terminate.\n\n\t\t\t\t\tChoose :";

            printf(" \n\n\t\t\t\t\t");
            for (int i = 0; s[i] != '\0'; i++)
            {
                printf("%c", s[i]);
                usleep(50000);
            }
            papa = 0;
        }
        else
        {
            printf(" \n\n\t\t\t\t\t");
            printf("Library Management System.\n\n \n\t\t\t\t\t1.Add Book.\n \t\t\t\t\t2.Show All book.\n \t\t\t\t\t3.Get Membership.\n \t\t\t\t\t4.Show all Member.\n \t\t\t\t\t5.Issue Book.\n \t\t\t\t\t6.Issued Book.\n \t\t\t\t\t7.Return Book.\n \t\t\t\t\t8.Search Book.\n \t\t\t\t\t9.Check By Genre.\n \t\t\t\t\t10.Terminate.\n\n\t\t\t\t\tChoose :");
        }


        int ch;
        scanf("%d", &ch);

        switch (ch)
        {
        case 01:
            addbook();
            break;
        case 02:
            display();
            break;
        case 03:
            membership();
            break;
        case 04:
            member();
            break;
        case 05:
            issue();
            break;
        case 06:
            issued();
            break;

        case 07:
            deposit();
            break;
        case 8:
            search();
            break;
        case 9:
            genre();
            break;
        case 10:
            finish();
            break;

        default:
            printf("\n\n\t\t\t\t\tInvalid choice ...\a");
            getch();
            break;
        }
    }

    getch();
}


