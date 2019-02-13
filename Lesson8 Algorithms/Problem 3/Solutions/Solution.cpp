#include <iostream>

using namespace std;

int alpha[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
string alphabet = "abcdefghijklmnopqrstuvwxyz";
int main()
{
    
    int k; string str;
    cin>>k;
    cin>>str;
    for(int i = 0; i < k; i++)
        cout<<str[i];
    
    for(int cur = k; cur < str.length(); cur++){
        int freq[26] = {0}, max = 0, t = 0;
        
        for(int i = cur - k; i < cur; i++)
            freq[str[i] - 'a']++;
        
        for(int i = 0; i < 26; i++){
            if(freq[i] > max){
                max = freq[i];
                t = i;
            }
        }

        t = alpha[t % 26];
        int i = (str[cur] - 'a' + t) % 26;
        cout<<alphabet[i];
    }
}
