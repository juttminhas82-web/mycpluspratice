#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    string dep;
    int sem;
    double gpa;
    public:
    void add();
    void add(int r,string n,string d,int s,double g );
    void display();
    student(){
        rollno=0;
          sem=0;
          gpa=0;
    }
    int getRollNo()
{
    return rollno;
}
string getname(){
    return name;
}
string getdep(){
    return dep;
}
int getsem(){
    return sem;
}
double getgpa(){
    return gpa;
}
};
void student::add(int r,string n,string d,int s,double g ){
    rollno=r;
    name=n;
    dep=d;
    sem=s;
    gpa=g;

}
void student::add(){
    cout<<"\nenter the rollno : ";
    cin>>rollno;
    cout<<"\nenter the name : ";
    cin>>name;
    cout<<"\nenter the department : ";
    cin>>dep;
    cout<<"\nenter the recent semester : ";
    cin>>sem;
    cout<<"\nenter the gpa : ";
    cin>>gpa;
}
void student::display(){
    cout<<"\nRoll no : "<<rollno;
    cout<<"\nName : "<<name;
    cout<<"\nThe department : "<<dep;
    cout<<"\nThe semester : "<<sem;
    cout<<"\nThe gpa : "<<gpa;
}
int main(){
    int l;
    cout<<"how many student you want to add ?";
    cin>>l;
    student a1[l];
    for(int i=0;i<l;i++){
        cout<<"the "<<i+1<<"Student";
        a1[i].add();

    }
    int c;
    cout<<"\ndo you want to see all the students detail 1/0 : ";
    cin>>c;
    if (c==1)
    {
        cout<<"\nThe details is that : ";
        for (int i = 0; i < l; i++)
        {
            cout<<"\n ";
             a1[i].display();
        }
        
    }
    else if (c==0)
    {
        cout<<"ok do you want to search specific student 1/0  ";
        int d;
        cin>>d;
        if(d==1){
            int searchid;
        cout<<"\nenter the no of that students : ";
        cin>>searchid;
        bool found = false;
            for(int k = 0; k < l; k++)
{
    if(searchid == a1[k].getRollNo())
    {
        a1[k].display();
        found=true;
        break;
    }
    if(found==false){
        cout<<"\nyou enter the wrong no ";
    }
}
        }

    else{
        cout<<" \nok have fun ";
    }
}
int del;
int yn;
bool foundd=false;
cout<<"do you want to delete any student :1/0 ";
cin>>yn;
if(yn==1){
    cout<<"enter his roll no : ";
cin>>del;
for(int i=0;i<l;i++){
    if(a1[i].getRollNo()==del){
        foundd=true;
        for(int j = i; j < l - 1; j++)
        {
            a1[j] = a1[j + 1];
        }
        l--;
        cout << "\nStudent Deleted Successfully!";
         break;
    }
 
       
          if(foundd == false)
{
    cout << "\nStudent Not Found!";
}
    }
}
else{
    cout<<" ok boss ";
}
int e;
cout<<"Do you want to change any thing ? 1 for yes and 0 for no ";
cin>>e;
if(e==1){
    int f;
    cout<<"ok which thing student deatils you want to updata?";
    cin>>f;
    bool founddd=false;
       for(int i=0;i<l;i++){
            if(f==a1[i].getRollNo()){
                founddd=true;
                int rn;
                string nam;
                string depe;
                int semes;
                double gpaa;
                cout<<" enter the update you want ";
                cout<<"rollno : ";
                cin>>rn;
                cout<<"Name : ";
                cin>>nam;
                cout<<"department: ";
                cin>>depe;
                cout<<"Semester : ";
                cin>>semes;
                cout<<"Gpa: ";
                cin>>gpaa;
                a1->add(rn,nam,depe,semes,gpaa);
               cout<<"ok the ";
               a1[i].display();
               cout<<"change to ";
               a1->display();
               break;
            }
            if(founddd==false){
                cout<<"user no found";
            }
       }

    }

return 0;
}