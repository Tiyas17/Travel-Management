#include <bits/stdc++.h>
#include <fstream>
#include <windows.h>

using namespace std;

void menu();

class ManageMenu//note both password and username are admin
{
protected:
    string userName; //hide admin name
    string passWord;
    string pass="admin";
    string usname="admin";

 public:

    //virtual void menu(){}

    ManageMenu()
    {
        system("color 0A"); 
        cout << "\n\n\n\n\n\n\n\n\n\t  Enter Your Name to Continue as an Admin: ";
        cin >> userName;
        int i=3;
        while(userName.compare(usname)!=0)
        {
            if(i==1){
                cout<<"\n \t \t Stop!!\n";
                return;
            }
            if(userName.compare(usname)!=0)
            {
                cout<<"\t  Wrong username...Please enter correctly.\n";
                cout<<"\t  Only "<<i-1<<" chances are left\n";
                i--;
            }
            cout << "\t  Renter the username : ";
            cin >> userName;
        }
        cout << "\t  Enter the password : ";
        cin >> passWord;
        i=3;
        while(passWord.compare(pass)!=0)
        {
            if(i==1){
                cout<<"\n \t  \tStop!!\n";
                return;
            }
            if(passWord.compare(pass)!=0)
            {
                cout<<"\t  Wrong Password...Please enter correctly.\n";
                cout<<"\t  Only "<<i-1<<" chances are left\n";
                i--;
            }
             
            cout << "\t  Renter the password : ";
            cin >> passWord;
        }
        system("CLS");//clearing the screen as we need to enter the menu now
        menu(); //main function call
    }

    ~ManageMenu(){} //destructor
};
class Customers
{
    public:
    string name="";
    string gender,adress="";
    int age;
    long long mobno;
    static int cusID;
    char c[999];
    
    void getdetails()
    {
        ofstream out("old_customers.txt");//opening the file old_customers.txt to write on it
    {
        cout<<"Enter Customer ID :";
        cin>>cusID;
        cout<<"Enter Your Name :";
        cin>>name;
        cout<<"Enter Your Age :";
        cin>>age;
        cout<<"Enter Your MobNo :";
        cin>>mobno;
        cout<<"Enter Your Gender:";
        cin>>gender;
        cout<<"Enter Your Adress :";
        cin>>adress;
    }

    out << "Customers ID: "<<cusID<<"\nName: "<<name<<"\nAge: "<<age<<"\nMobile No.:  "<<mobno<<"\nGender: "<<gender<<"\nAddress: "<<adress; //writing on it
    out.close();    //closing it
    cout<<"\nSAVED!! \nNote : We have save all your details for future needs :)\n";
    }
    
    void showdetails()
    {
        ifstream in("old_customers.txt");
        {
            if(!in)
            {
                cout<<"ERROR 404\n";
            }
            while(!in.eof())
            {
                in.getline(c,999);
                cout<<c<<endl;
            }
            in.close();
        }
    }

};
class Cab
{
    public: 
    int cabchoice,km;
    float cost;
    static float lastcost;

