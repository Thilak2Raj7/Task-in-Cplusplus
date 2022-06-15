#ifndef INPUTCENTER_H_INCLUDED
#define INPUTCENTER_H_INCLUDED

class InputCenter{

private:
string bankName;
string bankType;
string branch;
string date;
int interest;
public:
string getName()
{
cout<<"Enter the bank name";
cin>>bankName;
return bankName;
}
string getType()
{
cout<<"Enter the bank type";
cin>>bankType;
return bankType;
}
string getBranch()
{
cout<<"Enter the branch";
cin>> branch;
return branch;
}
string getDate()
{
cout<<"Enter the date";
cin>>date;
return date;
}
int getInterest(){
cout<<"Enter the bank interest";
cin>>interest;
return interest;
}
};

#endif // INPUTCENTER_H_INCLUDED
