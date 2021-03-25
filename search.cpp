#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <vector>

enum class Case{SENSITIVE, INSENSITIVE};

std::size_t Find(const std::string &source, const std::string &search_string, Case searchCase= Case::INSENSITIVE, std::size_t offset=0){

	// Implementation

	if (searchCase == Case::INSENSITIVE){

		// Convert the strings to either upper or lower case before comparing
         std::string s1,s2;

		std::transform(source.begin(), source.end(), std::back_inserter(s1), toupper);
		std::transform(search_string.begin(), search_string.end(), std::back_inserter(s2), toupper);

		return s1.find(s2,offset);

}
return source.find(search_string,offset);
}

std::vector<int> FindALL(const std::string &target, std::string search_string, Case searchCase = Case::INSENSITIVE, size_t offset = 0){

          std::vector<int> substr ;
          
          size_t found;
          while ((found = Find(target, search_string, Case::INSENSITIVE, offset )) != std::string::npos){

          	substr.push_back(found);
          	offset = found + 1;
          }

          // for (auto i =substr.begin(); i != substr.end(); ++i ){
    	     //     std::cout << *i << std::endl;
          // }    

          for (auto i : substr) {
          	std::cout << i << " ";
          }
          return substr;

}

int main(){


   	std::string s1, s2;

	getline(std::cin, s1);
	getline(std::cin, s2);
    auto x = Find (s1, s2);

    std::cout << "The value is : " << x << std::endl;
    

    FindALL(s1,s2);

   return 0; 
}