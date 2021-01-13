#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
 cout<<"CHOOSE YOUR FAVORITE TRUTH TABLE "<<endl;
 cout<<"************************************ "<<endl;
 cout<<"ENTER 1 FOR CONJUNCTION (AND) "<<endl;
 cout<<"ENTER 2 FOR DISJUNCTION (OR) "<<endl;
 cout<<"ENTER 3 FOR CONDITIONAL STATEMENT (IF A THEN B) "<<endl;
 cout<<"ENTER 4 FOR EXCLUSIVE OR (XOR) "<<endl;
 cout<<"ENTER 5 FOR BICONDITIONAL OPERATION (PIFFQ) "<<endl;
 //Enter first string a
 string A;
 cout<<"ENTER STRING A 16 DIGITS LONG OF  0 and 1 :";
 cin>>A;
 string B;
 cout<<"ENTER STRING B 16 DIGITS LONG OF  0 and 1 :";
 cin>>B;
 string z;
 int choice;
 cout<<"YOUR CHOICE OF OPERATION (OR TRUTH TABLE) : ";
 cin>>choice;
 char c;
 int result;
 switch (choice)
 {
 case 1: cout<<"YOUR CHOICE IS 1 FOR CONJUNCTION (AND)"<<endl;
cout <<"RESULTING STRING Z IS= ";
 {for (int i=0;i<16;i++)
 if( A[i]=='1' && B[i]=='1')
 cout<<"1";
 else if(A[i]=='1' && B[i]=='0')
 cout<<"0";
 else if(A[i]=='0' && B[i]=='1')
 cout<<"0";
 else if(A[i]=='0'&& B[i]=='0')
 cout<<"0";
 break;}
 case 2: cout<<"Choice is 2 FOR DISJUNCTION (OR)"<<endl;
 cout <<"RESULTING STRING Z IS= ";
 {
for (int i=0;i<16;i++)
 if(A[i]=='1' && B[i]=='1')
 cout<<"1";
 else if(A[i]=='1' && B[i]=='0')
 cout<<"1";
 else if(A[i]=='0' && B[i]=='1')
 cout<<"1";
 else if(A[i]=='0' && B[i]=='0')
 cout<<"0";
 break;}
 case 3: cout<<"Choice is 3 FOR CONDITIONAL STATEMENT (IF A THEN B)"<<endl;
 // looping on string 16 characters
cout <<" RESULTING STRING Z IS= ";
{for (int i=0;i<16;i++)
 if(A[i]=='1' && B[i]=='1')
 cout<<"1";
 else if(A[i]=='1' && B[i]=='0')
 cout<<"0";
 else if(A[i]=='0' && B[i]=='1')
 cout<<"1";
 else if(A[i]== '0' && B[i]=='0')
 cout<<"1";
 break;}
 case 4: cout<<"Choice is 4 FOR EXCLUSIVE OR (XOR)"<<endl;
 cout <<" RESULTING STRING Z IS= ";
 {for (int i=0;i<16;i++)
 if(A[i]=='1' && B[i]=='1')
 cout<<"0";
 else if(A[i]=='1' && B[i]=='0')
 cout<<"1";
 else if(A[i]=='0' && B[i]=='1')
 cout<<"1";
 else if(A[i]== '0' && B[i]=='0')
 cout<<"0";
 break;}
 case 5: cout<<"Choice is 5 FOR BICONDITIONAL OPERATION (PIFFQ)"<<endl;
 {cout <<"RESULTING STRING Z IS= ";
 for (int i=0;i<16;i++)
 if(A[i]=='1' && B[i]=='1')
 cout<<"1";
 else if(A[i]=='1' && B[i]=='0')
 cout<<"0";
 else if(A[i]=='0' && B[i]=='1')
 cout<<"0";
 else if(A[i]== '0' && B[i]=='0')
 cout<<"1";
 break;}
 default: cout<<"Choice other than 1, 2 ,3 ,4,5 SO WHAT DO YOU WANT ?"<<endl;
 break;
 }
 return 0;
}
