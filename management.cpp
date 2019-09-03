#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;



void home();         //home page
void password();        //admin password__rabby
void user();     //user or student part
void admin_login();    //***admin part
void add_book();
void adminsee_csebooks();
void add_cse_book();   // cse book
void see_csebooks();     // cse book
void Exit();        //for exit
void construction();
void admin_construction();


/*class cse_books     //creating class
{
    string book_code;
    int book_number;
public:
    void
};*/



int main()
{
    home();
    return 0;
}




void home()
{
    system("color 3E");
    system("cls");
    int option;
    cout<<"\t\t\t##BUBT Library##"<<endl<<endl<<endl;

    cout<<"\t\t\t1. Admin login"<<endl;
    cout<<"\t\t\t2. User login"<<endl;
    cout<<"\t\t\t3. Exit"<<endl<<endl;
    cout<<"\t\t\tChoice your option:: ";
    cin>>option;

    //system("cls");

    switch(option)
    {
    case 1:
        password();
        break;
    case 2:
        user();
        break;
    case 3:
        Exit();
        break;
    default:
        home();
        break;
    }
}




void password()
{
    system("color 0C");
    system("cls");
    string pass;
    cout<<"\n\t\t\tPassword: ";
    cin>>pass;

    if (pass=="rabby")
    {
        system("color 0A");
        system("cls");
        cout<<"\n\t\t\tWelcome password matched."<<endl<<endl;
        cout<<"\t\t\tPress any key to continue........";
        getch();
        admin_login();

    }
    else            //re-enter password
    {
        system("cls");
        system("color 0C");
        cout<<"\n\t\t\tWrong password!Enter your password again."<<endl<<endl;
        cout<<"\t\t\t1. Re-enter your password"<<endl;
        cout<<"\t\t\t2. Back"<<endl;
        cout<<"\t\t\t3. Exit"<<endl;

        int re_enter;
        cout<<"\n\t\t\tEnter your action: ";
        cin>>re_enter;
        system("cls");
        switch(re_enter)
        {
        case 1:
            password();
            break;
        case 2:
            home();
            break;
        case 3:
             Exit();
             break;
        default:
            home();
            break;
        }

    }
}


void user()
{
    system("color 30");
    system("cls");
    cout<<"\n\t\t\tChose your department"<<endl<<endl<<endl;

    cout<<"\t\t\t1. CSE"<<endl;
    cout<<"\t\t\t2. EEE"<<endl;
    cout<<"\t\t\t3. BBA"<<endl;
    cout<<"\t\t\t4. LAW"<<endl;
    cout<<"\t\t\t5. Textile"<<endl;
    cout<<"\t\t\t6. English"<<endl;
    cout<<"\t\t\t7. Economics"<<endl;
    cout<<"\t\t\t8. Mathematics"<<endl;
    cout<<"\n\n\t\t\t9. Main menu";
    cout<<"\t\t10. Back"<<endl;
    cout<<"\t\t\t11. Exit"<<endl;

    int option;

    cout<<endl<<"\t\t\t\tEnter your choose: ";
    cin>>option;

    switch(option)
    {
   case 1:
       see_csebooks();
       break;
   case 2:
       construction();
       break;
   case 3:
       construction();
       break;
   case 4:
       construction();
       break;
   case 5:
       construction();
       break;
   case 6:
       construction();
       break;
   case 7:
       construction();
       break;
   case 8:
       construction();
       break;
   case 9:
       home();
       break;
   case 10:
       home();
       break;
   case 11:
        Exit();
        break;
    default:
        user();
        break;
    }

}


void admin_login()
{
    system("color 30");
    system("cls");

    cout<<"\n\t\t\tOptions"<<endl<<"\t\t\t_______________"<<endl;
    cout<<"\t\t\t1. Add Books."<<endl;
    cout<<"\t\t\t2. View Books"<<endl<<"\t\t\t_______________"<<endl;
    cout<<"\n\t\t\t3. Main menu"<<endl;
    cout<<"\t\t\t4. Exit."<<endl;
    cout<<"\n\t\t\tEnter your choose:: ";
    int option;
    cin>>option;

    switch(option)
    {
    case 1:
        add_book();
    case 2:
        adminsee_csebooks();
    case 3:
        main();
    case 4:
         Exit();
    default:
        admin_login();
    }

}





