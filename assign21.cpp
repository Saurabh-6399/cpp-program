#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
void f1(char file1[],char file2[])
{
    ifstream fin;
    ofstream fout;
    char ch;
    fin.open(file1,ios::in);
    if(!fin)
    {
        cout<<"file not found:";
    }
    else
    {
        fout.open(file2,ios::out);
        ch=fin.get();
        while(!fin.eof())
        {
            fout<<ch;
            ch=fin.get();
        }
        fout.close();
    }
    fin.close();

}
void f2(char file1[])
{
    ifstream fin;
    char ch;
    fin.open(file1,ios::in);
    if(!fin)
    {
        cout<<"file not found:";
    }
    else
    {
        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }
    }
    fin.close();

}
class employee{
    private:
       int empid;
       char name[50];
       float salary;
    public:
       void input()
       {
          cout<<"enter employee id,name and salary";
          cin>>empid;
          cin.ignore();
          cin.getline(name,30);
          cin>>salary;
       } 
       void display()
       {
          cout<<empid<<" ";
          cout<<name<<" ";
          cout<<salary<<endl; 
       } 
       void store();
       void printALL();
       void search(int id);
       void edit(int id);
       void del(int id);


};
void employee::store()
{
    ofstream fout;
    fout.open("text.cpp",ios::binary|ios::app);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void employee::printALL()
{
    ifstream fin;
    fin.open("text.cpp",ios::binary|ios::app);
    if(!fin)
    {
        cout<<"file not found:";
    }
    else{
         fin.read((char*)this,sizeof(*this));
         while(!fin.eof())
         {
            display();
            fin.read((char*)this,sizeof(*this));
            
         }
    }
    fin.close();
}
void employee::search(int id)
{
    ifstream fin;
    fin.open("text.cpp",ios::binary|ios::app);
    if(!fin)
    {
        cout<<"file not found:";
    }
    else{
         fin.read((char*)this,sizeof(*this));
         while(!fin.eof())
         {
            if(empid==id)
                display();
            fin.read((char*)this,sizeof(*this));
            
         }
         if(empid!=id)
            cout<<"search failed:";
    }
    fin.close();
}
void employee::edit(int id)
{
    employee e;
    ifstream fin;
    ofstream fout;
    fin.open("employeefile",ios::binary|ios::in);
    if(!fin)
    {
        cout<<"file not found:";
    }
    else{
        fout.open("textfile",ios::binary|ios::out);
        fin.read((char*)&e,sizeof(e));
         while(!fin.eof())
         {
            if(id==e.empid)
            {
                cout<<"enter correct name:";
                cin.ignore();
                cin.getline(e.name,30);
                cin>>e.salary;
            }
            fout.write((char*)&e,sizeof(e));   
            fin.read((char*)&e,sizeof(e));   
         }
    }
    remove("employeefile");
    rename("textfile","employeefile");
}
void employee::del(int id)
{
    employee e;
    ifstream fin;
    ofstream fout;
    fin.open("employeefile",ios::binary|ios::in);
    if(!fin)
    {
        cout<<"file not found:";
    }
    else{
        fout.open("textfile",ios::binary|ios::out);
        fin.read((char*)&e,sizeof(e));
         while(!fin.eof())
         {
            if(id!=e.empid)
            {
                fout.write((char*)&e,sizeof(e));
            }   
            fin.read((char*)&e,sizeof(e));   
         }
    }
    remove("employeefile");
    rename("textfile","employeefile");
}
int menu()
{
    int choice;
    cout<<"\n1.new record:";
    cout<<"\n2.edit record:";
    cout<<"\n3. printALL record:";
    cout<<"\n4.search a record:";
    cout<<"\n5.Delete record:";
    cout<<"\n6.exit";
    cout<<"\n\n enter your choice:";
    cin>>choice;
    return choice;
}

int main()
{
    employee emp;
    int id;
    while(true)
    {
        switch(menu())
        {
            case 1:
               emp.input();
               emp.store();
               break;
            case 2:
               cout<<"\nenter a empoyee id to edit:";
               cin>>id;
               emp.edit(id);
               break;
            case 3:
               emp.printALL();
               break;
            case 4: 
                cout<<"enter empployee id to search:";
                cin>>id;
                emp.search(id);
                break;
            case 5:
                cout<<"enter empployee id to delete:";
                cin>>id;
                emp.del(id);
                break;              
            case6:
              exit(0);
            default:
               cout<<"\n invalid choice:";  
               
        }
    }
    char file1[]="text.cpp";
    f2(file1);
    cout<<endl;
}