    void cabDetails()
    {
        cout<<"We are one of the most trusty and first choice cab service around the globe\n";
        cout<<"----------------iCabs-----------------\n";
        cout<<"1. Rent for Standard Cabs : Rs 15 per KM\n";
        cout<<"2. Rent for Luxury Cabs : Rs 35 per KM\n";
        cout<<"3. Rent for Super Luxury Cabs : Rs 50 per KM\n\n";
        cout<<"Let us calculate the cost of your journey\n";
        cout<<"Enter which kind of cab your are interested in: ";
        cin>>cabchoice;
        cout<<"Enter kilometers you gonna travel: ";
        cin>>km;
        
        int hirecab;
        if(cabchoice==1)
        {
            cost=km*15;
            cout<<"Your cost for cab choice: "<<cabchoice<<" will be: "<<cost<<" IRC only"<<endl;
            cout<<"Press 1 to Hire this cab or Press 2 to select another cab: \n";
            cin>>hirecab;

            if(hirecab==1)
            {
                lastcost=cost;
                cout<<"You have successfully hired a standard cab"<<endl;
                cout<<"You can now goto menu and collect the receipt"<<endl;
                int go;
                cout<<"\nPress 1 to redirect to the main menu: ";
                cin>>go;
                system("CLS");
                if(go==1)
                {
                    menu();
                }
                else{
                    menu();
                }
            }
            else if(hirecab==2)
            {
                cabDetails();
            }
            else{
                cout<<"INVALID Input\nRedirecting to previous menu \nPlease wait!";
                Sleep(1100);
                system("CLS");
                cabDetails();
            }
        }
        else if(cabchoice==2)
        {
            cost=km*25;
            cout<<"Your cost for cab choice: "<<cabchoice<<"will be: "<<cost<<" IRC only"<<endl;
            cout<<"Press 1 to Hire this cab or Press 2 to select another cab\n";
            cin>>hirecab;

            if(hirecab==1)
            {
                lastcost=cost;
                cout<<"You have successfully hired a standard cab"<<endl;
                cout<<"You can now goto menu and collect the receipt"<<endl;
                int go;
                cout<<"\nPress 1 to redirect to the main menu: ";
                cin>>go;
                system("CLS");
                if(go==1)
                {
                    menu();
                }
                else{
                    menu();
                }
            }
            else if(hirecab==2)
            {
                cabDetails();
            }
            else{
                cout<<"INVALID Input\nRedirecting to previous menu \nPlease wait!";
                Sleep(1100);
                system("CLS");
                cabDetails();
            }
        }
        else if(cabchoice==3){
            cost=km*50;
            cout<<"Your cost for cab choice: "<<cabchoice<<"will be: "<<cost<<" IRC only"<<endl;
            cout<<"Press 1 to Hire this cab or Press 2 to select another cab \n";
            cin>>hirecab;

            if(hirecab==1)
            {
                lastcost=cost;
                cout<<"You have successfully hired a standard cab"<<endl;
                cout<<"You can now goto menu and collect the receipt"<<endl;
                int go;
                cout<<"\nPress 1 to redirect to the main menu: ";
                cin>>go;
                system("CLS");
                if(go==1)
                {
                    menu();
                }
                else{
                    menu();
                }
            }
            else if(hirecab==2)
            {
                cabDetails();
            }
            else{
                cout<<"INVALID Input\nRedirecting to previous menu \nPlease wait!";
                Sleep(1100);
                system("CLS");
                cabDetails();
            }
        }
        else{
            cout<<"INVALID Input\nRedirecting to Main menu \nPlease wait!";
            Sleep(1100);
            system("CLS");
            menu();
        }

    }
};
class Booking
{
    public:
    int choiceHotel,packChoice;
    static float hotelCost;

