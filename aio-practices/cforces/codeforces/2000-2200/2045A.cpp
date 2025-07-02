#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int cnt[128];
int main(){
	string s;
	cin>>s;
	for(char c:s){
		cnt[c]++;
	}
	int ans=0;
	for(int i=0;i<=cnt['Y'];i++){
		for(int j=0;j<=min(cnt['N'],cnt['G']);j++){
			int y=i+cnt['A']+cnt['E']+cnt['I']+cnt['O']+cnt['U'];
			int f=s.length()-y-j;
			int cur=min(y,f/2);
			ans=max(ans,3*cur+min(j,2*cur));
		}
	}
	cout<<ans<<endl;
}
 