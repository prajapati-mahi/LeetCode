class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        bool first= true;
        bool second= true;
        // true means black

        if(coordinate1[0] == 'a' || coordinate1[0] == 'c' || coordinate1[0] == 'e' || coordinate1[0] == 'g'){
            if(coordinate1[1] == '2' || coordinate1[1] == '4' || coordinate1[1] == '6' || coordinate1[1] == '8'){
                first= false;
            }
            else{
                first= true;
            }
        }
        if(coordinate1[0] == 'b' || coordinate1[0] == 'd' || coordinate1[0] == 'f' || coordinate1[0] == 'h'){
            if(coordinate1[1] == '2' || coordinate1[1] == '4' || coordinate1[1] == '6' || coordinate1[1] == '8'){
                first= true;
            }
            else{
                first= false;
            }
        }
        if(coordinate2[0] == 'a' || coordinate2[0] == 'c' || coordinate2[0] == 'e' ||coordinate2[0] == 'g'){
            if(coordinate2[1] == '2' || coordinate2[1] == '4' || coordinate2[1] == '6' || coordinate2[1] == '8'){
                second= false;
            }
            else{
                second= true;
            }
        }
        if(coordinate2[0] == 'b' || coordinate2[0] == 'd' || coordinate2[0] == 'f' ||coordinate2[0] == 'h'){
            if(coordinate2[1] == '2' || coordinate2[1] == '4' || coordinate2[1] == '6' || coordinate2[1] == '8'){
                second= true;
            }
            else{
                second= false;
            }
        }
        if(first == second){
            return true;
        }
        return false;
    }
};