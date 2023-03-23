#include <bits/stdc++.h>
using namespace std;
void login();
void registration();
void forgot();

int main()
{

    int choice;
    cout << "\t\t\t________________________________________________________________\n\n";
    cout << "\t\t\t---------------------WELCOME TO THIS PAGE-----------------------\n";
    cout << "\t\t\t________________________________________________________________\n\n";

    cout << "\t\t\t\t\t| PRESS 1 TO LOGIN                |\n";
    cout << "\t\t\t\t\t| PRESS 2 TO REGISTER             |\n";
    cout << "\t\t\t\t\t| PRESS 3 TO FORGOT YOUR PASSWORD |\n";
    cout << "\t\t\t\t\t| PRESS 4 TO EXIT                 |\n";
    cout << "\t\t\t________________________________________________________________\n";
    cout << "ENTER YOUR CHOICE : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        login();
        break;
    case 2:
        registration();
        break;
    case 3:
        forgot();
        break;
    case 4:
        cout << "\t\t\t\t\t| THANKYOU !! |\n";
        exit(0);

        break;

    default:
        cout << "\t\t\t\t\t| PLEASE SELECT FROM THE GIVEN MENU |\n";
        break;
    }
    return 0;
}
void login()
{
    int count;
    system("CLS");
    string u_id, pass, id, password;
    cout << "\t\t\t________________________________________________________________\n\n";
    cout << "\t\t\t---------------------WELCOME TO LOGIN PAGE----------------------\n";
    cout << "\t\t\t________________________________________________________________\n\n";

    cout << "\t| ENTER YOUR USER_ID  : | ";
    cin >> u_id;
    cout << "\t| ENTER YOUR PASSWORD : | ";
    cin >> password;
    ifstream input("recode");
    while (input >> id >> pass)
    {
        if (id == u_id && pass == password)
        {
            count = 4;
            system("CLS");
            input.close();
        }
        if (count == 4)
        {
            cout << "\t\t\t________________________________________________________________\n\n";
            cout << "\t\t\t                   LOGIN SUCCESSFULL !!!                        \n";
            cout << "\t\t\t________________________________________________________________\n\n";
            main();
        }
        else
        {
            cout << "\t\t\t________________________________________________________________\n\n";
            cout << "\t\t\t      WRONG PASSWORD ,PLEASE CHECK YOUR ID AND PASSWORD         \n";
            cout << "\t\t\t________________________________________________________________\n\n";
            main();
        }
    }
}
void registration()
{
    system("CLS");
    string ru_id, rpass, rid, rpassword; // r = registration
    cout << "\t\t\t_______________________________________________________________________\n\n";
    cout << "\t\t\t---------------------WELCOME TO REGISTRATION PAGE----------------------\n";
    cout << "\t\t\t_______________________________________________________________________\n\n";

    cout << "\t| ENTER YOUR USER_ID  : | ";
    cin >> ru_id;
    cout << "\t| ENTER YOUR PASSWORD : | ";
    cin >> rpassword;
    ofstream f1("recode", ios::app);
    f1 << ru_id << " " << rpassword << endl;
    system("CLS");
    cout << "\t\t\t________________________________________________________________\n\n";
    cout << "\t\t\t                 REGISTRATION SUCCESSFULL !!!                    \n";
    cout << "\t\t\t________________________________________________________________\n\n";

    main();
}
void forgot()
{
    int count;
    system("CLS");
    cout << "\t\t\t_________________________________________________________________________\n\n";
    cout << "\t\t\t--------------------WELCOME TO FORGOT PASSWORD  PAGE---------------------\n";
    cout << "\t\t\t_________________________________________________________________________\n\n";
    string su_id, sid, spass;
    cout << "\t\t\tENTER THE USER ID YOU REMEMBERED : ";
    cin >> su_id;
    ifstream f2("recode");
    while (f2 >> sid >> spass)
    {
        if (sid == su_id)
        {
            count = 1;
        }
        f2.close();
        if (count == 1)
        {
            cout << "\t\t\t________________________________________________________________\n\n";
            cout << "\t\t\t                 YOUR ACCOUNT IS FOUNDED !!!                    \n";
            cout << "\t\t\t________________________________________________________________\n\n";

            cout << "|  YOUR PASSWORD IS :   " << spass << "  |";
            main();
        }
        else
        {
            cout << "\t\t\t________________________________________________________________\n\n";
            cout << "\t\t\t               WRONG USERD ID ,ACCOUNT NOT FOUND !!             \n";
            cout << "\t\t\t________________________________________________________________\n\n";

            main();
        }
    }
}