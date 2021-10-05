
//problem link
//https://leetcode.com/problems/validate-stack-sequences/

//HAPPY CODING

stack<int>st;
        int i=0,j=0;
        int n=pushed.size();
        int m = popped.size();
        while(i<n && j<m){
            if(st.empty() || st.top()!=popped[j]){
                st.push(pushed[i]);   
                i++;
            }else{
                st.pop();
                j++;
            }
        }
        while(j<m){
            if(st.empty()){
                return false;
            }else if(st.size()>0 && st.top()==popped[j]){
                st.pop();
            }else if(st.size()>0 && st.top()!=popped[j]){
                return false;
            }
            j++;
        }
        return true;
