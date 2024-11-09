#include <iostream>


int balance;
void bank();
void feat();


void withdraw();
void deposit();

int main(){
    std::cout<<"HELLO WORLD";
    bank();
    return 0;
}

void bank(){
    std::cout<<"Enter Your Name :  "<<std::endl;
    std::string name;
    std::getline(std::cin, name);
    std::cout<<"Enter Your Age :  "<<std::endl;
    int age;
    std::cin>>age;
    std::cout<<"Hello, "<<name<<"! Your age is "<<age<<"."<<std::endl;
    std::cout<<"Enter Your Initial Balance :  "<<std::endl;
    std::cin>>balance;
    std::cout<<"Your current balance is: "<<balance<<std::endl;
    feat();    



}

void feat(){
    int choice=0;
   do{
    std::cout<<"Would You like to use any feature of the bank: "<<std::endl;
    std::cout<<"1. Deposit"<<std::endl;
    std::cout<<"2. Withdraw"<<std::endl;
    std::cout<<"3. Check Balance"<<std::endl;
    std::cout<<"4. Exit"<<std::endl;
    std::cin>>choice;
    switch (choice)
    {
    case 1:
        std::cout<<"Deposit"<<std::endl;
        deposit();
        break;
    case 2:
        std::cout<<"Withdraw"<<std::endl;
        withdraw();
                break;
    case 3:
        std::cout<<"Balance"<<std::endl;
        std::cout<<"Your Balance is "<< balance<<"\n";
                break;
    case 4:
        std::cout<<"BREAKING"<<std::endl;
                break;
    default:
    std::cout<<"Invalid choice"<<std::endl;
    }} while(choice!=4);}

void deposit(){
    std::cout<<"Enter the amount you want to deposit: "<<std::endl;
    int deposit_amount;
    std::cin>>deposit_amount;
    balance+=deposit_amount;
    std::cout<<"Your new balance is: "<<balance<<std::endl;
}
void withdraw(){
    std::cout<<"Enter the amount you want to withdraw: "<<std::endl;
    int withdraw_amount;
    std::cin>>withdraw_amount;
    
    if(withdraw_amount<0){
        std::cout<<"Invalid amount"<<std::endl;
    }
    
    else{if(withdraw_amount<=balance){
        balance-=withdraw_amount;
        std::cout<<"Your new balance is: "<<balance<<std::endl;
    }else{
        std::cout<<"Insufficient balance"<<std::endl;
    }
}}