#include <iostream>
using namespace std;
class student{
    private:
      char name[10];
    int num[3];
    int greatestt=0;
    int smallestt=0;
    int total = 0;
    double average=0;
public:
void input(){
    cout << "Enter the name: ";
    cin >> name;

    cout << "Enter the 3 subject marks:\n";

    for (int i = 0; i < 3; i++) {
        cout << "Enter marks: ";
        cin >> num[i];
    }
    for (int i = 0; i < 3; i++) {
        total += num[i];
    }
    average = total / 3.0;
}
double returnavg(){
    return average;
}
void greatest(){
    
     greatestt= num[0];

    if (num[1] > greatestt) {
        greatestt = num[1];
    }

    if (num[2] > greatestt) {
        greatestt = num[2];
    }

}
   void smallest(){

 smallestt = num[0];

    if (num[1] < smallestt) {
        smallestt = num[1];
    }

    if (num[2] < smallestt) {
        smallestt = num[2];
    }
   }
void output(){
    
    cout << "\nName: " << name;
    cout << "\nTotal: " << total;
    cout << "\nAverage: " << average << endl;
    cout << "Greatest mark: " << greatestt << endl;
    cout << "Smallest mark: " << smallestt << endl;
   if (average >= 80) {
        cout << "Grade: A";
    }
    else if (average >= 70) {
        cout << "Grade: B";
    }
    else if (average >= 60) {
        cout << "Grade: C";
    }
    else if (average >= 50) {
        cout << "Grade: D";
    }
    else if (average >= 40) {
        cout << "Grade: E";
    }
    else {
        cout << "Grade: F";
    }
}
};

int main() {
     int a;
    do{
    cout<<"enter the no of students : ";
    cin>>a;
    if(a<=10){
   student s[a];
   for(int i =0;i<=a-1;i++){
    s[i].input();
s[i].greatest();
s[i].smallest();
   }
   double highest = s[0].returnavg();
int highestIndex = 0;

for(int i = 1; i < a; i++){
    if(s[i].returnavg() > highest){
        highest = s[i].returnavg();
        highestIndex = i;
    }
}
   for(int j=0;j<=a-1;j++){
    s[j].output();
    cout<<endl;
   }
   cout << "\nStudent with highest average:\n";
s[highestIndex].output();
    }
    else{
        cout<<"enter the number less the 10 ";
        cout<<endl;
    }
}while(a>=10);
    return 0;
}