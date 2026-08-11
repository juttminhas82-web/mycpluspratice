#include<iostream>
using namespace std;
class bank{
    private:
    char name[15];
    int accountno;
    double balance=0;
    public:
    void inputaccunt(){
        cout<<"enter the account no : ";
        cin>>accountno;
    }
    void deposte(int x){
          
        balance=x+balance;

          cout<<accountno<<endl;

          cout<<"now your deposite is "<<balance;
    }
    void withdrawal(int y){
           if(balance==0){
            cout<<"sorry your balance is zero you can not withdrawal it ";
           }
           else if(y>balance){
            cout<<"sorry ammount is bigger then the balance amount your balance is"<<balance;

           }
           else
           balance -=y;
           cout<<"the withdrawl succesfully done now you balance is : "<<balance;
    }
    int getaccout(){
        return accountno;
    }
    double getbalance(){
        return balance;
    }
};
int main(){
    int accno;
    int menuchoice;
    bool acc=false;
    int foundintex;
    bank a[5];
    for(int i=0;i<=4;i++){
        cout<<"enter the account no "<<i+1;
        a[i].inputaccunt();
    }
    cout<<"enter the account no  : ";
    cin>>accno;
    for(int j=0;j<=4;j++ ){
      if(a[j].getaccout()==accno){
        foundintex=j;
        acc=true;
        break;
      }
    }
    if(acc==false){
        cout<<"account not found  "<<accno;
    }
    else{
cout<<"the account is founded sucessesfully "<<accno;
    
 do{
    cout<<"\n-----Menu-----\n1.deposte\n2.withdrawal\n3.see the account balance\n4.exit\n5.for account change";
    cout<<"choice from the menu ";
    cin>>menuchoice;
    if(menuchoice==1){
        int ammount;
        cout<<"enter the deposite ammount : ";
        cin>>ammount;
        a[foundintex].deposte(ammount);
    }
    else if(menuchoice==2){
        int withdrwalam;
       cout<<"enter the withdrawl amount : ";
       cin>>withdrwalam;
       a[foundintex].withdrawal(withdrwalam);
    }
    else if(menuchoice==3){
        cout<<"the balance is "<<a[foundintex].getbalance();
    }else if(menuchoice==4){
        cout<<"ok its time to go ";
    }
    else if(menuchoice==5){
        int accountno;
        cout<<"enter the account no : ";
        cin>>accountno;
        for(int j=0;j<=4;j++ ){
      if(a[j].getaccout()==accountno){
        foundintex=j;
        acc=true;
        break;
      }
    }
    if(acc==false){
        cout<<"account not found  "<<accountno;
    }
    else{
cout<<"the account is founded sucessesfully "<<accountno;
        
    }
}
    else{
        cout<<"choice again wrong no";
    }
}while(menuchoice!=4);

    }
    return 0;
   
}