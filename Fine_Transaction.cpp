#include<iostream>
#include<fstream>
using namespace std;
void display(string name)
{
    int i;
    string j;
    ifstream in(name + ".txt");
    for(i = 0; i < 6; i++)
    {
        getline(in, j);
        cout<<j<<endl;
    }
}
int main()
{
    string name, sirname, bankname, AcType, BCID, AcNo;
    int PIN, Amt, n;
    cout<<"Enter data 1"<<endl;
    cout<<"Show data 2"<<endl;
    cout<<"Choice : ";
    cin>>n;

    if(n == 1)
    {
    cout<<"Enter Name : ";
    cin>>name>>sirname;
    cout<<"Enter Bank Name : ";
    cin>>bankname;
    cout<<"Enter BCID : ";
    cin>>BCID;
    cout<<"Enter A/C Type : ";
    cin>>AcType;
    cout<<"Enter Bank A/C No : ";
    cin>>AcNo;
    cout<<"Enter PIN : ";
    cin>>PIN;
    cout<<"Enter Amount : ";
    cin>>Amt;

    ofstream out(name + ".txt");
    out<<name<<endl<<sirname<<endl<<bankname<<endl<<BCID<<endl<<AcType<<endl<<AcNo<<endl<<PIN<<endl<<Amt;
    }
    else if(n == 2)
    {
        cout<<"Enter Your Name : ";
        cin>>name;
        display(name);
    }
    else
    {
        cout<<"Sorry";
    }
    return 0;
 }