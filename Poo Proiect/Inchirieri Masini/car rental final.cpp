#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>


using namespace std;
class client
{
private:
public:
    string numeclient;
    string model;
    string numar;
    char data;

};
class inchiriere : public client
{
public:
    int zile=0,pretinchiriere=0;
    void data()
    {
        int login();
        login();
        cout << "\t\t\t\tIntroduceti numele dumneavoastra: ";
        cin >> numeclient;
        cout<<endl;
        do
        {
            cout <<"\t\t\t\tLista cu optiuni de inmatriculare"<<endl;
            cout<<"\t\t\t\tScrieti 'A' pentru Audi 2017."<<endl;
            cout<<"\t\t\t\tScrieti 'B' pentru Hyundai 2019."<<endl;
            cout<<"\t\t\t\tScrieti 'C' pentru Ford 2021."<<endl;
            cout<<endl;
            cout<<"\t\t\t\tAlegeti una din optiunile de mai sus: ";
            cin >>model;
            cout<<endl;
            cout<<"--------------------------------------------------------------------------"<<endl;
            if(model=="A")
            {
                system("CLS");

                cout<<"Ati ales Audi model 2017"<<endl;
                ifstream inA("A.txt");
                char str[200];
                while(inA)
                {
                    inA.getline(str, 200);
                    if(inA) cout << str << endl;
                }
                sleep(2);
            }
            if(model=="B")
            {
                system("CLS");

                cout<<"Ati ales Hyundai model 2019"<<endl;
                ifstream inB("B.txt");
                char str[200];
                while(inB)
                {
                    inB.getline(str, 200);
                    if(inB) cout << str << endl;

                }
                sleep(2);
            }
            if(model=="C")
            {
                system("CLS");
                cout<<"Ati ales Ford model 2021"<<endl;
                ifstream inC("C.txt");
                char str[200];
                while(inC)
                {
                    inC.getline(str, 200);
                    if(inC) cout << str << endl;
                }
                sleep(2);
            }
            if(model !="A" && model !="B" &&  model !="C" )

                cout<<"Model invalid! Incercati din nou!"<<endl;
        }
        while(model !="A" && model !="B" &&  model !="C" );
        cout<<"--------------------------------------------------------------------------"<<endl;
        cout<<"Va rugam alegeti un numar pentru masina (initialele orasului) : ";
        cin >> numar;
        cout<<"Cate zile doriti ca inchiriati masina : ";
        cin >> zile;
        cout<<endl;
    }
    void calculeaza()
    {
        sleep(1);
        system ("CLS");
        cout<<"Se calculeaza pretul..."<<endl;
        sleep(2);
        if(model == "A"||model=="a")
            pretinchiriere=zile*72;
        if(model == "B" ||model=="b")
            pretinchiriere=zile*86;
        if(model == "C" ||model=="c")
            pretinchiriere=zile*75;
    }
    void aratapretul()
    {
        cout << "\n\n\t\t	| Nume client: "<<numeclient<<endl;
        cout << "\t\t	| Model masina : "<<model<<endl;
        cout << "\t\t	| Numar masina : "<<numar<<endl;
        cout << "\t\t	| Numar zile : "<<zile<<endl;
        cout << "\t\t	| Total pret inchiriere (RON) :"<<pretinchiriere<<endl;
        cout << "\t\t	| Pagube : "<<"Se platesc bagubele aduse masinii"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
        cout <<"\n";

        int f;
        system("PAUSE");

        system ("CLS");

        cout<<"\nVa multumin ca ati inchiriat de la noi!\n";


    }
};
class bunvenit
{
public:
    int loading()
    {

        cout<<"\nSistem de inchirieri masini\n";
        sleep(1);
        cout<<"\nProgramul porneste, va rugam asteptati..."<<endl;
        sleep(1);
        cout<<"\nSe incarca fisierele..."<<endl;
        sleep(1);
        system ("CLS");
    }

};
int main()
{
    bunvenit obj1;
    obj1.loading();
    inchiriere obj2;

    obj2.data();
    obj2.calculeaza();
    obj2.aratapretul();

    return 0;
}

int login()
{
    string parola ="";
    char entr;
    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t        SISTEM DE INCHIRIERI MASINI \n\n";
    cout<<"\t\t\t\t\t------------------------------";
    cout<<"\n\t\t\t\t\t\t     LOGIN \n";
    cout<<"\t\t\t\t\t------------------------------\n\n";
    cout << "\t\t\t\t\tIntroduceti Parola: ";
    entr = _getch();
    while(entr != 13)
    {
        parola.push_back(entr);
        cout << '*';
        entr = _getch();
    }
    if(parola == "parola")
    {
        cout << "\n\n\n\t\t\t\t\t\tAcces permis! \n";
        system("PAUSE");
        system ("CLS");
    }
    else
    {
        cout << "\n\n\t\t\t\t\t\t\tAcces respins...\n\t\t\t\t\t\t\tVa rugam incercati din nou\n\n";
        system("PAUSE");
        system("CLS");
        login();
    }
}

