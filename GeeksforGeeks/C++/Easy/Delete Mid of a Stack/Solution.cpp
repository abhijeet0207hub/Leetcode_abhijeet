class Solution {
  public:
    void deleteMid(stack<int>& s) {
         
        int n=0;
        stack<int> temp;
        int mid=(s.size()/2);
        
        while(n< mid){
            temp.push(s.top());
            s.pop();
            n++;
        }
        s.pop();
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
    }
    
};