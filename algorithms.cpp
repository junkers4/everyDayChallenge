#include <iostream>
#include <vector>
#include <map>

void anagrams (std::string firstWord,std::string comparedWord){

if (firstWord.size() = comparedWord.size()){
            std::cout<<"not anagram"<<std::endl;
}
else{
    std::map<char, bool> mapLetters;
    std::vector<char>letters;
    
        for(int i=0; i<firstWord.size; i++){
            letters.push_back(firstWord.at(i));
            mapLetters[firstWord.at(i)]= false;
            
        }
    
    for(int k=0;k<firstWord.size();k++){
       if (letters.at(k) )
    }   

    }
}

int main(){
std::cout<<"ddd";
}