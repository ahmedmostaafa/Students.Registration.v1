#include <iostream>

using namespace std;
 int id[10] , av_money[10];
 int a , g , i = 0 , j = 0 ,k = 0 ;
 int Fees[4] = {1000,1000,400,600} ;
 char o ;


int main()

{

    home:


    cout << "\t\t\t\t\t*****Registration of students in college*****" << endl<< endl<< endl ;
    cout << "\t1) Students registered in system" << endl ;
    cout << "\t2) Add student" << endl ;
    cout << "\t3) Edit student" << endl ;
    cout << "\t4) Delete student" << endl ;
    cout << "\t5) Exit" << endl ;
    cout << "Please chose one from above choices:" ;
    cin >> a;

    if(a==2)

    {
        cout << "\t\t\t\t\t\tAdd a new student" << endl ;
        cout << "Please enter id for a new student:" << endl ;
        cin >> id[i] ;
        cout << "Please Enter available money:" << endl ;
        cin >> av_money[j] ;
        f:

        cout << "The available subjects:\n" << endl ;
        cout << "1) Programming language    Fee 1000" << endl ;
        cout << "2) Technical writing        Fee 1000" << endl ;
        cout << "3) Software Engineering     Fee 400" << endl ;
        cout << "4) Databases                 Fee 600" << endl ;
        cout << "\n" ;
        cout << "Please choose subject code to enroll in:" << endl ;
        cin >> g ;
        if(g==1)
        {
            if(av_money[j]>Fees[0])
            {
                av_money[j]-= Fees[0] ;
            }
            cout << "Do you want to enroll another subject Y/N:" << endl ;
            cin >> o ;
            if(o=='Y')
            {
                goto f;
            }else if(o=='N')
            {
                k++ ;
                j++ ;
                i++ ;
                goto home;
            }

        }else if(g==2)
        {
            if(av_money[j]>Fees[1])
            {
                av_money[j]-=Fees[1] ;
            }
            cout << "Do you want to enroll another subject Y/N:" << endl ;
            cin >> o ;
            if(o=='Y')
            {
                goto f;
            }else if(o=='N')
            {
                k++ ;
                j++ ;
                i++ ;
                goto home;
            }


       }else if(g==3)

       {
           if(av_money[j]>Fees[2])
            {
                av_money[j]-=Fees[2] ;
            }
           cout << "Do you want to enroll another subject Y/N:" << endl ;
            cin >> o ;
             if(o=='Y')
            {
                goto f;
            }else if(o=='N')
            {
                k++ ;
                j++ ;
                i++ ;
                goto home;
            }
       }
    }else if(g==4)
    {
        if(av_money[j]>Fees[4])
            {
                av_money[j]-=Fees[4] ;
            }
            cout << "Do you want to enroll another subject Y/N:" << endl ;
            cin >> o ;
            if(o=='Y')
            {
                goto f;
            }else if(o=='N')
            {
                k++ ;
                j++ ;
                i++ ;
                goto home;

            }
    }



if(a==5)
{
  cout << "Thank you!"<< endl ;
}





return 0;

}
