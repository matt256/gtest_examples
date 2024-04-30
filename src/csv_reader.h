#include <vector>

namespace CsvUtils{

    struct {             // Structure declaration
    int myNum;         // Member (int variable)
    std::string myString;   // Member (string variable)
    } myStructure;       // Structure variable

    std::vector<myStructure> CsvToStructList(std::istream& str);
    std::vector<std::string> getNextLineAndSplitIntoTokens(std::istream& str)
}
