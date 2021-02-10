#include <iostream>
#include<string.h>
#include<cstdio>

using namespace std;

class ticket
{
    int t1,d,m,y,n,mob,age,i;
    char t[100],c[100],s[100],s1[100],b[100],r[100],name[100],nation[100],g[100],add[1000];
public:
    getdata()
    {
    cout<<"Train Number: ";
    cin>>t1;
    cout<<"Train Name: ";
    cin>>t;
    cout<<"Date Of The Journey: ";
    cin>>d;
    cout<<"Month Of The Journey: ";
    cin>>m;
    cout<<"Year Of The Journey: ";
    cin>>y;
    cout<<"Class you prefer: ";
    cin>>c;
    cout<<"Number of Seats: ";
    cin>>n;
    cout<<"Station From: ";
    cin>>s;
    cout<<"Station To: ";
    cin>>s1;
    cout<<"Boarding at: ";
    cin>>b;
    cout<<"Reservation Upto: ";
    cin>>r;
    cout<<"Your Contact Number: ";
    cin>>mob;
    for(i=0;i<n;i++)
    {
        cout<<"Name of Passenger: ";
        cin>>name;
        cout<<"Gender: ";
        cin>>g;
        cout<<"Nationality: ";
        cin>>nation;
        cout<<"Age: ";
        cin>>age;
        cout<<"Address: ";
        cin>>add;
    }
    }
    putdata()
    {
    cout<<"                        BOOK YOUR TRAIN TICKET                           "<<endl<<endl;
    cout<<"WISH YOU ALL A SAFE JOURNEY"<<endl;
     cout<<"                       Your Ticket Is Booked                        "<<endl<<endl;
    cout<<"Train Number: "<<t1<<endl;
    cout<<"Train Name: "<<t<<endl;
    cout<<"Date Of The Journey: "<<d<<"/"<<m<<"/"<<y<<endl;
    cout<<"Class you prefer: "<<c<<endl;
    cout<<"Number of Seats: "<<n<<endl;
    cout<<"Station From: "<<s<<endl;
    cout<<"Station To: "<<s1<<endl;
    cout<<"Boarding at: "<<b<<endl;
    cout<<"Reservation Upto: "<<r<<endl;
    cout<<"Your Contact Number: "<<mob<<endl<<endl;
    for(i=0;i<n;i++)
    {
      cout<<"Name of Passenger: "<<name<<endl;
      cout<<"Gender: "<<g<<endl;
      cout<<"Nationality: "<<nation<<endl;
      cout<<"Age: "<<age<<endl;
      cout<<"Address: "<<add<<endl<<endl;
    }


    }


};
int main()
{
    ticket tt;
    tt.getdata();
    tt.putdata();
}
