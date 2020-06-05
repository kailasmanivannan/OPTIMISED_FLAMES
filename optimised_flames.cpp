#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void dosth()
{
    system("cls");
    cout<<"YOU GUYS ARE GONNA BE BEST FRIENDS... (._.)\n ";
}
void lover()
{
    system("cls");
    cout<<"YOU GUYS FORM A ROMANTIC PAIR...(._.)\n";
}
void sister()
{
    system("cls");
    cout<<"TAKE CARE CAUSE SHE IS YOUR BROTHER/SISTER...(._.)\n";
}
void enemey()
{
    system("cls");
    cout<<"BETTER BE AWAY ...CAUSE RESULT ENEMIES :(\n";
}
void affection()
{
    system("cls");
    cout<<"TOO MUCH OF AFFECTION WOW :)\n";
}
void marry()
{
    system("cls");
    cout<<"CONGRATS YOU ARE GOING TO GET MARRIED... :)\n";
}
void flames(int n)
{
    string a = "flames";
    string b;
    if(n<6)
    {
        switch(n)
        {
            case 1 : sister();
                     break;
            case 2 : enemey();
                     break;
            case 3 : dosth();
                     break;
            case 4 : enemey();
                     break;
            case 5 : dosth();
                     break;
            case 6 : marry();
                     break;
        }
    }
    else
    {
        int rem,start,end;
        for(int j=6;j>=2;j--)
        {
            rem=n%j;
            if(n%j==0)
            {
                int len = a.length();
                b=a.substr(0,len-1);
            }
            else
            {
                b=a.substr(rem);
                start=0;
                end=rem-1;
                char ch;
                for(int k=start;k<end;k++)
                {
                    ch=a[k];
                    b=b+ch;
                }
            }
            a=b;
            b.clear();   
        }
        char ch;
        ch=a[0];
        switch(ch)
        {
            case 'f' : dosth();
                       break;
            case 'l' : lover();
                       break;
            case 'a' : affection();
                       break;
            case 'm' : marry();
                       break;
            case 'e' : enemey();
                       break;
            case 's' : sister();
                       break;
        }
    }
    
}
int main()
{
    string name1,name2;
    int s1,s2,i,sum;
    char ch;
    bool flag1,flag2;
    do{
        system("cls");
        flag1=flag2=0;
        int a[25]={0};int b[25]={0};
        sum=0;
        cout<<"Enter you name...\n";
        cin>>name1;
        cout<<"Enter your  crush name...\n";
        cin>>name2;
        transform(name1.begin(),name1.end(),name1.begin(),::tolower);
        transform(name2.begin(),name2.end(),name2.begin(),::tolower);
        s1=name1.length();
        s2=name2.length();
        for(i=0;i<s1;i++)
        {
            if(isalpha(name1[i])==0){
                flag1=1;
                break;
            }     
        }
        for(i=0;i<s2;i++)
        {
            if(isalpha(name2[i]==0)){
                flag2=1;
                break;
            }
        }
        if(flag1==1||flag2==1){
            cout<<"Input should only contain  alphabets not other characters.";
            goto point1;
        }
        for(i=0;i<s1;i++)
        {
            a[name1[i]-'a']++;
        }
        for(i=0;i<s2;i++)
        {
            b[name2[i]-'a']++;
        }
        for(i=0;i<25;i++)
        {
            a[i]=abs(a[i]-b[i]);
            sum+=a[i];
        }
        flames(sum);
        goto point1;
        point1:
            cout<<"\nDo you want to try again (Y/N)...";
            cin>>ch;
    }while(ch=='y'||ch=='Y');
    return 0;
}
