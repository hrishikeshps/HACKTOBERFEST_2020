#include<iostream>
using namespace std;
struct person
{
  public:
    char name[20];
    int roll_num;
    float percent;
    static int count;
  public:
    void data_input()
    {
      cout<<endl<<"Enter Student Name : ";
      cin>>ws;
      cin.getline(name,20);
      cout<<"Enter roll number and  percent : ";
      cin>>roll_num>>percent;
      count++;
    }
    void data_output()
    {
     cout<<"Student Name : "<<name<<endl;
     cout<<"Roll Number : "<<roll_num<<endl;
     cout<<"percentage : "<<percent<<"%"<<endl;
}  
    static void data_entry()
    {
    cout<<"Total Data Entry : "<<count<<endl;
}
};
int person::count;
int main()
{
    person P1,P2,P3;
    P1.data_input();
    P1.data_output();
    
    P2.data_input();
    P2.data_output();
    
    P3.data_input();
    P3.data_output();
    
    person::data_entry();
    return 0;
}