void add_book()
{
    system("color 30");
    system("cls");
    int op;
    cout<<"\t\t\tChose Dept."<<endl<<"\t\t\t_______________________________"<<endl;
    cout<<"\t\t\t1. CSE"<<endl;
    cout<<"\t\t\t2. EEE"<<endl;
    cout<<"\t\t\t3. BBA"<<endl;
    cout<<"\t\t\t4. LAW"<<endl;
    cout<<"\t\t\t5. Textile"<<endl;
    cout<<"\t\t\t6. English"<<endl;
    cout<<"\t\t\t7. Economics"<<endl;
    cout<<"\t\t\t8. Mathematics"<<endl;
    cout<<"\n\n\t\t\t9. Main menu";
    cout<<"\t\t10. Back"<<endl;
    cout<<"\t\t\t11. Exit"<<endl;
    cout<<endl<<endl<<"\t\t\tChose your option :: ";
    cin>>op;

    switch(op)
    {
    case 1:
       add_cse_book();
       break;
   case 2:
       admin_construction();
       break;
   case 3:
       admin_construction();
       break;
   case 4:
       admin_construction();
       break;
   case 5:
       admin_construction();
       break;
   case 6:
       admin_construction();
       break;
   case 7:
       admin_construction();
       break;
   case 8:
       admin_construction();
       break;
   case 9:
       home();
       break;
   case 10:
      admin_login();
       break;
   case 11:
        Exit();
        break;
    default:
        user();
        break;
    }
}

void add_cse_book()
{
    system("cls");
    string data;
    ofstream addcse;
    addcse.open("cse.txt",ios::app);
    cout<<"\n\t\t\t## ADD CSE FACULTY BOOKS ##"<<endl<<"_________________________________________________________________________"<<endl;

    cout<<"\t\t\tEnter Book's Code :: ";
    cin>>data;
    addcse<<data<<endl;
    cout<<"\t\t\tEnter Book's name :: ";
    cin>>data;
    addcse<<data<<endl;
    cout<<"\t\t\tEnter Author's name :: ";
    cin>>data;
    addcse<<data<<endl;
    cout<<"\t\t\tEnter Book's price :: ";
    cin>>data;
    addcse<<data<<endl;

    char x;
    cout<<endl<<endl<<"\t\t\tAdd more Books?(Y/N)?  :: ";
    cin>>x;

    if(x=='y' || x=='Y')
        add_cse_book();
    else
        admin_login();
}


void see_csebooks()
{
    system("color 3F");
    system("cls");
    cout<<"\n\t\t\t    ## CSE FACULTY BOOKS ##"<<endl<<"\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"\n\n   Book's code\t\tBook's name\t\tAuthor name\t\tPrice(tk/-)"<<endl;
    cout<<"___________________________________________________________________________________________\n";
    ifstream seecse;
    seecse.open("cse.txt");
    string data;
    while(!seecse.eof())
    {
        cout<<"  ";
        seecse>>data;
        cout<<data<<"\t";
        seecse>>data;
        cout<<data<<"\t\t";
        seecse>>data;
        cout<<data<<"\t\t";
        seecse>>data;
        cout<<data<<"\n";
    }
    cout<<"\n\n\n Enter any key for leave this page.................";
    getch();
    user();

}



void adminsee_csebooks()
{
    system("color 3F");
    system("cls");
    cout<<"\n\t\t\t    ## CSE FACULTY BOOKS ##"<<endl<<"\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"\n\n   Book's code\t\tBook's name\t\tAuthor name\t\tPrice(tk/-)"<<endl;
    cout<<"___________________________________________________________________________________________\n";
    ifstream seecse;
    seecse.open("cse.txt");
    string data;
    while(!seecse.eof())
    {
        cout<<"  ";
        seecse>>data;
        cout<<data<<"\t";
        seecse>>data;
        cout<<data<<"\t\t";
        seecse>>data;
        cout<<data<<"\t\t";
        seecse>>data;
        cout<<data<<"\n";
    }
    cout<<"\n\n\n Enter any key for leave this page and continue.................";
    getch();
    admin_login();
}



void Exit()
{
    system("color 0C");
    char yn;
    system("cls");
        cout<<"\n\t\t\tDo you want to exit?(Y/N): ";
        cin>>yn;


        if(yn=='y' || yn=='Y')
        {
            system("color F9");
            system("cls");
            cout<<"\n\t\t\tThank you for using."<<endl<<endl;
            cout<<"\t\t\tEnter any key for exit.........";
            getch();
            exit(0);
        }
        else if (yn=='n'|| yn=='N')
            home();

}


void admin_construction()
{
    system("color 30");
    system("cls");
    cout<<"\n\t\t\tSorry! System is under construction.\n";
    cout<<"\t\t\tPress any key to continue..............";
    getch();
    admin_login();
}


void construction()
{
    system("color 0C");
    system("cls");
    cout<<"\n\t\t\tSorry! System is under construction.\n";
    cout<<"\t\t\tPress any key to continue................";
    getch();
    user();
}
