#include<iostream.h>
int main()
{
    string s="Sri.$J3.$S3.txt", f="Sri.089.002.txt";
    if(s.find("$S") + 1)
    {
        int rem=((s.length() - s.find("$S")));
        std::cout<<rem<<std::endl;
        std::cout<<"execute follow command";
    }
}