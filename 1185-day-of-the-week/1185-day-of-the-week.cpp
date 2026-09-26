class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
        if (month < 3) year -= 1;
        int num= (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
        if(num==0){
            return "Sunday";
        }
        else if(num==1){
            return "Monday";
        }
        else if(num==2){
            return "Tuesday";
        }
        else if(num==3){
            return "Wednesday";
        }
        else if(num==4){
            return "Thursday";
        }
        else if(num==5){
            return "Friday";
        }
        return "Saturday";
    }
};