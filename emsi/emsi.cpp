// emsi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>

int main()
{

}
class console {
    void readConsole() {
        if (argc < 5) {
            std::cout << "Four arguments are expected, you have entered: " << argc << std::endl;
        }
        for (int i = 0; i < (argc - 1); i++) {
            if (argv[i].find(".csv") = std::string::npos) || if (argv[i].find(".log") = std::string::npos) {
                std::cout << "Entered files are missing appropriate file extensions" << std::endl;
                return -1
            }
            else {
                std::string reportFileName = argv[0];
                std::string crossMatchFileName = argv[1];
                std::string errorLogFileName = argv[2];
                std::string format = argv[3];
                std::string outputFileName = argv[4];
            }
        }

    }
};
/*
class fileReadWrite {
    struct computingSkillsInfo {
        std::vector <std::string> jobTitles;
        std::vector <int> numPositions;
    };
*/
    void readFile() {
        std::ifstream computingSkillsFile;
        std::string jobTitle;
        std::string jobNums;
        std::map<std::string, int> jobs;
        computingSkillsFile.open(reportFileName);
        if (computingSkillsFile.is_open() && computingSkillsFile.good()) {
            try {
                while (getline(computingSkillsFile, jobTitle, ',')) {
                    getline(computingSkillsFile, jobNums, '\n');
                    jobs.insert(std::pair<std::string, int>(jobTitle, std::stoi(jobNums));
                }
            }
            catch (...) {
                std::cout << "Error with data file" << std::endl;
            }
        }
    }
    void writeFile() {

    }
};
class analysis {

};
class IOutput {

};
class convertToHTML : IOutput {

};
class convertToSVG : IOutput {

};
class convertToCSV : IOutput {

};
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
