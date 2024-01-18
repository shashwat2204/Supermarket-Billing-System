#include <iostream>
#include <fstream>
#include<bits/stdc++.h>

using namespace std;

class billing{
    private:
    string pname;
    int pcode;
    float price;
    float discount;
    
    public:
    void menu();
    void administrator();
    void customer();
    void add();
    void edit();
    void rem();
    void list();
    void reciept();
};

void billing :: menu()
{    
    m:
    int choice;
    string email;
    string password;
    
    cout<<"\t\t\t\t____________________________________"<<endl;
    cout<<"\t\t\t\t                                    "<<endl;
    cout<<"\t\t\t\t      S u p e r   m a r k e t       "<<endl;
    cout<<"\t\t\t\t          m a i n  m e n u          "<<endl;
    cout<<"\t\t\t\t                                    "<<endl;
    cout<<"\t\t\t\t____________________________________"<<endl;
    cout<<"\t\t\t\t     |                          |   "<<endl;
    cout<<"\t\t\t\t     |  Select from them        |   "<<endl;
    cout<<"\t\t\t\t     |                          |   "<<endl;
    cout<<"\t\t\t\t     | 1.  Administrator        |   "<<endl;
    cout<<"\t\t\t\t     |                          |   "<<endl;
    cout<<"\t\t\t\t     | 2.  Customer             |   "<<endl;
    cout<<"\t\t\t\t     |                          |   "<<endl;
    cout<<"\t\t\t\t     | 3.  Exit                 |   "<<endl;
    cout<<"\t\t\t\t_____|__________________________|___"<<endl;
    cout<<"\t\t\t\t     |    Please select !       |   "<<endl;
    cout<<"\t\t\t\t     |                          |   "<<endl;
    cout<<"\t\t\t\t_____|__________________________|___"<<endl;
    cout<<": "; cin>>choice;
    switch(choice){
        
     case 1:
       cout<<"\t\t\t\t____________________________________"<<endl;
       cout<<"\t\t\t\t     |--------------------------|   "<<endl;
       cout<<"\t\t\t\t     |    Please login!..       |   "<<endl;
       cout<<"\t\t\t\t     |--------------------------|   "<<endl;
       cout<<"\t\t\t\t     |                          |   "<<endl;
       cout<<"\t\t\t\t     |    enter your email:     |   "<<endl;
       cout<<"\t\t\t\t     |";cin>>email;cout;
       cout<<"\t\t\t\t     |                          |   "<<endl;
       cout<<"\t\t\t\t     |--------------------------|   "<<endl;
       cout<<"\t\t\t\t     |                          |   "<<endl;
       cout<<"\t\t\t\t     |    enter your password   |   "<<endl;
       cout<<"\t\t\t\t     |"; cin>>password;
       cout<<"\t\t\t\t     |                          |   "<<endl;
       cout<<"\t\t\t\t_____|__________________________|___"<<endl;
       
       if((email=="shashwatsharma224@gmail.com") && (password=="shash@2004")){
           administrator();
       }
       else{
           cout<<"\t\t\t\t     |    invalid user!         |   "<<endl;
       }
       break;
       
        case 2:
        
           customer();
           break;
        
        
        case 3: 
        
            exit(0);
        
        default :{
            cout<<"please select from the given options";
            break;
        }
      
    }
    cout<<"\n"<<endl;
    goto m ;
}

