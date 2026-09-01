class Solution {
public:
    int getLucky(string s, int k) {
        int n= s.size();
        string str="";

        for(int i=0; i<n; i++){
            if(s[i]=='a'){
                str= str+ '1';
            }
            else if(s[i]=='b'){
                str= str+ '2';
            }
             else if(s[i]=='c'){
                str= str+ '3';
            }
             else if(s[i]=='d'){
                str= str+ '4';
            }
             else if(s[i]=='e'){
                str= str+ '5';
            }
             else if(s[i]=='f'){
                str= str+ '6';
            }
             else if(s[i]=='g'){
                str= str+ '7';
            }
             else if(s[i]=='h'){
                str= str+ '8';
            }
             else if(s[i]=='i'){
                str= str+ '9';
            }
             else if(s[i]=='j'){
                str= str+ "10";
            }
             else if(s[i]=='k'){
                str= str+ "11";
            }
             else if(s[i]=='l'){
                str= str+ "12";
            }
             else if(s[i]=='m'){
                str= str+ "13";
            }
             else if(s[i]=='n'){
                str= str+ "14";
            }
             else if(s[i]=='o'){
                str= str+ "15";
            }
             else if(s[i]=='p'){
                str= str+ "16";
            }
             else if(s[i]=='q'){
                str= str+ "17";
            }
             else if(s[i]=='r'){
                str= str+ "18";
            }
             else if(s[i]=='s'){
                str= str+ "19";
            }
             else if(s[i]=='t'){
                str= str+ "20";
            }
             else if(s[i]=='u'){
                str= str+ "21";
            }
             else if(s[i]=='v'){
                str= str+ "22";
            }
             else if(s[i]=='w'){
                str= str+ "23";
            }
             else if(s[i]=='x'){
                str= str+ "24";
            }
             else if(s[i]=='y'){
                str= str+ "25";
            }
             else if(s[i]=='z'){
                str= str+ "26";
            }
        }
        int res=0;
    
        while(k>0){
            int length= str.size();
            int i=0;
            int ans= 0;
            while(i<length){
                int last= str[i]-'0';
                ans+= last;
                i++;
            }
            k--;
            res= ans;
            str= to_string(ans);
        }
        return res;
    }
};