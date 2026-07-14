#include <iostream>
#include <fstream>

using namespace std;

struct workers{
string name;
int age;
double height;
};
int main (){
workers A;
cout<<"welcome to the Workers list system!\n"<<endl;
cout<<"First, choose one option: \n"<<endl;
while ( true ){
cout<<"1 - register"<<endl;
cout<<"2 - Workers list"<<endl;
cout<<"3 - Exit\n"<<endl;
int question;
cin>>question;
cin.ignore();
if (question == 1){
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
return 1;
}
file<<A.name<<"-"<<A.age<<"-"<<A.height<<endl;
cout<<"\nregistration sucessfull!\n"<<endl;
file.close();
}
else if ( question == 2 ){
cout<<endl;
ifstream
file("persons.txt");
if(!file){
cout<<"tente novamente mais tarde."<<endl;
return 1;
}
string line;
while (getline(file, line)){
cout<<line<<endl;}
file.close();
}
else if ( question == 3 ){
cout<<"\nok,thanks and goodbye!"<<endl;
break;
}
else{
cout<<"\ninvalid option, try again...\n"<<endl;
}
}
return 0;
}

    