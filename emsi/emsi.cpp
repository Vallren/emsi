// emsi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>



class console {
    int readConsole(int argc, char *argv[]) {
        if (argc < 5) {
            std::cout << "Four arguments are expected, you have entered: " << argc << std::endl;
        }
        for (int i = 0; i < (argc - 1); i++) {
            std::string currentArgument(argv[i]);
            if (currentArgument.find(".csv") == std::string::npos || currentArgument.find(".log") == std::string::npos) {
                std::cout << "Entered files are missing appropriate file extensions" << std::endl;
                return -1;
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
        //computing skills file open and enter into map
        std::string reportFileName = "computingSkills.csv";
        std::ifstream computingSkillsFile;
        std::string jobTitle;
        std::string jobNums;
        std::map<std::string, int> jobs;
        computingSkillsFile.open(reportFileName);
        if (computingSkillsFile.is_open() && computingSkillsFile.good()) {
            try {
                while (getline(computingSkillsFile, jobTitle, ',')) {
                    getline(computingSkillsFile, jobNums, '\n');
                    jobs.insert(std::pair<std::string, int>(jobTitle, std::stoi(jobNums)));
                }
            }
            catch (...) {
                std::cout << "Error with data file" << std::endl;
            }
        }
        //skills against file open and enter into map
        std::string crossMatchFileName = "SkillsAgainstCategory.csv";
        std::ifstream skillsAgainstFile;
        std::string jobName;
        std::string jobCategory;
        std::map<std::string, std::string> categories;
        skillsAgainstFile.open(crossMatchFileName);
        if (skillsAgainstFile.is_open() && skillsAgainstFile.good()) {
            try {
                while (getline(skillsAgainstFile, jobName, ',')) {
                    getline(skillsAgainstFile, jobCategory, '\n');
                    categories.insert(std::pair<std::string, std::string>(jobName, jobCategory));
                }
            }
            catch (...) {
                std::cout << "Error with data file" << std::endl;
            }
        }
    }
    /*
    void writeFile() {

    }
};*/

class analysis {
    // job title and number into categories // category = ((jobtitle1 = amount) + (jobtitle2 = amount))
    //iterate through both maps to find common job titles, where job title are common add job value to job category
    // iterate through categories 1st to find potential categories, then through jobs to find totals
    //search for job names in job categories, return posiotn of job name if match and add number to category
    // this is janky placeholder just for thinking
    std::map<std::string, int> analysedJobs;
    void analyseJobs(categories, jobs) {
        for (int i = 0; i < (categories.size()); i++) {
            
    }

};
class IOutput {

};
class convertToHTML : IOutput {

};
class convertToSVG : IOutput {

};
class convertToCSV : IOutput {

};
int main() {
    
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