void billing:: administrator()
{
    a: 
    int choice;
     cout<<"\t\t\t\t____________________________________"<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     cout<<"\t\t\t\t     |   Administrator menu     |   "<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t     | 1. Add a product         |   "<<endl;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t     | 2. Modify the product    |   "<<endl;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t     | 3. Delete the product    |   "<<endl;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t     | 4. Back to main menu     |   "<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     cout<<"\t\t\t\t_____|__________________________|___"<<endl;
     cout<<"\t\t\t\t     |    Please select !       |   "<<endl;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t_____|__________________________|___"<<endl;
     cin>>choice;
     
     switch(choice){
         case 1:
         {
           add();
           break;
         }
         
         case 2:
         {
           edit();
           break;
         }
         
         case 3:
         {
           rem();
           break;
         }
         
         case 4:
         {
           menu();
           break;
         }
         default: 
         {
             cout<<"invalid choice"<<endl;
             
         }
         
     }
    goto a ; 
}
void billing:: customer(){
    
    b :
     int choice;
     cout<<"\t\t\t\t____________________________________"<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     cout<<"\t\t\t\t     |        Customer          |   "<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t     | 1. Buy a product         |   "<<endl;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t     | 2. Back to main menu     |   "<<endl;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     cout<<"\t\t\t\t_____|__________________________|___"<<endl;
     cout<<"\t\t\t\t     |    Please select !       |   "<<endl;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t_____|__________________________|___"<<endl;
     cin>>choice;
     switch(choice){
         case 1:
         reciept();
         
         case 2:
         menu();
         
         default: 
          cout<<"invalid choice! select from the options"<<endl;
     }
     goto b;
}
void billing::add()
{
    o:
    fstream data;
    int c;
    float p;
    float d;
    string n;
    int token=0;
    
     cout<<"\t\t\t\t____________________________________"<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     cout<<"\t\t\t\t     |   Add a new product      |   "<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t     | Product code of item:    |   "<<endl;
     cout<<"\t\t\t\t     |  "; cin>>pcode;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t     | Name of the item :       |   "<<endl;
     cout<<"\t\t\t\t     |  "; cin>>pname;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t     | Price of item:           |   "<<endl;
     cout<<"\t\t\t\t     |  ";cin>>price;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t     | Discount on item:        |   "<<endl;
     cout<<"\t\t\t\t     |  ";cin>>discount;
     
     data.open("database.txt", ios::in);
     
     if(!data){
         data.open("database.txt", ios::app|ios::out);
         data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<endl;
         data.close();
     }
     else{
         data>>c>>n>>p>>d;
         
         while(!data.eof())
         {
             if(c== pcode){
                 token++;
             }
             data>>c>>n>>p>>d;
         }
         data.close();
     
     if(token==1){
         goto o;
          }
         else{
            data.open("database.txt", ios::app|ios::out);
         data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<endl;
         data.close(); 
         }
         cout<<"Record inserted"<<endl;
    }
     
}
void billing::edit()
{
    fstream data, data1;
    int pkey;
    int token=0;
    int c;
    float p;
    float d;
    string n;
    
     cout<<"\t\t\t\t____________________________________"<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     cout<<"\t\t\t\t     |   Modify the record      |   "<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     cout<<"\t\t\t\t     |                          |   "<<endl;
     cout<<"\t\t\t\t     | Product code of item:    |   "<<endl;
     cout<<"\t\t\t\t     |  "; cin>>pkey;
  
     
     if(!data){
         cout<<"File doesn't exist!"<<endl;
     }
     else{
         data1.open("database1.txt" ,ios::app|ios::out);
         
         data>>pcode>>pname>>price>>discount;
         while(!data.eof())
         {
             if(pkey==pcode)
             {
                 cout<<"\t\t\t\t     |New Product code of item: |   "<<endl;
                 cout<<"\t\t\t\t     |  "; cin>>c;
                 cout<<"\t\t\t\t     |                          |   "<<endl;
                 cout<<"\t\t\t\t     | Name of the item :       |   "<<endl;
                 cout<<"\t\t\t\t     |  "; cin>>n;
                 cout<<"\t\t\t\t     |                          |   "<<endl;
                 cout<<"\t\t\t\t     | Price of item:           |   "<<endl;
                 cout<<"\t\t\t\t     |  ";cin>>p;
                 cout<<"\t\t\t\t     |                          |   "<<endl;
                 cout<<"\t\t\t\t     | Discount on item:        |   "<<endl;
                 cout<<"\t\t\t\t     |  ";cin>>d;
                 data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<endl;
                 cout<<"Record edited"<<endl;
                 token++;
             }
             else{
                 data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<endl;
                }
                data>>pcode>>pname>>price>>discount;
            }
            data.close();
            data1.close();
            
            remove("database.txt");
            rename("database1.txt","database.txt");
            
            if(token==0){
                cout<<"record not found sorry!"<<endl;
            }
     }
    
}
void billing::rem()
{
    fstream data,data1;
    int pkey;
    int token=0;
     cout<<"\t\t\t\t____________________________________"<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     cout<<"\t\t\t\t     |     Delete product!      |   "<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     cout<<"\t\t\t\t     |     Product deleted      |   "<<endl;
     cout<<"\t\t\t\t     | Product code of item:    |   "<<endl;
     cout<<"\t\t\t\t     |  "; cin>>pkey;
     data.open("database.txt", ios::in);
     if(!data){
         cout<<"File doesn't exist"<<endl;
     }
     else{
         
         data1.open("database1.txt" ,ios::app|ios::out);
         data>>pcode>>pname>>price>>discount;
         while(!data.eof())
         {
             if(pcode==pkey)
             {
                cout<<"\t\t\t\t     |     Product deleted      |   "<<endl;
                token++;
             }
             else
             {
                 data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<endl;
             }
             data>>pcode>>pname>>price>>discount;
         }
         data.close();
         data1.close();
         remove("dateabse.txt");
         rename("database1.txt", "database,txt");
         if(token==0){
             cout<<"record not found"<<endl;
         }
     }
}
void billing::list()
{
    fstream data;
    data.open("database.txt", ios::in);
    cout<<"\n\n|_________________________________________\n";
    cout<<"ProNo\t\tName\t\tPrice"<<endl;
    cout<<"\n\n|_________________________________________\n";
    data>>pcode>>pname>>price>>discount;
    while(!data.eof())
    {
        cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
        data>>pcode>>pname>>price>>discount;
    }
    data.close();
}
void billing::reciept()
{
    fstream data;
    
    int arrc[100];
    int arrq[100];
    string choice;
    int c=0;
    float amount=0;
    float discount=0;
    float total=0;
    
     cout<<"\t\t\t\t____________________________________"<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     cout<<"\t\t\t\t     |         Reciept          |   "<<endl;
     cout<<"\t\t\t\t     |--------------------------|   "<<endl;
     data.open("database.txt", ios::in);
     if(!data){
         cout<<"\t\t\t\t     |    Empty database        |   "<<endl;
     }
     else{
         data.close();
         
         list();
         
    cout<<"\t\t\t\t____________________________________"<<endl;
    cout<<"\t\t\t\t                                    "<<endl;
    cout<<"\t\t\t\t         Place the order!           "<<endl;
    cout<<"\t\t\t\t____________________________________"<<endl;
        do
        { m:
          cout<<"\t\t\t\t     | Product code of item:    |   "<<endl;  
          cout<<"\t\t\t\t     | "; cin>>arrc[c];
          cout<<"\t\t\t\t     | Product quantity:        |   "<<endl;
          cout<<"\t\t\t\t     | "; cin>>arrq[c];
          for(int i=0; i<c; i++ ){
              if(arrc[c]==arrc[i]){
                  cout<<"\n\n duplicate product code. Please try again! "<<endl;
                  goto m;
              }
            }
            c++;
            cout<<"\nDo you want to buy another product? If yes then press y else no"<<endl;
            cin>>choice;
        }while(choice == "y");
        cout<<"\n\t\t\t________________________Reciept________________________\n";
        cout<<"\nProduct No\tproduct name\tquantity\tprice\tamount\tamount afer price\n";
        
        for(int i=0; i<c ;i++)
        {
            data.open("database.txt", ios::in);
            data>>pcode>>pname>>price>>discount;
            while(!data.eof()){
                
                if(pcode==arrc[i]){
                    
                    amount= price*arrq[i];
                    
                    discount= amount-(amount*discount/100);
                    
                    total=total+discount;
                    
                    cout<<"\n"<<pcode<<"\t\t"<<pname<<"\t\t"<<arrq[i]<<"\t\t"<<price<<"\t"<<amount<<"\t"<<discount<<endl;
                }
                data>>pcode>>pname>>price>>discount;
            }
            
        }
        data.close();
     }
    cout<<"\n\t_____________________________________";
    cout<<"\n\t   total amount: "<<total<<endl;
}

int main() {
    billing object;
    object.menu();

    
}





