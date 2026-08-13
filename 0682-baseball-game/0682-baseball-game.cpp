class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n= operations.size();
        stack<int> st;
        int newrecord=0;
        int prev= -1;
        int secondprev=-1;
        for(int i=0; i<n; i++){
            if(operations[i]== "C"){
                st.pop();
                if(!st.empty()){
                    prev = st.top();
                    if(st.size() >= 2){
                        int top = st.top();
                        st.pop();
                        secondprev = st.top();
                        st.push(top);
                    } else {
                        secondprev = -1;
                    }
                } else {
                    prev = -1;
                    secondprev = -1;
                }
            }
            else if(operations[i]=="D"){
                newrecord= 2*st.top();
                secondprev= prev;
                prev= st.top();
                st.push(newrecord);
            }
            else if(operations[i]== "+"){
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.push(top1);
                newrecord = top1 + top2;
                secondprev = top2;
                prev = top1;
                st.push(newrecord);
            }
            else{
                int num=stoi(operations[i]);
                if(st.empty()== true){
                    prev= -1;
                    secondprev=-1;
                }
                else{
                    secondprev= prev;
                    prev= st.top();
                }
                st.push(num);
            }
        }
        int s= st.size();
        int ans=0;
        for(int i=0; i<s; i++){
            ans+= st.top();
            st.pop();
        }
        return ans;
    }
};