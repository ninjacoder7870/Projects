#include<bits/stdc++.h>
using namespace std;

class Library
{
    public:
    int book_id;
    char book_name[100];
    char author[100];
    char student_name[100];
    int price;

};

int main()
{
   Library lib[20];
   int input=0;
   int count=0;
    while(count!=3)
    {
        cout<<"Enter 1 to fill all details"<<endl;
        cout<<"Enter 2 to display details"<<endl;
        cout<<"Enter 3 to quit"<<endl; 
        cin>>input;
        switch(input)
        {
            case 1:
                cout<<"Enter book id"<<endl;
                cin>>lib[count].book_id;
                cout<<"Enter Book name"<<endl;
                cin.getline(lib[count].book_name,100,'$');
                cout<<"Enter Book author"<<endl;
                cin.getline(lib[count].author,100,'$');
                cout<<"Enter student name"<<endl;
                cin.getline(lib[count].student_name,100,'$');
                cout<<"Enter book price"<<endl;
                cin>>lib[count].price;
                count++;
                break;
            case 2:
                for(int i=0;i<count;i++)
                {
                    cout<<"Book id is : "<<lib[i].book_id<<endl;
                    cout<<"Book name is : "<<lib[i].book_name;
                    cout<<"Book author is : "<<lib[i].author;
                    cout<<"Book student name  is : "<<lib[i].student_name;
                    cout<<"Book price is : "<<lib[i].price<<endl;
                }
                break;
            case 3:
                exit(0);
                break;
                default:
                cout<<"you have enter wrong key please try again "<<endl;
        }
    }

    return 0;

}
