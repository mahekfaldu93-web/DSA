#include <iostream>
using namespace std;

int main()
{
   int arr[20];
   int num;

    while (true)
    {
        cout <<"welcome to our programme !" <<endl;

        cout <<"Enter 1 to create an Array" <<endl;
        cout <<"Enter 2 to read an Array" <<endl;
        cout <<"Enter 3 to delete an element from Array" <<endl;
        cout <<"Enter 4 to update an element from Array" <<endl;
        cout <<"Enter 0 to exit" <<endl;

        int choice;
        cout <<"Enter your choice :";
        cin >> choice;

        switch (choice)
        {
        case 1:
         cout << endl << "How many element you want to add :"; 
         cin >> num;
         if(num<20)
         {
            for(int i=0;i<num;i++)
            {
                cout << endl <<"Enter the element no. :" <<i+1 << " =";
                cin >> arr[i];
            }
             cout << endl << "Array created successfully !" << endl; 
         }
            else{
               cout << endl << "Invalid size" << endl;   
            }
            break;
            defult:
            break;
        
            case 3:
            int pos;
            cout << "enter the position of element you want to remove :";
            cin >>pos;

            if (pos>=0 && pos<num)
            {
                for (int i=pos-1;i<num-1;i++)
                {
                    arr[i]=arr[i+1];
                }
                num--;
                cout << endl <<"Element removed successfully !" <<endl;
            }
             else
             {
                   cout << endl <<"you entered the wrong position " <<endl;
             }
             break;

             case 4:
             int posi;
             int el;
             cout <<"enter the position of element you want to update :";
             cin >> posi;
             cout << "Enter the new value :";
             cin >> el;

             if (posi >=0 && posi<num)
             {
                arr[posi-1]=el;
                cout << endl <<"Element update successfully !" <<endl;
             }
             else{
                cout <<endl <<"you entered the wrong position " <<endl;
             }
             break;

             case 0:
             cout << "Thank you for visit";
               return 0;

               defult :
               break;
        }
    }