#include<iostream>
using namespace std;
class product{
    private:
    int product_id;
    double product_price;
    string product_name;
    double product_quantity;
    public:
    double getNumber() {
    double value;
    while (true) {
        cin >> value;
        if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Enter a number: ";
        }
        else if(value<0){
                cout<<"the negative value not allowed . ";
            }
            else{
                return value;
            }
    }
}

    void input(){
       
 cout<<"\nenter the product id : ";
product_id=getNumber();
cout<<"\nenter the product price : ";
        product_price=getNumber();
        cout<<"\nenter the product name :";
        getline(cin>>ws,product_name);
cout<<"\nenter the product quantity : ";
        product_quantity=getNumber();
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
        return product_price;
    }
    int setquantity(int a){
        product_quantity=a;
    }
};
    int getNumber() {
    int value;
    while (true) {
        cin >> value;
        if (cin.fail()) {
             cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Enter a number: ";
        }
            else if(value<0){
                cout<<"the negative value not allowed . ";
            }
            else{
                return value;
            }
       
    }
}
int searchno(product p[], int a){
    int id;
        cout<<"enter the id : ";
        id=getNumber();
        for(int k=0;k<a;k++){
            
          if(id==p[k].getid()){
            return k;
            break;
          }
        }
        return -1;
}
int main(){
    int a;
    int choice;
    int index=0;
        cout<<"enter the no of product : ";
    a=getNumber();
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
     cout<<"\n----menu-----\n1.search product by id \n2.see the product quantity\n3.update price \n4.show the product details\n5.remove quantity\n6.Total inventory\n7.Delete Product\n8.exit ";
        choice=getNumber();  
    
      if(choice==1){
        int index= searchno(p,a);
        if (index != -1) {
    p[index].output();
}
else {
    cout << "Product not found";
}
      }
    else if(choice==2){
    int index= searchno(p,a);
        if (index != -1) {
   cout<< "The Quantity of "<<p[index].getname()<<" is \n "<<p[index].getquantity();
}
else {
    cout << "Product not found";
}

    }
    
    else if (choice==3){
        int index=searchno(p,a);
    if(index != -1){
            double d;
            cout<<"\nthe last price is : "<<p[index].getprice();
            cout<<"\n enter the new price : ";
                d=getNumber();      
          
            p[index].getprice(d);
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
    int index = searchno(p,a);
    if(index != -1){
        do{
        int mines;
        cout<<"enter the amount : ";
        cin>>mines;
        if(mines<=p[index].getquantity()){
            int result=p[index].getquantity()-mines;
     cout<<"\nok the old quntity is : "<<p[index].getquantity()<<"\nnow the remain stock is : "<<result;
     p[index].setquantity(result);
        }
        else {
            cout<<" you removing the more product then in stock : ";
        }
    }while(false);
    }
    else{
        cout<<"the product not found ";
    }
    
    
}
else if(choice==6){
    double total =0;
    for(int i = 0;i<a;i++){
 total += p[i].getquantity() *p[i].getprice();
 cout<<"\nthe product info "<<endl<<"Name\n"<<p[i].getname()<<"\nQuantity"<<endl<<p[i].getquantity()<<endl<<"price"<<endl<<p[i].getprice();
    }
    
    cout<<"\nthe total inventory value is price is   : "<<total;
}
else if(choice==7){
    int index=searchno(p,a);
    if(index!=-1){
        for(int j = index;j<a-1;j++){
            p[j]=p[j+1];
        } 
        a--;
         cout<<"The product delete succesfully\nnow you have"<<a<<"products";
    }
    else{
        cout<<"the product not found ";
    }

}

else if(choice==8){
    cout<<"\nthanks for using ";
}
else{
    cout<< "choice the no from menu ";
}
     }while(choice!=8);
     return 0;
}