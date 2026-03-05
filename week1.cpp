#include<iostream>
#include<string>
using namespace std;
class student
{
 private:
    int rollnumber;
    string name;
    float marks;
    public:
    student()
    {
        rollnumber=0;
        name=' ';
        marks=0.0;
    }
    // function to input details
    void input()
    {
        cout<<"Enter roll number:";
        cin>>rollnumber;
        cin.ignore();
        cout<<"Enter name:";
        getline(cin,name);
         cout <<"Enter marks:";
        cin>>marks;  
    }

    // function to display details 
    void display()
    {
        cout <<rollnumber<<"\t"<<name<<"\t"<<marks<<endl;
    }

    //Destructor
    ~student()
    {
        cout<<"student object with RollNo"<<rollnumber<<"is destroyed";
    }
    };
    int main()
    {
        int n;
        cout<<"enter number of students:";
        cin >> n;
        //dynamic allocation of student objects
        student*students=new student[n];
        //input details
        for (int i=0;i<n;i++)
        {
            cout<<"\n Enter details of student"<< i+1 <<endl;
        students[i].input();
        }
    //Display details
    cout <<"\n RollNo\tName\tmarks\n" ;
for(int i=0;i<n;i++){
    students[i].display();
}   
//Release allocated memory
delete[] students;

return 0; 
}