    void hotels()
    {
        string HotelNo[]= {"RP","LBS","PATEL","MMM"};
            cout<<endl;
            for(int i=0;i<4;i++)
            {
              cout<<i+1<<". Hotel"<<HotelNo[i]<<endl;
            }

    cout<<"\nCurrently our we have collaborated with these hotels only as they are one of best and we hope in Future we will have a lot more choices to you\n";
    cout<<"Press any key to back to the main menu or Enter the serial number of hotel you want to book: ";
    cin>>choiceHotel;
    system("CLS");

    if(choiceHotel==1)
    {
        cout<<"------Welcome to RP-----\n";
        cout<<"Packages offered by RP :\n";
        cout<<"1. Standard Pack for jus Rs 5000"<<endl;
        cout<<"2. Premium Pack for just Rs 10000"<<endl;
        cout<<"3. Luxury Pack for just Rs 20000"<<endl;
        
        cout<<"Press any key to back or Enter Package's number you want to book";
        cin>>packChoice;

        if(packChoice==1)
        {
            hotelCost=5000;
            cout<<"You have successfully booked standard pack at Hotel RP"<<endl;
            cout<<"Now you can goto the main menu and take the receipt\n";
        }
        else if(packChoice==2)
        {
            hotelCost=10000;
            cout<<"You have successfully booked Premium pack at Hotel RP"<<endl;
            cout<<"Now you can goto the main menu and take the receipt\n";
        }
        else if(packChoice==3)
        {
            hotelCost=20000;
            cout<<"You have successfully booked Luxury pack at Hotel RP"<<endl;
            cout<<"Now you can goto the main menu and take the receipt\n";
        }
        else{
            cout<<"Invalid input! Redirecting to previous menu please wait!"<<endl;
            Sleep(1100);//as after cout we are clearing the screen this function is used to screen the screen or delay the CLS a bit so that user can read the message
            system("CLS");
            hotels();    
        }

        int go;
        cout<<"\nPress 1 to redirect to the main menu: ";
        cin>>go;
        system("CLS");
        if(go==1)
        {
            menu();
        }
        else{
            menu();
        }
    }

    else if(choiceHotel==2)
    {
        cout<<"------Welcome to LBS-----\n";
        cout<<"Packages offered by LBS:\n";
        cout<<"1. Standard Pack for jus Rs 5000"<<endl;
        cout<<"2. Premium Pack for just Rs 10000"<<endl;
        cout<<"3. Luxury Pack for just Rs 20000"<<endl;
        
        cout<<"Press any key to back or Enter package number you want to book";
        cin>>packChoice;

        if(packChoice==1)
        {
            hotelCost=5000;
            cout<<"You have successfully booked standard pack at Hotel LBS"<<endl;
            cout<<"Now you can goto the main menu and take the receipt\n";
        }
        else if(packChoice==2)
        {
            hotelCost=10000;
            cout<<"You have successfully booked Premium pack at Hotel LBS"<<endl;
            cout<<"Now you can goto the main menu and take the receipt\n";
        }
        else if(packChoice==3)
        {
            hotelCost=20000;
            cout<<"You have successfully booked Luxury pack at Hotel LBS"<<endl;
            cout<<"Now you can goto the main menu and take the receipt\n";
        }
        else{
            cout<<"Invalid input! Redirecting to previous menu please wait!"<<endl;
            Sleep(1100);
            system("CLS");
            hotels();    
        }

        int go;
        cout<<"\nPress 1 to redirect to the main menu: ";
        cin>>go;
        system("CLS");
        if(go==1)
        {
            menu();
        }
        else{
            menu();
        }
    }

    else if(choiceHotel==3)
    {
        cout<<"------Welcome to PATEL-----\n";
        cout<<"Packages offered by PATEL:\n";
        cout<<"1. Standard Pack for jus Rs 5000"<<endl;
        cout<<"2. Premium Pack for just Rs 10000"<<endl;
        cout<<"3. Luxury Pack for just Rs 20000"<<endl;
        
        cout<<"Press any key to back or Enter package number you want to book";
        cin>>packChoice;

        if(packChoice==1)
        {
            hotelCost=5000;
            cout<<"You have successfully booked standard pack at Hotel PATEL"<<endl;
            cout<<"Now you can goto the main menu and take the receipt\n";
        }
        else if(packChoice==2)
        {
            hotelCost=10000;
            cout<<"You have successfully booked Premium pack at Hotel PATEL"<<endl;
            cout<<"Now you can goto the main menu and take the receipt\n";
        }
        else if(packChoice==3)
        {
            hotelCost=20000;
            cout<<"You have successfully booked Luxury pack at Hotel PATEL"<<endl;
            cout<<"Now you can goto the main menu and take the receipt\n";
        }
        else{
            cout<<"Invalid input! Redirecting to previous menu please wait!"<<endl;
            Sleep(1100);
            system("CLS");
            hotels();    
        }

        int go;
        cout<<"\nPress 1 to redirect to the main menu: ";
        cin>>go;
        system("CLS");
        if(go==1)
        {
            menu();
        }
        else{
            menu();
        }
    }

    else if(choiceHotel==4)
    {
        cout<<"------Welcome to MMM-----\n";
        cout<<"Packages offered by MMM\n";
        cout<<"1. Standard Pack for jus Rs 5000"<<endl;
        cout<<"2. Premium Pack for just Rs 10000"<<endl;
        cout<<"3. Luxury Pack for just Rs 20000"<<endl;
        
        cout<<"Press any key to back or Enter package number you want to book\n";
        cin>>packChoice;

        if(packChoice==1)
        {
            hotelCost=5000;
            cout<<"You have successfully booked standard pack at Hotel MMM"<<endl;
            cout<<"Now you can goto the main menu and take the receipt\n";
        }
        else if(packChoice==2)
        {
            hotelCost=10000;
            cout<<"You have successfully booked Premium pack at Hotel MMM"<<endl;
            cout<<"Now you can goto the main menu and take the receipt\n";
        }
        else if(packChoice==3)
        {
            hotelCost=20000;
            cout<<"You have successfully booked Luxury pack at Hotel MMM"<<endl;
            cout<<"Now you can goto the main menu and take the receipt\n";
        }
        else{
            cout<<"Invalid input! Redirecting to previous menu please wait!"<<endl;
            Sleep(1100);
            system("CLS");
            hotels();    
        }

        int go;
        cout<<"\nPress 1 to redirect to the main menu: ";
        cin>>go;
        system("CLS");
        if(go==1)
        {
            menu();
        }
        else{
            menu();
        }
    }

    else{
        int go;
        cout<<"\nPress 1 to redirect to the main menu: ";
        cin>>go;
        system("CLS");
        if(go==1)
        {
            menu();
        }
        else{
            menu();
        }
     }
    }
};


