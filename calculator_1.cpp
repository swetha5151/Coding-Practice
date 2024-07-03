#include<bits/stdc++.h>
using namespace std;
int main()
{
    int current_number=0,value;
    int op;
    cout<<"operator :";
    cin>>op;
    while(op!=5)
    {
        cout<<"enter number :";
        cin>>value;
       switch(op)
       {
       case 1:
        {
            current_number=current_number+value;
            cout<<"current number :"<<current_number<<"\n";
            cout<<"operator :";
            cin>>op;
            break;
        }
        case 2:
        {
            current_number=current_number-value;
            cout<<"current number :"<<current_number<<"\n";
            cout<<"operator :";
            cin>>op;
            break;
        }
        case 3:
        {
            current_number=current_number*value;
            cout<<"current number :"<<current_number<<"\n";
            cout<<"operator :";
            cin>>op;
            break;
        }
        case 4:
        {
            current_number=current_number/value;
            cout<<"current number :"<<current_number<<"\n";
            cout<<"operator :";
            cin>>op;
            break;
        }

        default:
            {
                cout<<"wrong operator"<<"\n";
                cout<<"operator :";
                cin>>op;
                break;
            }
       }
    }
  return 0;
}
