#include <iostream>
using namespace std;
void removeConsecutiveDuplicates(char *input)
{
    if(input[0]=='\0')
    {
        
        return ;
    }
    
    if(input[0]!=input[1])
    {
        
        return removeConsecutiveDuplicates(input+1);
    }
    
    if(input[0]==input[1])
    {
        
        int i=0;
        for(;input[i]!='\0';i++)
        {
            
            input[i]=input[i+1];
        }
        
        return removeConsecutiveDuplicates(input);
    }
    

}
int length(Node *head) 
{


    if (head == NULL)
        return 0;
    return 1 + length(head->next);
  
}


int main() {
    cout<<"bro length matters"<<endl;
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
