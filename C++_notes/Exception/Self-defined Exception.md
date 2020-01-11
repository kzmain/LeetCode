1. Structure:
```
struct not_found_exception : public std::exception {
    const char * what () const throw () {
        return "Two sum not found";
    }
};

std::vector<int> inums = {2, 7, 11, 15};
int target             = 9;

std::vector<int> twoSum(std::vector<int>& nums, int target) {
   for(int i = 0; i < nums.size() ; i++){
       for(int j = 0; j < nums.size() ; j++){
           if(target == nums[i] + nums[j]){
               return std::vector<int>{i, j};
           }
       }
   }
   throw not_found_exception();
}
```

2. Reference
https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm