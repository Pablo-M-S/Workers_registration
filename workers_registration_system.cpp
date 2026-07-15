#include <iostream>
#include <fstream>

using namespace std;

struct workers{
string name;
int age;
double height;
};
workers A;
//==============≠=================//
//================================//
void first_message()
{
cout<<"welcome to the Workers list system!\n"<<endl;
cout<<"First, choose one option: \n"<<endl;
}
//==============≠=================//
//================================//
void show_menu()
{
cout<<"1 - register"<<endl;
cout<<"2 - Workers list"<<endl;
cout<<"3 - Exit\n"<<endl;
}
//==============≠=================//
//================================//
void regist(){
cout<<"\nlets start your registration!\n"<<endl;
cout<<"First, say your name: \n"<<endl;
getline(cin, A.name);
cout<<endl;
cout<<"now, please, your age: \n"<<endl;
cin>>A.age;
cout<<endl;
cout<<"now, your height: \n"<<endl;
cin>>A.height;
cin.ignore();
ofstream
file("persons.txt", ios::app);
if(!file){
cout<<"tente novamente mais tarde."<<endl;
return ;
}
file<<A.name<<"-"<<A.age<<"-"<<A.height<<endl;
cout<<"\nregistration sucessfull!\n"<<endl;
file.close();
show_menu();
}
//==============≠=================//
//================================//
void workers_list(){
cout<<endl;
ifstream
file("persons.txt");
if(!file){
cout<<"tente novamente mais tarde."<<endl;
return;
}
string line;
while (getline(file, line)){
cout<<line<<endl;}
file.close();
show_menu();
}
//==============≠=================//
//================================//
void bye(){
cout<<"\nok,thanks and goodbye!"<<endl;
}
//==============≠=================//
//================================//
void erro(){
cout<<"\ninvalid option, try again...\n"<<endl;
show_menu();
}
//==============≠=================//
//================================//
int main() 
{
//==============≠=================//
//================================//
first_message();
//==============≠=================//
//================================//
show_menu();
//==============≠=================//
//================================//
while ( true ) {
int question;
cin>>question;
cin.ignore();
if (question == 1){
regist();
}
//==============≠=================//
//================================//
else if ( question == 2 ){
workers_list();
cout<<endl;
}
//==============≠=================//
//================================//
else if ( question ==3 ){
bye();
break;
}
//==============≠=================//
//================================//
else{
erro();
}
//==============≠=================//
//================================//
}
return 0;
}
