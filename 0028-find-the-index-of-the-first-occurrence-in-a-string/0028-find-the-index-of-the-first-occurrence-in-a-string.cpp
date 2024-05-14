class Solution {
public:
   int strStr(string haystack, string needle) {
        int i=0; 
        int j=0;
        string str;
      while(j<haystack.length() && i < haystack.length()){
        str += haystack[i];
          if(str == needle){
              return j;
              }
          else if(i == haystack.size()-1){
                j++;
              i=j;
              str = "";
          } 
          else i++;
          
          
          
}
        
        return -1;
}

};
