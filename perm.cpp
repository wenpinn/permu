#include <iostream>
#include <string>
using namespace std;
void perm(string s,int left,int right)
{
    if(left==right)
        cout<<s<<endl;
    else{
        for (int i=left;i<=right;i++)
        {
            swap(s[left],s[i]);
            perm(s,left+1,right);
            swap(s[left],s[i]);
        }
    }
}
int main(int argc, const char * argv[]) {
    string s="ABCDE";
    int n=(int)s.length();
    perm(s,0,n-1);
    return 0;
}