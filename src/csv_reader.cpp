#include "csv_reader.h"
#include <list>
#include <string>
#include <vector>
#include <map>
#include <any>



using namespace csvUtils;
std::vector<myStructure> csvUtils::CsvToStructList(std::istream& str){

    std::map<std::string, std::any> keyvals;
    
    vector<std::any> cols; 

    std::vector<std::any> csvUtils::getNextLineAndSplitIntoTokens(str);


    //TODO: write mapper from 

    //std::string name2 = std::any_cast<std::string>(notebook["PetName"]); // = "Pluto"
    

}


std::vector<std::any> csvUtils::getNextLineAndSplitIntoTokens(std::istream& str)
{
    std::vector<std::any>   result;
    std::string             line;
    std::getline(str,line);

    std::stringstream          lineStream(line);
    std::string                cell;

    while(std::getline(lineStream,cell, ','))
    {
        result.push_back(cell);
    }
    // This checks for a trailing comma with no data after it.
    if (!lineStream && cell.empty())
    {
        // If there was a trailing comma then add an empty element.
        result.push_back("");
    }
    return result;
}