#include <iostream>
#include <map>
int main(){
   std::map<std::string, int> fruits;
   fruits["Apple"] = 3;
   fruits["Banana"] = 10;
   fruits["Mango"] = 12;

   for(std::pair<const std::string,int> pair : fruits){
      std::string fruit = pair.first;
      double amount = pair.second;
      std::cout << fruit + ": " + std::to_string(amount) << std::endl;
   }
return 0;
}


