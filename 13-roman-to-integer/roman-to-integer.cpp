class Solution {
public:
int solve(string s){
    map<char, int>mp;
    int n = s.size();
    mp['I'] = 1, mp['V'] = 5, mp['X'] = 10, mp['L'] = 50;
    mp['C'] = 100, mp['D'] = 500, mp['M'] = 1000;
    int sum = 0;
    int i= 0;
    while(i<n){
        if(s[i] == 'I' && s[i+1] == 'V'){
            sum += 4;
            i+=2;
        }
        else if(s[i] == 'I' && s[i+1] == 'X'){
            sum += 9;
            i+=2;
        }
        else if(s[i] == 'X' && s[i+1] == 'L'){
             sum += 40;
              i+=2;
          }
        else if(s[i] == 'X' && s[i+1] == 'C'){
            sum += 90;
             i+=2;
        }
        else if(s[i] == 'C' && s[i+1] == 'D'){
            sum += 400;
            i+=2;
        }  
        else if(s[i] == 'C' && s[i+1] == 'M'){
             sum += 900;
             i+=2;
        }
        else{
            sum+=mp[s[i]];
            i++;
         }
    }
    return sum;
}

    int romanToInt(string s) {
        return solve(s);
    }
};