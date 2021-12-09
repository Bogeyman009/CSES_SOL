#include<bits/stdc++.h>
using namespace std;

vector<string>v;

void printPermutn(string str, string ans)
	{
        
		// If string is empty
		if (str.length() == 0) {
			v.push_back({ans});
			return;
		}

		for (int i = 0; i < str.length(); i++) {

			char ch = str[i];

			
			string ros = str.substr(0, i) +
						str.substr(i + 1);
       

		
			printPermutn(ros, ans + ch);
		}
	}
bool print(vector<string> v){
    for(int i=0;i<v.size();i++){
        int l=0;
        int h=v[i].size()-1;
        while(l<h){
            if(v[i][l++] != v[i][h--])
                return false;
                
        }
    }
    return true;

}

int main(){
   
		string s;
        cin>>s;
		printPermutn(s, "");
        if(print(v))
        cout<<"POSSIBLE";
        else
        cout<<"IMPOSSIBLE";
}