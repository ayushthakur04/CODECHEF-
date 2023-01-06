string pangrams(string s) {
int arr[26]={0};
for(char& c:s){
    if(c>=97 && c<=122) arr[c-97]=1;
    else if(c>=65 && c<=90) arr[c-65]=1;
}
for(int i=0;i<26;i++)
   if(arr[i]==0) return "not pangram";
   return "pangram";

}
