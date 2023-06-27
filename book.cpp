#include <iostream>
#include <string>
#define ll long long
using namespace std;
struct book
{
    string name;
    int id, phonenumber, nbo = 0;

} cust[100];
struct customer
{
    string name;
    string category;
    int id, price, saveposition;

} bo[100];

void intro()
{
    cout << "              ********Hallo to our book services*******\n";
    cout << "  1.book service             2.customers service                     3.exit\n";
    cout << "Enter your choice\n";
}
void bookservices()
{
    static int c = 0;
    static int k = 0;
    static int e = 0;
    while (true)
    {
        cout << "  1.add book          2.display book                     3.search book\n";
        cout << "  4.update book information                 5.back\n";
        int y;
        cin >> y;
        if (y == 1)
        {
            char check = 'y';
            while (check == 'y')
            {
                cout << "Enter book name\n";
                cin >> bo[c].name;
                cout << "Enter book id\n";
                cin >> bo[c].id;
                cout << "Enter book price\n";
                cin >> bo[c].price;
                cout << "Enter book category\n";
                cin >> bo[c].category;
                cout << "Enter book save position you want\n";
                cin >> bo[c].saveposition;
                c++;
                cout << "Do you want to add another book?(y/n)\n";
                cin >> check;
            }
        }
        else if (y == 2)
        {
            for (int i = 0; i < c; i++)
            {
                cout << "book name : " << bo[i].name << endl;
                cout << "book id : " << bo[i].id << endl;
                cout << "book price : " << bo[i].price << endl;
                cout << "book category : " << bo[i].category << endl;
                cout << "book saveposition : " << bo[i].saveposition << endl;
                cout << "          /**************************************************/" << '\n';
            }
            while (true)
            {
                
                cout << "Do you want to borrow abook ?     (y/n)\n";
                char check;
                cin >> check;
                if (check == 'y')
                {
                    int yy = 0;
                    cout << "Enter book name\n";
                    string booknamec;
                    cin >> booknamec;
                    for (int i = 0; i < c; i++)
                    {
                        if (booknamec == bo[i].name)
                        {
                            cout << "ok book founded\n";

                            yy = 1;
                        }
                    }
                    if (yy == 0)
                        cout << "book not found\n";
                    else
                    {
                        int cf = 0;
                        cout << "please enter your id\n";
                        int id1;
                        cin >> id1;
                        for (int i = 0; i < c; i++)
                        {
                            if (cust[i].id == id1)
                            {

                                if (cust[i].nbo == 5)
                                {
                                    cout << "you have over your limit in borrow book\n";
                                   
                                }
                                else
                                {
                                    cout << "ok, it's done successfully, enjoy!" << '\n';
                                }
                                cf = 1;
                                cust[i].nbo++;
                            }
                        }
                        if (cf == 0)
                        {
                            cout << "sorry, but your id not in our system,please go to home screen and join us to access to our services!" << '\n';
                        }
                    }
                }
          
                else
                    break;
            }
        }
        else if (y == 3)
        {
            while (true)
            {
                int h = 0;
                cout << " Enter the book title you want\n";
                string s;
                cin >> s;
                for (int i = 0; i < c; i++)
                {
                    if (s == bo[i].name)
                    {
                        cout << "book name : " << bo[i].name << endl;
                        cout << "book id : " << bo[i].id << endl;
                        cout << "book price : " << bo[i].price << endl;
                        cout << "book category : " << bo[i].category << endl;
                        cout << "book saveposition : " << bo[i].saveposition << endl;
                        cout << "          /**************************************************/" << '\n';
                        h = 1;
                    }
                }
                if (h == 0)
                {
                    cout << " Not found this book\n";
                }
                cout << "Do you want to search  for another book?  (y/n) " << endl;
                char check;
                cin >> check;
                if (check == 'n')
                {
                    break;
                }
            }
        }
        else if (y == 4)
        {
            cout << "Enter the name of the book you want to upadte it\n";
            string s;
            cin >> s;
            int h = 0;
            int ch;
            int bev = 0;
            for (int i = 0; i < c; i++)
            {
                if (s == bo[i].name)
                {
                    cout << "book name : " << bo[i].name << endl;
                    cout << "book id : " << bo[i].id << endl;
                    cout << "book price : " << bo[i].price << endl;
                    cout << "book category : " << bo[i].category << endl;
                    cout << "book saveposition : " << bo[i].saveposition << endl;
                    cout << "          /**************************************************/" << '\n';
                    h = 1;
                    bev = i;
                }
            }
            if (h == 0)
            {
                cout << " Not found this book\n";
            }
            else
            {
                while (true)
                {
                    cout << "what the information about book you want to update?\n";
                    cout << "1.name\n";
                    cout << "2.id\n";
                    cout << "3.price\n";
                    cout << "4.category\n";
                    cout << "5.saveposition\n";
                    cin >> ch;
                    if (ch == 1)
                    {
                        string ne;
                        cout << "Enter the new name of the book\n"
                             << endl;
                        cin >> ne;
                        bo[bev].name = ne;
                    }
                    else if (ch == 2)
                    {
                        int ni;
                        cout << "Enter the new id of the book\n"
                             << endl;
                        cin >> ni;
                        bo[bev].id = ni;
                    }
                    else if (ch == 3)
                    {
                        int pi;
                        cout << "Enter the new price of the book\n"
                             << endl;
                        cin >> pi;
                        bo[bev].price = pi;
                    }
                    else if (ch == 4)
                    {
                        string pc;
                        cout << "Enter the new category of the book\n"
                             << endl;
                        cin >> pc;
                        bo[bev].category = pc;
                    }
                    else if (ch == 5)
                    {
                        int po;
                        cout << "Enter the new position of the book\n"
                             << endl;
                        cin >> po;
                        bo[bev].saveposition = po;
                    }
                    cout << "Do you want to upadte another information?  (y/n) " << endl;
                    char check;
                    cin >> check;
                    if (check == 'n')
                    {
                        break;
                    }
                }
            }
        }
        else if (y == 5)
        {
            break;
        }
    }
}
void customers_services()
{
    static int c = 0;
    while (true)
    {
        cout << "  1.add new customer          2.display customer info                     3.search customer\n";
        cout << "  4.update customer info                 5.back\n";
        int y;
        cin >> y;
        if (y == 1)
        {
            char check = 'y';
            while (check == 'y')
            {
                cout << "Enter customer name\n";
                cin >> cust[c].name;
                cout << "Enter customer id\n";
                cin >> cust[c].id;
                cout << "Enter customer phone number\n";
                cin >> cust[c].phonenumber;
                c++;
                cout << "Do you want to add another customer?(y/n)\n";
                cin >> check;
            }
        }
        else if (y == 2)
        {
            for (int i = 0; i < c; i++)
            {
                cout << "customer name : " << cust[i].name << endl;
                cout << "customer id : " << cust[i].id << endl;
                cout << "customer phone number : " << cust[i].phonenumber << endl;
                cout << "          /**************************************************/" << '\n';
            }
        }
        else if (y == 3)
        {
            while (true)
            {
                int h = 0;
                cout << " Enter the customer name you search\n";
                string s;
                cin >> s;
                for (int i = 0; i < c; i++)
                {
                    if (s == cust[i].name)
                    {
                        cout << "customer name : " << cust[i].name << endl;
                        cout << "customer id : " << cust[i].id << endl;
                        cout << "customer phone number : " << cust[i].phonenumber << endl;
                        cout << "          /**************************************************/" << '\n';
                        h = 1;
                    }
                }
                if (h == 0)
                {
                    cout << " Not found this customer\n";
                }

                cout << "Do you want to search  for another customer?  (y/n) " << endl;
                char check;
                cin >> check;
                if (check == 'n')
                {
                    break;
                }
            }
        }
        else if (y == 4)
        {
            cout << "Enter the name of the customer you want to upadte his/her info\n";
            string s;
            cin >> s;
            int h = 0;
            int ch;
            int bev = 0;
            for (int i = 0; i < c; i++)
            {
                if (s == cust[i].name)
                {
                    cout << "customer name : " << cust[i].name << endl;
                    cout << "customer id : " << cust[i].id << endl;
                    cout << "customer phone number : " << cust[i].phonenumber << endl;
                    cout << "          /**************************************************/" << '\n';
                    h = 1;
                    bev = i;
                }
            }
            if (h == 0)
            {
                cout << " Not found that customer\n";
            }
            else
            {
                while (true)
                {
                    cout << "what the information about customer you want to update?\n";
                    cout << "1.name\n";
                    cout << "2.id\n";
                    cout << "3.phone number\n";
                    cin >> ch;
                    if (ch == 1)
                    {
                        string ne;
                        cout << "Enter the new name of the customer\n"
                             << endl;
                        cin >> ne;
                        cust[bev].name = ne;
                    }
                    else if (ch == 2)
                    {
                        int ni;
                        cout << "Enter the new id of the customer\n"
                             << endl;
                        cin >> ni;
                        cust[bev].id = ni;
                    }
                    else if (ch == 3)
                    {
                        int pi;
                        cout << "Enter the new phone number of the customer\n"
                             << endl;
                        cin >> pi;
                        cust[bev].phonenumber = pi;
                    }
                    cout << "Do you want to upadte another information?  (y/n) " << endl;
                    char check;
                    cin >> check;
                    if (check == 'n')
                    {
                        break;
                    }
                }
            }
        }

        else if (y == 5)
        {
            break;
        }
    }
}
/***********************************Bavley Hesham***************************************/
int main()
{

    while (true)
    {
        intro();
        int x, y = 0;
        cin >> x;
        if (x == 3)
        {
            cout << "                 happy to see you.                  " << endl;
            return 0;
        }
        else
        {
            if (x == 1)
            {
                cout << "                ********book service***********\n";
                bookservices();
            }
            else if (x == 2)
            {
                cout << "                ********customers service***********\n";
                customers_services();
            }
        }
    }

    return 0;
}