float Booking::hotelCost;
float Cab::lastcost;
int Customers::cusID;

class charges : public Booking,Cab,Customers
{
    public:
    void printbill()
    { 

    ofstream outf("receipt.txt");//used to write on a file
    {
        outf<<"--------iTRAVELS Agency------"<<endl;
        outf<<"------------Receipt-----------"<<endl;
        outf<<"------------------------------"<<endl;
        outf<<"Customer ID"<<Customers::cusID<<endl<<endl;
        outf<<"Description\t\t Total"<<endl;
        outf<<"Hotel cost:\t\t"<<fixed<<setprecision(2)<<Booking::hotelCost<<endl;
        outf<<"Travel Cost:\t\t"<<fixed<<setprecision(2)<<Cab::lastcost<<endl;
        outf<<"---------------------------------------------"<<endl;
        outf<<"Total Charge:\t\t "<<fixed<<setprecision(2)<<Booking::hotelCost+Cab::lastcost<<endl;
        outf<<"---------------------------------------------"<<endl;
        outf<<"--------------ThankYou-----------------------"<<endl;
    }

    outf.close();
    }

    void showbill()//showing the bill
    {
        ifstream inf("receipt.txt");//this function is use for reading the file
        {
            if(!inf)
            {
                cout<<"ERROR"<<endl;
            }
            while(!inf.eof())
            {
                inf.getline(c,999);
                cout<<c<<endl;
            }
        }inf.close();
    }
};

void menu()
{
    int mainchoice,inchoice;

    cout << "\t\t      * iTRAVELS *\n" << endl;
    cout << "-------------------------Main Menu--------------------------" << endl;

    cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|\tCustomer Management -> 1\t|" << endl;
    cout << "\t|\tCabs Management     -> 2\t|" << endl;
    cout << "\t|\tBookings Management -> 3\t|" << endl;
    cout << "\t|\tCharges & Bill      -> 4\t|" << endl;
    cout << "\t|\tExit                -> 5\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    cout<<"\nEnter Your Choice: ";
    cin>>mainchoice;

    Customers a1;
    Cab a2;
    Booking a3;
    charges a4;

    if(mainchoice==1)
    {
            cout<<"--------Customers---------\n";
            cout<<"1. Enter New Customer"<<endl;
            cout<<"2. See Old Customer"<<endl;
            cout<<"\nEnter Choice: ";
            cin>>inchoice;
            system("CLS");
            if(inchoice==1)
            {
                a1.getdetails();
            }
            else if(inchoice==2)
            {
                a1.showdetails();
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                menu();
            }
        int go;
        cout<<"\nPress 1 to redirect to the main menu: ";
        cin>>go;
        system("CLS");
        if(go==1)
        {
            menu();
        }
        else{
            menu();
        }

    }

    else if(mainchoice==2)
    {
        a2.cabDetails();
    }
    else if(mainchoice==3)
    {
        cout<<"Book your choice of Hotel using the system\n";
        a3.hotels();
    }
    else if(mainchoice==4)
    {
        cout<<"Your Receipt\n";
        a4.printbill();
        cout << "Your receipt is already printed you can get it from file path\n" << endl;
        cout << "To display the your receipt in the screen, Enter 1: or Enter another key to back main menu: ";
        int go;
        cin >> go;
        if(go== 1)
        {
            system("CLS");
            a4.showbill();
            cout << "Press 1 to Redirect Main Menu: ";
            cin >> go;
            system("CLS");
            if(go == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else
        {
            system("CLS");
            menu();
        }
   }
    else if(mainchoice == 5){
        system("CLS");
        cout << "\n\n\t--GOOD-BYE!--" << endl;
        return;
    }
    else{
        cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
        Sleep(1100);
        system("CLS");
        menu();
    }
}

int main(){
   
   ManageMenu mng;
   return 0;
}

 /*
 ofstream out("old_customers.txt");
    out<<"Chalo Bye"<<endl<<"Seriously??";
    out.close();
    char c[999];
    ifstream in("old_customers.txt");
    {
        if(!in){
            cout<<"EROOR";
        }
        while(!in.eof())
        {
            in.getline(c,999);
            cout<<c<<endl;
        }
        in.close();
    }
*/