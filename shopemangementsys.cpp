#include<iostream>
using namespace std;
class product{
    private:
    int product_id;
    double product_price;
    char product_name[50];
    double product_quantity;
    public:
    void input(){
        cout<<"\nenter the product id : ";
        cin>>product_id;
        cout<<"\nenter the product price : ";
        cin>>product_price;
        cout<<"\nenter the product name :  ";
        cin>>product_name;
        cout<<"\nenter the product quantity : ";
        cin>>product_quantity;
    }
    void output(){
        cout<<"\nId : "<<product_id;
        cout<<"\nPrice : "<<product_price;
        cout<<"\nName : "<<product_name;
        cout<<"\nQuantity "<<product_quantity;
    }
    int getid(){
        return product_id;
    }
    string getname(){
        return  product_name;
    }
    double getquantity(){
        return product_quantity;
    }
    double getprice(){
        return product_price;
    }
    double getprice(double e){
        product_price=e;
    }
};
int main(){
    int a;
    int choice;
    int index=0;
    cout<<"enter the no of product : ";
    cin>>a;
    product p[a];
    for(int i = 0; i<a;i++){
        cout<<"enter product no  "<<i+1<<" details : ";
        p[i].input();
        cout<<endl;
    }
     for(int j=0; j<a;j++){
        cout<<"Product "<<j+1<<" details ";
        p[j].output();
        cout<<endl;
     }
     do{
     cout<<"\n----menu-----\n1.search product by id \n2.see the product quantity\n3.update price \n4.show the product details\n5.exit ";
      cin>>choice;
      if(choice==1){
        int id;
        bool found=false;
        cout<<"enter the id : ";
        cin>>id;
        for(int k=0;k<a;k++){
            
          if(id==p[k].getid()){
            found=true;
            index=k;
            break;
          }
        }
        if(found==true){
            p[index].output();
        }
        else{
            cout<<"wrong id product not found ";
        }
      }
    else if(choice==2){
          bool foundd=false;
        int idd;
        cout<<"enter the id : ";
        cin>>idd;
        for(int l=0;l<a;l++){
          if(idd==p[l].getid()){
            foundd=true;
            index=l;
            break;
          }
        }
        if(foundd==true){
         cout<<p[index].getquantity();
        }
        else{
            cout<<"wrong id product not found ";
        }

    }
    
    else if (choice==3){
        int iddd;
        bool founddd=false;
         cout<<"\nenter the product id : ";
         cin>>iddd;
for(int n=0;n<a;n++){
          if(iddd==p[n].getid()){
            founddd=true;
            index=n;
            break;
          }
        
    }
    if(founddd==true){
            double d;
            cout<<"\nthe last price is : "<<p[index].getprice();
            cout<<"\n enter the news price : ";
            cin>>d;
            cout<<p[index].getprice(d);
            cout<<"\n now the price is "<< p[index].getprice(d);
        }
        else{
            cout<<"not the id found ";
        }
}
else if(choice==4){
    cout<<"\nthe details is : ";
    for(int o=0; o<a;o++){
        cout<<"Product "<<o+1<<" details ";
        p[o].output();
        cout<<endl;
     }
}
else if(choice==5){
    cout<<"\nthanks for using ";
}
else{
    cout<<"choice the no from menu ";
}
     }while(choice!=5);
     return 0;
}